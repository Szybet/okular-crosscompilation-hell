/*
 Copyright (C) 2003-2008  Justin Karneges <justin@affinix.com>
 Copyright (C) 2006  Michail Pishchagin

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include <QCoreApplication>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>
#include <cstdio>

// QtCrypto has the declarations for all of QCA
#include <QtCrypto>

#ifdef QT_STATICPLUGIN
#include "import_plugins.h"
#endif

static QString socketErrorToString(QAbstractSocket::SocketError x)
{
    QString s;
    switch (x) {
    case QAbstractSocket::ConnectionRefusedError:
        s = QStringLiteral("connection refused or timed out");
        break;
    case QAbstractSocket::RemoteHostClosedError:
        s = QStringLiteral("remote host closed the connection");
        break;
    case QAbstractSocket::HostNotFoundError:
        s = QStringLiteral("host not found");
        break;
    case QAbstractSocket::SocketAccessError:
        s = QStringLiteral("access error");
        break;
    case QAbstractSocket::SocketResourceError:
        s = QStringLiteral("too many sockets");
        break;
    case QAbstractSocket::SocketTimeoutError:
        s = QStringLiteral("operation timed out");
        break;
    case QAbstractSocket::DatagramTooLargeError:
        s = QStringLiteral("datagram was larger than system limit");
        break;
    case QAbstractSocket::NetworkError:
        s = QStringLiteral("network error");
        break;
    case QAbstractSocket::AddressInUseError:
        s = QStringLiteral("address is already in use");
        break;
    case QAbstractSocket::SocketAddressNotAvailableError:
        s = QStringLiteral("address does not belong to the host");
        break;
    case QAbstractSocket::UnsupportedSocketOperationError:
        s = QStringLiteral("operation is not supported by the local operating system");
        break;
    default:
        s = QStringLiteral("unknown socket error");
        break;
    }
    return s;
}

static QString saslAuthConditionToString(QCA::SASL::AuthCondition x)
{
    QString s;
    switch (x) {
    case QCA::SASL::NoMechanism:
        s = QStringLiteral("no appropriate mechanism could be negotiated");
        break;
    case QCA::SASL::BadProtocol:
        s = QStringLiteral("bad SASL protocol");
        break;
    case QCA::SASL::BadAuth:
        s = QStringLiteral("authentication failed");
        break;
    case QCA::SASL::NoAuthzid:
        s = QStringLiteral("authorization failed");
        break;
    case QCA::SASL::TooWeak:
        s = QStringLiteral("mechanism too weak for this user");
        break;
    case QCA::SASL::NeedEncrypt:
        s = QStringLiteral("encryption is needed to use this mechanism");
        break;
    case QCA::SASL::Expired:
        s = QStringLiteral("passphrase expired");
        break;
    case QCA::SASL::Disabled:
        s = QStringLiteral("account is disabled");
        break;
    case QCA::SASL::NoUser:
        s = QStringLiteral("user not found");
        break;
    case QCA::SASL::RemoteUnavailable:
        s = QStringLiteral("needed remote service is unavailable");
        break;
    // AuthFail or unknown (including those defined for client only)
    default:
        s = QStringLiteral("generic authentication failure");
        break;
    };
    return s;
}

// --- ServerTest declaration

class ServerTest : public QObject
{
    Q_OBJECT

private:
    QString     host, proto, realm, str;
    int         port;
    QTcpServer *tcpServer;
    QList<int>  ids;

public:
    ServerTest(const QString &_host, int _port, const QString &_proto, const QString &_realm, const QString &_str);

    int  reserveId();
    void releaseId(int id);

public Q_SLOTS:
    void start();

Q_SIGNALS:
    void quit();

private Q_SLOTS:
    void server_newConnection();
};

// --- ServerTestHandler

class ServerTestHandler : public QObject
{
    Q_OBJECT

private:
    ServerTest *serverTest;
    QTcpSocket *sock;
    QCA::SASL  *sasl;
    int         id;
    QString     host, proto, realm, str;
    int         mode; // 0 = receive mechanism list, 1 = sasl negotiation, 2 = app
    int         toWrite;

public:
    ServerTestHandler(ServerTest    *_serverTest,
                      QTcpSocket    *_sock,
                      const QString &_host,
                      const QString &_proto,
                      const QString &_realm,
                      const QString &_str)
        : serverTest(_serverTest)
        , sock(_sock)
        , host(_host)
        , proto(_proto)
        , realm(_realm)
        , str(_str)
    {
        id = serverTest->reserveId();

        sock->setParent(this);
        connect(sock, &QTcpSocket::disconnected, this, &ServerTestHandler::sock_disconnected);
        connect(sock, &QTcpSocket::readyRead, this, &ServerTestHandler::sock_readyRead);
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
        connect(sock, &QTcpSocket::errorOccurred, this, &ServerTestHandler::sock_error);
#else
        connect(sock,
                QOverload<QAbstractSocket::SocketError>::of(&QTcpSocket::error),
                this,
                &ServerTestHandler::sock_error);
#endif
        connect(sock, &QTcpSocket::bytesWritten, this, &ServerTestHandler::sock_bytesWritten);

        sasl = new QCA::SASL(this);
        connect(sasl, &QCA::SASL::authCheck, this, &ServerTestHandler::sasl_authCheck);
        connect(sasl, &QCA::SASL::nextStep, this, &ServerTestHandler::sasl_nextStep);
        connect(sasl, &QCA::SASL::authenticated, this, &ServerTestHandler::sasl_authenticated);
        connect(sasl, &QCA::SASL::readyRead, this, &ServerTestHandler::sasl_readyRead);
        connect(sasl, &QCA::SASL::readyReadOutgoing, this, &ServerTestHandler::sasl_readyReadOutgoing);
        connect(sasl, &QCA::SASL::error, this, &ServerTestHandler::sasl_error);
        connect(sasl, &QCA::SASL::serverStarted, this, &ServerTestHandler::sasl_serverStarted);

        mode    = 0; // mech list mode
        toWrite = 0;

        int flags = 0;
        flags |= QCA::SASL::AllowPlain;
        flags |= QCA::SASL::AllowAnonymous;
        sasl->setConstraints((QCA::SASL::AuthFlags)flags, 0, 256);

        printf("%d: Connection received!  Starting SASL handshake...\n", id);
        sasl->startServer(proto, host, realm);
    }

    ~ServerTestHandler() override
    {
        serverTest->releaseId(id);
    }

private Q_SLOTS:
    void sasl_serverStarted()
    {
        sendLine(sasl->mechanismList().join(QStringLiteral(" ")));
    }

    void sock_disconnected()
    {
        printf("%d: Connection closed.\n", id);
        discard();
    }

    void sock_error(QAbstractSocket::SocketError x)
    {
        if (x == QAbstractSocket::RemoteHostClosedError) {
            printf("%d: Error: client closed connection unexpectedly.\n", id);
            discard();
            return;
        }

        printf("%d: Error: socket: %s\n", id, qPrintable(socketErrorToString(x)));
        discard();
    }

    void sock_readyRead()
    {
        if (sock->canReadLine()) {
            QString line = QString::fromLatin1(sock->readLine());
            line.truncate(line.length() - 1); // chop the newline
            handleLine(line);
        }
    }

    void sock_bytesWritten(qint64 x)
    {
        if (mode == 2) // app mode
        {
            toWrite -= sasl->convertBytesWritten(x);
            if (toWrite == 0) {
                printf("%d: Sent, closing.\n", id);
                sock->close();
            }
        }
    }

    void sasl_nextStep(const QByteArray &stepData)
    {
        QString line = QStringLiteral("C");
        if (!stepData.isEmpty()) {
            line += QLatin1Char(',');
            line += arrayToString(stepData);
        }
        sendLine(line);
    }

    void sasl_authCheck(const QString &user, const QString &authzid)
    {
        printf("%d: AuthCheck: User: [%s], Authzid: [%s]\n", id, qPrintable(user), qPrintable(authzid));

        // user - who has logged in, confirmed by sasl
        // authzid - the identity the user wishes to act as, which
        //   could be another user or just any arbitrary string (in
        //   XMPP, this field holds a Jabber ID, for example).  this
        //   field is not necessarily confirmed by sasl, and the
        //   decision about whether the user can act as the authzid
        //   must be made by the app.

        // for this simple example program, we allow anyone to use
        //   the service, and simply continue onward with the
        //   negotiation.
        sasl->continueAfterAuthCheck();
    }

    void sasl_authenticated()
    {
        sendLine(QStringLiteral("A"));
        printf("%d: Authentication success.\n", id);
        mode = 2; // switch to app mode
        printf("%d: SSF: %d\n", id, sasl->ssf());
        sendLine(str);
    }

    void sasl_readyRead()
    {
        QByteArray a = sasl->read();
        printf("%d: Warning, client sent %d bytes unexpectedly.\n", id, int(a.size()));
    }

    void sasl_readyReadOutgoing()
    {
        sock->write(sasl->readOutgoing());
    }

    void sasl_error()
    {
        int e = sasl->errorCode();
        if (e == QCA::SASL::ErrorInit) {
            printf("%d: Error: sasl: initialization failed.\n", id);
        } else if (e == QCA::SASL::ErrorHandshake) {
            QString errstr = saslAuthConditionToString(sasl->authCondition());
            sendLine(QStringLiteral("E,") + errstr);
            printf("%d: Error: sasl: %s.\n", id, qPrintable(errstr));
        } else if (e == QCA::SASL::ErrorCrypt) {
            printf("%d: Error: sasl: broken security layer.\n", id);
        } else {
            printf("%d: Error: sasl: unknown error.\n", id);
        }

        sock->close();
    }

private:
    void discard()
    {
        deleteLater();
    }

    void handleLine(const QString &line)
    {
        printf("%d: Reading: [%s]\n", id, qPrintable(line));
        if (mode == 0) {
            int n = line.indexOf(QLatin1Char(' '));
            if (n != -1) {
                QString mech = line.mid(0, n);
                QString rest = QString::fromLatin1(line.mid(n + 1).toUtf8());
                sasl->putServerFirstStep(mech, stringToArray(rest));
            } else
                sasl->putServerFirstStep(line);
            ++mode;
        } else if (mode == 1) {
            QString type, rest;
            int     n = line.indexOf(QLatin1Char(','));
            if (n != -1) {
                type = line.mid(0, n);
                rest = line.mid(n + 1);
            } else {
                type = line;
                rest = QLatin1String("");
            }

            if (type == QLatin1String("C")) {
                sasl->putStep(stringToArray(rest));
            } else {
                printf("%d: Bad format from peer, closing.\n", id);
                sock->close();
                return;
            }
        }
    }

    QString arrayToString(const QByteArray &ba)
    {
        QCA::Base64 encoder;
        return encoder.arrayToString(ba);
    }

    QByteArray stringToArray(const QString &s)
    {
        QCA::Base64 decoder(QCA::Decode);
        return decoder.stringToArray(s).toByteArray();
    }

    void sendLine(const QString &line)
    {
        printf("%d: Writing: {%s}\n", id, qPrintable(line));
        QString    s = line + QLatin1Char('\n');
        QByteArray a = s.toUtf8();
        if (mode == 2) // app mode
        {
            toWrite += a.size();
            sasl->write(a); // write to sasl
        } else              // mech list or sasl negotiation
            sock->write(a); // write to socket
    }
};

// --- ServerTest implementation

ServerTest::ServerTest(const QString &_host,
                       int            _port,
                       const QString &_proto,
                       const QString &_realm,
                       const QString &_str)
    : host(_host)
    , proto(_proto)
    , realm(_realm)
    , str(_str)
    , port(_port)
{
    tcpServer = new QTcpServer(this);
    connect(tcpServer, &QTcpServer::newConnection, this, &ServerTest::server_newConnection);
}

int ServerTest::reserveId()
{
    int n = 0;
    while (ids.contains(n))
        ++n;
    ids += n;
    return n;
}

void ServerTest::releaseId(int id)
{
    ids.removeAll(id);
}

void ServerTest::start()
{
    if (!tcpServer->listen(QHostAddress::Any, port)) {
        printf("Error: unable to bind to port %d.\n", port);
        emit quit();
        return;
    }

    printf("Serving on %s:%d, for protocol %s ...\n", qPrintable(host), port, qPrintable(proto));
}

void ServerTest::server_newConnection()
{
    QTcpSocket *sock = tcpServer->nextPendingConnection();
    new ServerTestHandler(this, sock, host, proto, realm, str);
}

// ---

void usage()
{
    printf("usage: saslserver host (message)\n");
    printf("options: --proto=x, --realm=x\n");
}

int main(int argc, char **argv)
{
    QCA::Initializer init;
    QCoreApplication qapp(argc, argv);

    QCA::setAppName(QStringLiteral("saslserver"));

    QStringList args = qapp.arguments();
    args.removeFirst();

    // options
    QString proto = QStringLiteral("qcatest"); // default protocol
    QString realm;
    for (int n = 0; n < args.count(); ++n) {
        if (!args[n].startsWith(QLatin1String("--")))
            continue;

        QString opt = args[n].mid(2);
        QString var, val;
        int     at = opt.indexOf(QLatin1Char('='));
        if (at != -1) {
            var = opt.mid(0, at);
            val = opt.mid(at + 1);
        } else
            var = opt;

        if (var == QLatin1String("proto"))
            proto = val;
        else if (var == QLatin1String("realm"))
            realm = val;

        args.removeAt(n);
        --n; // adjust position
    }

    if (args.count() < 1) {
        usage();
        return 0;
    }

    QString host;
    int     port = 8001; // default port

    QString hostinput = args[0];
    QString str       = QStringLiteral("Hello, World");
    if (args.count() >= 2)
        str = args[1];

    int at = hostinput.indexOf(QLatin1Char(':'));
    if (at != -1) {
        host = hostinput.mid(0, at);
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 2)
        port = QStringView(hostinput).mid(at + 1).toInt();
#else
        port = hostinput.midRef(at + 1).toInt();
#endif
    } else
        host = hostinput;

    if (!QCA::isSupported("sasl")) {
        printf("Error: SASL support not found.\n");
        return 1;
    }

    ServerTest server(host, port, proto, realm, str);
    QObject::connect(&server, &ServerTest::quit, &qapp, &QCoreApplication::quit);
    QTimer::singleShot(0, &server, &ServerTest::start);
    qapp.exec();

    return 0;
}

#include "saslserver.moc"
