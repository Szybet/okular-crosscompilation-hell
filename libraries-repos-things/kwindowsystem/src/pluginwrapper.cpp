/*
 * Copyright 2015 Martin Gräßlin <mgraesslin@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) version 3, or any
 * later version accepted by the membership of KDE e.V. (or its
 * successor approved by the membership of KDE e.V.), which shall
 * act as a proxy defined in Section 6 of version 3 of the license.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "pluginwrapper_p.h"
#include "kwindowinfo_dummy_p.h"
#include "kwindowsystemplugininterface_p.h"
#include "kwindoweffects_dummy_p.h"
#include "kwindowshadow_dummy_p.h"
#include "kwindowsystem_dummy_p.h"
#include "kwindowsystem_debug.h"

#include <QDebug>
#include <QDir>
#include <QGlobalStatic>
#include <QGuiApplication>
#include <QJsonArray>
#include <QLibrary>
#include <QPluginLoader>

Q_GLOBAL_STATIC(KWindowSystemPluginWrapper, s_pluginWrapper)

static QStringList pluginCandidates()
{
    QStringList ret;
    const auto paths = QCoreApplication::libraryPaths();
    for (const QString &path : paths) {
        QDir pluginDir(path + QLatin1String("/kf5/org.kde.kwindowsystem.platforms"));
        if (!pluginDir.exists()) {
            continue;
        }
        const auto entries = pluginDir.entryList(QDir::Files | QDir::NoDotAndDotDot);
        for (const QString &entry : entries) {
            ret << pluginDir.absoluteFilePath(entry);
        }
    }
    return ret;
}

static KWindowSystemPluginInterface *loadPlugin()
{
    QString platformName = QGuiApplication::platformName();
    if (platformName == QLatin1String("flatpak")) {
        // here we cannot know what is the actual windowing system, let's try it's env variable
        const auto flatpakPlatform = QString::fromLocal8Bit(qgetenv("QT_QPA_FLATPAK_PLATFORM"));
        if (!flatpakPlatform.isEmpty()) {
            platformName = flatpakPlatform;
        }
    }
    const auto candidates = pluginCandidates();
    for (const QString &candidate : candidates) {
        if (!QLibrary::isLibrary(candidate)) {
            continue;
        }
        QPluginLoader loader(candidate);
        QJsonObject metaData = loader.metaData();
        const QJsonArray platforms = metaData.value(QStringLiteral("MetaData")).toObject().value(QStringLiteral("platforms")).toArray();
        for (auto it = platforms.begin(); it != platforms.end(); ++it) {
            if (QString::compare(platformName, (*it).toString(), Qt::CaseInsensitive) == 0) {
                KWindowSystemPluginInterface *interface = qobject_cast< KWindowSystemPluginInterface* >(loader.instance());
                if (interface) {
                    qCDebug(LOG_KWINDOWSYSTEM) << "Loaded plugin" << candidate << "for platform" << platformName;
                    return interface;
                }
            }
        }
    }
    qCWarning(LOG_KWINDOWSYSTEM) << "Could not find any platform plugin";
    return nullptr;
}

KWindowSystemPluginWrapper::KWindowSystemPluginWrapper()
    : m_plugin(loadPlugin())
    , m_effects()
{
    if (!m_plugin.isNull()) {
        m_effects.reset(m_plugin->createEffects());
    }
    if (m_effects.isNull()) {
        m_effects.reset(new KWindowEffectsPrivateDummy());
    }
}

KWindowSystemPluginWrapper::~KWindowSystemPluginWrapper()
{
}

KWindowEffectsPrivate *KWindowSystemPluginWrapper::effects() const
{
    return m_effects.data();
}

KWindowSystemPrivate *KWindowSystemPluginWrapper::createWindowSystem() const
{
    KWindowSystemPrivate *p = nullptr;
    if (!m_plugin.isNull()) {
        p = m_plugin->createWindowSystem();
    }
    if (!p) {
        p = new KWindowSystemPrivateDummy();
    }
    return p;
}

KWindowInfoPrivate *KWindowSystemPluginWrapper::createWindowInfo(WId window, NET::Properties properties, NET::Properties2 properties2) const
{
    KWindowInfoPrivate *p = nullptr;
    if (!m_plugin.isNull()) {
        p = m_plugin->createWindowInfo(window, properties, properties2);
    }
    if (!p) {
        p = new KWindowInfoPrivateDummy(window, properties, properties2);
    }
    return p;
}

KWindowShadowPrivate *KWindowSystemPluginWrapper::createWindowShadow() const
{
    KWindowShadowPrivate *p = nullptr;
    if (!m_plugin.isNull()) {
        p = m_plugin->createWindowShadow();
    }
    if (!p) {
        p = new KWindowShadowPrivateDummy();
    }
    return p;
}

KWindowShadowTilePrivate *KWindowSystemPluginWrapper::createWindowShadowTile() const
{
    KWindowShadowTilePrivate *p = nullptr;
    if (!m_plugin.isNull()) {
        p = m_plugin->createWindowShadowTile();
    }
    if (!p) {
        p = new KWindowShadowTilePrivateDummy();
    }
    return p;
}

const KWindowSystemPluginWrapper &KWindowSystemPluginWrapper::self()
{
    return *s_pluginWrapper;
}
