/*
    This file is part of the KDE libraries
    SPDX-FileCopyrightText: 1999 Waldo Bastian <bastian@kde.org>
    SPDX-FileCopyrightText: 2005-2008 David Faure <faure@kde.org>
    SPDX-FileCopyrightText: 2020 Harald Sitter <sitter@kde.org>

    SPDX-License-Identifier: LGPL-2.0-only
*/

#ifndef KSYCOCA_H
#define KSYCOCA_H

#include <kservice_export.h>
#include <ksycocatype.h>

#include <QObject>
#include <QStringList>

class QDataStream;
class KSycocaFactory;
class KSycocaFactoryList;
class KSycocaPrivate;

/**
 * Executable name of the kbuildsycoca program
 */
#define KBUILDSYCOCA_EXENAME "kbuildsycoca5"

/**
 * @internal
 * Read-only SYstem COnfiguration CAche
 */
class KSERVICE_EXPORT KSycoca : public QObject
{
    Q_OBJECT
    // Q_CLASSINFO("D-Bus Interface", "org.kde.KSycoca")

protected:
    /**
     * @internal
     * Building database
     */
    explicit KSycoca(bool /* buildDatabase */);

public:
    /**
     * type of database
     * @see absoluteFilePath()
     */
    typedef enum { LocalDatabase, GlobalDatabase } DatabaseType; // TODO KF6: remove

    /**
     * Read-only database
     */
    KSycoca();

    /**
     * Get or create the only instance of KSycoca (read-only)
     */
    static KSycoca *self();

    ~KSycoca() override;

    /**
     * @return the compiled-in version, i.e. the one used when writing a new ksycoca
     */
    static int version();

    /**
     * @return true if the ksycoca database is available
     * This is usually the case, except if KDE isn't installed yet,
     * or before kded is started.
     */
    static bool isAvailable();

    /**
     * @internal - called by factories in read-only mode
     * This is how factories get a stream to an entry
     */
    QDataStream *findEntry(int offset, KSycocaType &type); // KF6: make it private
    /**
     * @internal - called by factories in read-only mode
     * Returns stream(), but positioned for reading this factory, 0 on error.
     */
    QDataStream *findFactory(KSycocaFactoryId id); // KF6: make it private

    /**
     * @internal - returns absolute file path of the database
     *
     * For the global database type, the database is searched under
     * the 'share/ksycoca' install path.
     * Otherwise, the value from the environment variable KDESYCOCA
     * is returned if set. If not set the path is built based on
     * QStandardPaths cache save location, typically ~/.cache on Unix.
     *
     * Since 5.15, the filename includes language and a sha1 of the directories
     * in GenericDataLocation, i.e. the directories with the desktop files.
     * This allows to have one database per setup, when using different install prefixes
     * or when switching languages.
     */
    static QString absoluteFilePath(DatabaseType type = LocalDatabase);

#if KSERVICE_ENABLE_DEPRECATED_SINCE(5, 15)
    /**
     * @internal - returns language stored inside database
     */
    KSERVICE_DEPRECATED_VERSION(5, 15, "No longer use.")
    QString language(); // KF6: remove

    /**
     * @internal - returns timestamp of database
     *
     * The database contains all changes made _before_ this time and
     * _might_ contain changes made after that.
     */
    KSERVICE_DEPRECATED_VERSION(5, 15, "No longer use.")
    quint32 timeStamp(); // KF6: remove

    /**
     * @internal - returns update signature of database
     *
     * Signature that keeps track of changes to
     * $KDEDIR/share/services/update_ksycoca
     *
     * Touching this file causes the database to be recreated
     * from scratch.
     */
    KSERVICE_DEPRECATED_VERSION(5, 15, "No longer use.")
    quint32 updateSignature(); // KF6: remove
#endif

    /**
     * @internal - returns all directories with information
     * stored inside sycoca.
     */
    QStringList allResourceDirs(); // KF6: make it private

    /**
     * @internal - add a factory
     */
    void addFactory(KSycocaFactory *); // KF6: make it private

    /**
     * @internal
     * @return true if building (i.e. if a KBuildSycoca);
     */
    virtual bool isBuilding();

    /**
     * Disables automatic rebuilding of the cache on service file changes.
     * Be extremely careful when using this. Only threads that definitely have no use for
     * automatic reloading should use this. Specifically shared runner threads (as seen in
     * the threadweaver framework) can avoid claiming persistent resources this way
     * (e.g. inotify instances on Linux).
     */
    static void disableAutoRebuild();

#if KSERVICE_ENABLE_DEPRECATED_SINCE(5, 0)
    /**
     * When you receive a "databaseChanged" signal, you can query here if
     * a change has occurred in a specific resource type.
     * @see KStandardDirs for the various resource types.
     *
     * This method is meant to be called from the GUI thread only.
     *
     * @deprecated Since 5.0, use the @c KSycoca::databaseChanged() signal instead.
     */
    KSERVICE_DEPRECATED_VERSION(5, 0, "Use KSycoca::databaseChanged() signal")
    static bool isChanged(const char *type);
#endif

    /**
     * A read error occurs.
     * @internal
     */
    static void flagError();

    /**
     * Ensures the ksycoca database is up to date.
     * If the database was modified by another process, close it, so the next use reopens it.
     * If the desktop files have been modified more recently than the database, update it.
     *
     * Update the sycoca file from the files on disk (e.g. desktop files or mimeapps.list).
     * You don't normally have to call this because the next use of KSycoca
     * (e.g. via KMimeTypeTrader, KService etc.) will notice that the sycoca
     * database is out of date, by looking a directory modification times.
     * In addition, in a full KDE session, kded monitors directories to detect changes.
     *
     * This is however useful for GUIs that allow to create a new desktop file
     * and then want to ensure it is available immediately in KSycoca.
     * This is also useful after modifying a mimeapps.list file.
     *
     * KBuildSycocaProgressDialog can also be used instead of this method, in GUI apps.
     *
     * @since 5.15
     */
    void ensureCacheValid(); // Warning for kservice code: this can delete all the factories.

Q_SIGNALS:
    /**
     * Connect to this to get notified when the database changes.
     *
     * Example: after creating a .desktop file in KOpenWithDialog, it
     * must wait until kbuildsycoca5 finishes until the KService::Ptr is available.
     * Other examples: anything that displays a list of apps or plugins to the user
     * and which is always visible (otherwise querying sycoca before showing
     * could be enough).
     */
    void databaseChanged(); // clazy:exclude=overloaded-signal

#if KSERVICE_ENABLE_DEPRECATED_SINCE(5, 80)
    /**
     * Connect to this to get notified when the database changes
     * Example: when MIME type definitions have changed, applications showing
     * files as icons refresh icons to take into account the new MIME types.
     * Another example: after creating a .desktop file in KOpenWithDialog,
     * it must wait until kbuildsycoca5 finishes until the KService::Ptr is available.
     *
     * @param changedResources List of resources where changes were detected.
     * This can include the following resources (as defined in KStandardDirs) :
     * apps, xdgdata-apps, services, servicetypes, xdgdata-mime.
     *
     * @deprecated since 5.80, use the @c KSycoca::databaseChanged() signal instead.
     */
    KSERVICE_DEPRECATED_VERSION(5, 80, "Use KSycoca::databaseChanged() signal")
    void databaseChanged(const QStringList &changedResources); // clazy:exclude=overloaded-signal
#endif

protected:
    // @internal used by kbuildsycoca
    KSycocaFactoryList *factories();

    // @internal used by factories and kbuildsycoca
    QDataStream *&stream();
    friend class KSycocaFactory;
    friend class KSycocaDict;

    void connectNotify(const QMetaMethod &signal) override;

private:
    /**
     * Clear all caches related to ksycoca contents.
     * @internal only used by kded and kbuildsycoca.
     */
    static void clearCaches();

    KSERVICE_NO_EXPORT bool needsRebuild();

    friend class KBuildSycoca;
    friend class Kded;
    friend class KSycocaPrivate;
    friend class KSycocaXdgDirsTest;

    Q_DISABLE_COPY(KSycoca)
    KSycocaPrivate *const d;
};

#endif
