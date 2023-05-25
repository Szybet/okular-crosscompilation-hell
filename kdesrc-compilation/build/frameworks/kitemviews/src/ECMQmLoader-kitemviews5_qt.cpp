/* This file was generated by ecm_create_qm_loader(). DO NOT EDIT!
 *
 * Building this file in a library ensures translations are automatically loaded
 * when an application makes use of the library.
 *
 *
 * SPDX-FileCopyrightText: 2014 Aurélien Gâteau <agateau@kde.org>
 * SPDX-FileCopyrightText: 2015 Alex Merry <alex.merry@kde.org>
 * SPDX-FileCopyrightText: 2023 Ingo Klöcker <kloecker@kde.org>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <QCoreApplication>
#include <QLocale>
#include <QStandardPaths>
#include <QThread>
#include <QTranslator>
#include <QDir>

namespace {

    static QLocale getSystemLocale()
    {
#if defined(Q_OS_WIN) || defined(Q_OS_MAC)
        // On Windows and Apple OSs, we cannot use QLocale::system() if an application-specific
        // language was set by kxmlgui because Qt ignores LANGUAGE on Windows and Apple OSs.
        // The following code is a simplified variant of QSystemLocale::fallbackUiLocale()
        // (in qlocale_unix.cpp) ignoring LC_ALL, LC_MESSAGES, and LANG.
        QString language = qEnvironmentVariable("LANGUAGE");
        if (!language.isEmpty()) {
            language = language.split(QLatin1Char{':'}).constFirst();
            if (!language.isEmpty()) {
                return QLocale{language};
            }
        }
#endif
        return QLocale::system();
    }

    enum class LoadOptions { CreateWatcher, DoNotCreateWatcher };

    void load(LoadOptions options);

    class LanguageChangeWatcher : public QObject
    {
    public:
        LanguageChangeWatcher(QObject *parent) : QObject(parent)
        {
            m_loadedLocale = getSystemLocale().name();
            QCoreApplication::instance()->installEventFilter(this);
        }

    private:
        bool eventFilter(QObject *obj, QEvent *event) override
        {
            if (event->type() == QEvent::LanguageChange) {
                const auto systemLocaleName = getSystemLocale().name();
                if (m_loadedLocale != systemLocaleName) {
                    m_loadedLocale = systemLocaleName;
                    load(LoadOptions::DoNotCreateWatcher);
                }
            }
            return QObject::eventFilter(obj, event);
        }


        QString m_loadedLocale;
    };

    bool loadTranslation(const QString &localeDirName)
    {
        QString subPath = QStringLiteral("locale/") + localeDirName + QStringLiteral("/LC_MESSAGES/kitemviews5_qt.qm");

#if defined(Q_OS_ANDROID)
        const QString fullPath = QStringLiteral("assets:/share/") + subPath;
        if (!QFile::exists(fullPath)) {
            return false;
        }
#else
        const QString fullPath = QStandardPaths::locate(QStandardPaths::GenericDataLocation, subPath);
        if (fullPath.isEmpty()) {
            return false;
        }
#endif
        QTranslator *translator = new QTranslator(QCoreApplication::instance());
        if (!translator->load(fullPath)) {
            delete translator;
            return false;
        }
        QCoreApplication::instance()->installTranslator(translator);
        return true;
    }

    void load(LoadOptions options)
    {
        // The way Qt translation system handles plural forms makes it necessary to
        // have a translation file which contains only plural forms for `en`. That's
        // why we load the `en` translation unconditionally, then load the
        // translation for the current locale to overload it.
        loadTranslation(QStringLiteral("en"));

        const QLocale locale = getSystemLocale();
        if (locale.name() != QStringLiteral("en")) {
            if (!loadTranslation(locale.name())) {
                if (!loadTranslation(locale.bcp47Name())) {
                    const int i = locale.name().indexOf(QLatin1Char('_'));
                    if (i > 0) {
                        loadTranslation(locale.name().left(i));
                    }
                }
            }
        }

        if (options == LoadOptions::CreateWatcher) {
            new LanguageChangeWatcher(QCoreApplication::instance());
        }
    }

    // Helper to call load() on the main thread.
    //
    // Calling functions on another thread without using moc is non-trivial in
    // Qt until 5.4 (when some useful QTimer::singleShot overloads were added).
    //
    // Instead, we have to use QEvents. Ideally, we'd use a custom QEvent, but
    // there's a chance this could cause trouble with applications that claim
    // QEvent codes themselves, but don't register them with Qt (and we also
    // want to avoid registering a new QEvent code for every plugin that might
    // be loaded). We use QTimer because it's unlikely to be filtered by
    // applications, and is also unlikely to cause Qt to do something it
    // shouldn't.
    class Loader : public QObject
    {
    protected:
        void timerEvent(QTimerEvent *) Q_DECL_OVERRIDE
        {
            load(LoadOptions::CreateWatcher);
            this->deleteLater();
        }
    };

    void loadOnMainThread()
    {
        // If this library is loaded after the QCoreApplication instance is
        // created (eg: because it is brought in by a plugin), there is no
        // guarantee this function will be called on the main thread.
        // QCoreApplication::installTranslator needs to be called on the main
        // thread, because it uses QCoreApplication::sendEvent.
        if (QThread::currentThread() == QCoreApplication::instance()->thread()) {
            load(LoadOptions::CreateWatcher);
        } else {
            // QObjects inherit their parent object's thread
            Loader *loader = new Loader();
            loader->moveToThread(QCoreApplication::instance()->thread());
            QCoreApplication::instance()->postEvent(loader, new QTimerEvent(0), Qt::HighEventPriority);
        }
    }
}

Q_COREAPP_STARTUP_FUNCTION(loadOnMainThread)
