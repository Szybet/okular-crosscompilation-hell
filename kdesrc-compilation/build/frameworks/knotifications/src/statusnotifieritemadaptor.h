/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a statusnotifieritemadaptor -i kstatusnotifieritemdbus_p.h -l KStatusNotifierItemDBus /home/szybet/kdesrc/frameworks/knotifications/src/org.kde.StatusNotifierItem.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef STATUSNOTIFIERITEMADAPTOR_H
#define STATUSNOTIFIERITEMADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "kstatusnotifieritemdbus_p.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.kde.StatusNotifierItem
 */
class StatusNotifierItemAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.StatusNotifierItem")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.StatusNotifierItem\">\n"
"    <property access=\"read\" type=\"s\" name=\"Category\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Id\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Title\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Status\"/>\n"
"    <property access=\"read\" type=\"i\" name=\"WindowId\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"IconThemePath\"/>\n"
"    <property access=\"read\" type=\"o\" name=\"Menu\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"ItemIsMenu\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"IconName\"/>\n"
"    <property access=\"read\" type=\"a(iiay)\" name=\"IconPixmap\">\n"
"      <annotation value=\"KDbusImageVector\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"OverlayIconName\"/>\n"
"    <property access=\"read\" type=\"a(iiay)\" name=\"OverlayIconPixmap\">\n"
"      <annotation value=\"KDbusImageVector\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"AttentionIconName\"/>\n"
"    <property access=\"read\" type=\"a(iiay)\" name=\"AttentionIconPixmap\">\n"
"      <annotation value=\"KDbusImageVector\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"AttentionMovieName\"/>\n"
"    <property access=\"read\" type=\"(sa(iiay)ss)\" name=\"ToolTip\">\n"
"      <annotation value=\"KDbusToolTipStruct\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <method name=\"ProvideXdgActivationToken\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"token\"/>\n"
"    </method>\n"
"    <method name=\"ContextMenu\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n"
"    </method>\n"
"    <method name=\"Activate\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n"
"    </method>\n"
"    <method name=\"SecondaryActivate\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n"
"    </method>\n"
"    <method name=\"Scroll\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"delta\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"orientation\"/>\n"
"    </method>\n"
"    <signal name=\"NewTitle\"/>\n"
"    <signal name=\"NewIcon\"/>\n"
"    <signal name=\"NewAttentionIcon\"/>\n"
"    <signal name=\"NewOverlayIcon\"/>\n"
"    <signal name=\"NewMenu\"/>\n"
"    <signal name=\"NewToolTip\"/>\n"
"    <signal name=\"NewStatus\">\n"
"      <arg type=\"s\" name=\"status\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    StatusNotifierItemAdaptor(KStatusNotifierItemDBus *parent);
    virtual ~StatusNotifierItemAdaptor();

    inline KStatusNotifierItemDBus *parent() const
    { return static_cast<KStatusNotifierItemDBus *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(QString AttentionIconName READ attentionIconName)
    QString attentionIconName() const;

    Q_PROPERTY(KDbusImageVector AttentionIconPixmap READ attentionIconPixmap)
    KDbusImageVector attentionIconPixmap() const;

    Q_PROPERTY(QString AttentionMovieName READ attentionMovieName)
    QString attentionMovieName() const;

    Q_PROPERTY(QString Category READ category)
    QString category() const;

    Q_PROPERTY(QString IconName READ iconName)
    QString iconName() const;

    Q_PROPERTY(KDbusImageVector IconPixmap READ iconPixmap)
    KDbusImageVector iconPixmap() const;

    Q_PROPERTY(QString IconThemePath READ iconThemePath)
    QString iconThemePath() const;

    Q_PROPERTY(QString Id READ id)
    QString id() const;

    Q_PROPERTY(bool ItemIsMenu READ itemIsMenu)
    bool itemIsMenu() const;

    Q_PROPERTY(QDBusObjectPath Menu READ menu)
    QDBusObjectPath menu() const;

    Q_PROPERTY(QString OverlayIconName READ overlayIconName)
    QString overlayIconName() const;

    Q_PROPERTY(KDbusImageVector OverlayIconPixmap READ overlayIconPixmap)
    KDbusImageVector overlayIconPixmap() const;

    Q_PROPERTY(QString Status READ status)
    QString status() const;

    Q_PROPERTY(QString Title READ title)
    QString title() const;

    Q_PROPERTY(KDbusToolTipStruct ToolTip READ toolTip)
    KDbusToolTipStruct toolTip() const;

    Q_PROPERTY(int WindowId READ windowId)
    int windowId() const;

public Q_SLOTS: // METHODS
    void Activate(int x, int y);
    void ContextMenu(int x, int y);
    void ProvideXdgActivationToken(const QString &token);
    void Scroll(int delta, const QString &orientation);
    void SecondaryActivate(int x, int y);
Q_SIGNALS: // SIGNALS
    void NewAttentionIcon();
    void NewIcon();
    void NewMenu();
    void NewOverlayIcon();
    void NewStatus(const QString &status);
    void NewTitle();
    void NewToolTip();
};

#endif
