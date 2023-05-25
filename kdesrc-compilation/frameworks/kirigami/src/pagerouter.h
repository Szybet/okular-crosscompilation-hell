/*
 *  SPDX-FileCopyrightText: 2020 Carson Black <uhhadd@gmail.com>
 *
 *  SPDX-License-Identifier: LGPL-2.0-or-later
 */

#pragma once

#include "columnview.h"
#include <QCache>
#include <QQmlPropertyMap>
#include <QQuickItem>
#include <QRandomGenerator>

static std::map<quint32, QVariant> s_knownVariants;
class PageRouter;

class ParsedRoute : public QObject
{
    Q_OBJECT

public:
    QString name;
    QVariant data;
    QVariantMap properties;
    bool cache;
    QQuickItem *item = nullptr;
    void itemDestroyed()
    {
        item = nullptr;
    }
    QQuickItem *setItem(QQuickItem *newItem)
    {
        auto ret = item;
        if (ret != nullptr) {
            disconnect(ret, &QObject::destroyed, this, &ParsedRoute::itemDestroyed);
        }
        item = newItem;
        if (newItem != nullptr) {
            connect(newItem, &QObject::destroyed, this, &ParsedRoute::itemDestroyed);
        }
        return ret;
    }
    explicit ParsedRoute(const QString &name = QString(),
                         QVariant data = QVariant(),
                         QVariantMap properties = QVariantMap(),
                         bool cache = false,
                         QQuickItem *item = nullptr)
        : name(name)
        , data(data)
        , properties(properties)
        , cache(cache)
    {
        setItem(item);
    }
    ~ParsedRoute() override
    {
        if (item) {
            item->deleteLater();
        }
    }
    quint32 hash()
    {
        for (auto i = s_knownVariants.begin(); i != s_knownVariants.end(); i++) {
            if (i->second == data) {
                return i->first;
            }
        }
        auto number = QRandomGenerator::system()->generate();
        while (s_knownVariants.count(number) > 0) {
            number = QRandomGenerator::system()->generate();
        }
        s_knownVariants[number] = data;
        return number;
    }
    bool equals(const ParsedRoute *rhs, bool countItem = false)
    {
        /* clang-format off */
        return name == rhs->name
            && data == rhs->data
            && (!countItem || item == rhs->item)
            && cache == rhs->cache;
        /* clang-format on */
    }
};

struct LRU {
    int size = 10;
    QList<QPair<QString, quint32>> evictionList;
    QMap<QPair<QString, quint32>, int> costs;
    QMap<QPair<QString, quint32>, ParsedRoute *> items;

    ParsedRoute *take(QPair<QString, quint32> key)
    {
        auto ret = items.take(key);
        evictionList.removeAll(key);
        return ret;
    }
    int totalCosts()
    {
        int ret = 0;
        for (auto cost : std::as_const(costs)) {
            ret += cost;
        }
        return ret;
    }
    void setSize(int size = 10)
    {
        this->size = size;
        prune();
    }
    void prune()
    {
        while (size < totalCosts()) {
            auto key = evictionList.last();
            auto item = items.take(key);
            delete item;
            costs.take(key);
            evictionList.takeLast();
        }
    }
    void insert(QPair<QString, quint32> key, ParsedRoute *newItem, int cost)
    {
        if (items.contains(key)) {
            auto item = items.take(key);
            evictionList.removeAll(key);
            if (item != newItem) {
                delete item;
            }
        }
        costs[key] = cost;
        items[key] = newItem;
        evictionList.prepend(key);
        prune();
    }
};

class PageRouterAttached;

/**
 * Item holding data about when to preload a route.
 *
 * @code{.qml}
 *  [...]
 * preload {
 *   route: "updates-page"
 *   when: updatesCount > 0
 * }
 * @endcode
 */
class PreloadRouteGroup : public QObject
{
    Q_OBJECT

    /**
     * @brief This property holds the route to preload.
     */
    Q_PROPERTY(QJSValue route MEMBER m_route WRITE setRoute NOTIFY changed)
    QJSValue m_route;

    /**
     * @brief This property sets whether the route should be preloaded.
     */
    Q_PROPERTY(bool when MEMBER m_when NOTIFY changed)
    bool m_when;

    void handleChange();
    PageRouterAttached *m_parent;

public:
    ~PreloadRouteGroup() override;
    void setRoute(QJSValue route)
    {
        m_route = route;
        Q_EMIT changed();
    }
    PreloadRouteGroup(QObject *parent)
        : QObject(parent)
    {
        m_parent = qobject_cast<PageRouterAttached *>(parent);
        Q_ASSERT(m_parent);
        connect(this, &PreloadRouteGroup::changed, this, &PreloadRouteGroup::handleChange);
    }
    Q_SIGNAL void changed();
};

/**
 * Item representing a route the PageRouter can navigate to.
 *
 * @include pagerouter/PageRoute.qml
 *
 * @see kirigami::PageRouter
 */
class PageRoute : public QObject
{
    Q_OBJECT

    /**
     * @brief This property holds the name of this route.
     *
     * This name should be unique per PageRoute in a PageRouter.
     * When two PageRoutes have the same name, the one listed first
     * in the PageRouter will be used.
     */
    Q_PROPERTY(QString name MEMBER m_name READ name)

    /**
     * @brief This property holds the page component of this route.
     *
     * This should be an instance of Component with a Kirigami::Page inside
     * of it.
     */
    Q_PROPERTY(QQmlComponent *component MEMBER m_component READ component)

    /**
     * @brief This property sets whether pages generated by this route should be cached.
     *
     * This should be an instance of Component with a Kirigami::Page inside
     * of it.
     *
     * This will not work:
     *
     * @include pagerouter/PageRouterCachePagesDont.qml
     *
     * This will work:
     *
     * @include pagerouter/PageRouterCachePagesDo.qml
     *
     */
    Q_PROPERTY(bool cache MEMBER m_cache READ cache)

    /**
     * @brief This property specifies how expensive this route is on memory.
     *
     * This affects caching, as the sum of costs of routes in the cache
     * can never exceed the cache's cap.
     */
    Q_PROPERTY(int cost MEMBER m_cost)

    Q_CLASSINFO("DefaultProperty", "component")

Q_SIGNALS:
    void preloadDataChanged();
    void preloadChanged();

private:
    QString m_name;
    QQmlComponent *m_component = nullptr;
    bool m_cache = false;
    int m_cost = 1;

public:
    QQmlComponent *component()
    {
        return m_component;
    };
    QString name()
    {
        return m_name;
    };
    bool cache()
    {
        return m_cache;
    };
    int cost()
    {
        return m_cost;
    };
};

/**
 * An item managing pages and data of a ColumnView using named routes.
 *
 * <br> <br>
 *
 * ## Using a PageRouter
 *
 * Applications typically manage their contents via elements called "pages" or "screens."
 * In Kirigami, these are called @link kirigami::Page  Pages @endlink and are
 * arranged in @link PageRoute routes @endlink using a PageRouter to manage them. The PageRouter
 * manages a stack of @link kirigami::Page Pages @endlink created from a pool of potential
 * @link PageRoute PageRoutes @endlink.
 *
 * Unlike most traditional stacks, a PageRouter provides functions for random access to its pages
 * with navigateToRoute and routeActive.
 *
 * When your user interface fits the stack paradigm and is likely to use random access navigation,
 * using the PageRouter is appropriate. For simpler navigation, it is more appropriate to avoid
 * the overhead of a PageRouter by using a @link kirigami::PageRow PageRow  @endlink
 * instead.
 *
 * <br> <br>
 *
 * ## Navigation Model
 *
 * A PageRouter draws from a pool of @link PageRoute PageRoutes @endlink in order to construct
 * its stack.
 *
 * @image html PageRouterModel.svg width=50%
 *
 * <br> <br>
 *
 * You can push pages onto this stack...
 *
 * @image html PageRouterPush.svg width=50%
 *
 * ...or pop them off...
 *
 * @image html PageRouterPop.svg width=50%
 *
 * ...or navigate to an arbitrary collection of pages.
 *
 * @image html PageRouterNavigate.svg width=50%
 *
 * <br> <br>
 *
 * Components are able to query the PageRouter about the currently active routes
 * on the stack. This is useful for e.g. a card indicating that the page it takes
 * the user to is currently active.
 *
 * <br> <br>
 *
 * ## Example
 *
 * @include pagerouter/PageRouter.qml
 *
 * @see kirigami::PageRouterAttached
 * @see kirigami::PageRoute
 */
class PageRouter : public QObject, public QQmlParserStatus
{
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)

    /**
     * @brief This property holds a list of named routes a PageRouter can navigate to.
     *
     * @include pagerouter/PageRouterRoutes.qml
     */
    Q_PROPERTY(QQmlListProperty<PageRoute> routes READ routes)

    Q_CLASSINFO("DefaultProperty", "routes")

    /**
     * @brief This property sets the initial route.
     *
     * `initialRoute` is the page that the PageRouter will push upon
     * creation. Changing it after creation will cause the PageRouter to reset
     * its state. Not providing an `initialRoute` will result in undefined
     * behavior.
     *
     * @see kirigami::PageRoute::name
     * @include pagerouter/PageRouterInitialRoute.qml
     */
    Q_PROPERTY(QJSValue initialRoute READ initialRoute WRITE setInitialRoute NOTIFY initialRouteChanged)

    /**
     * @brief This property holds the ColumnView being puppeted by the PageRouter.
     *
     * All PageRouters should be created with a ColumnView, and creating one without
     * a ColumnView is undefined behaviour.
     *
     * @warning You should **not** directly interact with a ColumnView being puppeted
     * by a PageRouter. Instead, use a PageRouter's functions to manipulate the
     * ColumnView.
     *
     * @include pagerouter/PageRouterColumnView.qml
     */
    Q_PROPERTY(ColumnView *pageStack MEMBER m_pageStack NOTIFY pageStackChanged)

    /**
     * @brief This property holds how large the cache can be.
     *
     * The combined costs of cached routes will never exceed the cache capacity.
     */
    Q_PROPERTY(int cacheCapacity READ cacheCapacity WRITE setCacheCapacity)

    /**
     * @brief This property holds how large the preloaded pool can be.
     *
     * The combined costs of preloaded routes will never exceed the pool capacity.
     */
    Q_PROPERTY(int preloadedPoolCapacity READ preloadedPoolCapacity WRITE setPreloadedPoolCapacity)

    /**
     * Exposes the data of all pages on the stack, preferring pages on the top
     * (e.g. most recently pushed) to pages pushed on the bottom (least recently
     * pushed).
     */
    Q_PROPERTY(QQmlPropertyMap *params READ params CONSTANT)

private:
    /**
     * The map exposing to QML all the params of the stack. This is a
     * QQmlPropertyMap to allow binding to param values. This *does* lack
     * the ability to drop items, but the amount of all params in an app
     * is overwhelmingly likely to be fixed, not dynamic.
     */
    QSharedPointer<QQmlPropertyMap> m_paramMap;

    /**
     * @brief This method reevaluates the properties of the param map by going through all of the
     * routes on the stack to determine the topmost value for every parameter.
     *
     * Should be called for every time a route is pushed, popped, or modified.
     */
    void reevaluateParamMapProperties();

    /**
     * @brief This property holds a list of routes the PageRouter is aware of.
     *
     * Generally, this should not be mutated from C++, only read.
     */
    QList<PageRoute *> m_routes;

    /**
     * @brief The PageRouter being puppeted.
     *
     * m_pageRow is the ColumnView this PageRouter puppets.
     */
    ColumnView *m_pageStack = nullptr;

    /**
     * @brief The route that the PageRouter will load on completion.
     *
     * m_initialRoute is the raw QJSValue from QML that will be
     * parsed into a ParsedRoute struct on construction.
     * Generally, this should not be mutated from C++, only read.
     */
    QJSValue m_initialRoute;

    /**
     * @brief The current routes pushed on the PageRow.
     *
     * Generally, the state of m_pageRow and m_currentRoutes
     * should be kept in sync. Undesirable behaviour will result
     * from desynchronisation of the two.
     */
    QList<ParsedRoute *> m_currentRoutes;

    /**
     * @brief Cached routes.
     *
     * An LRU cache of ParsedRoutes with items that were previously on the stack.
     */
    LRU m_cache;

    /** @brief Preloaded routes.
     *
     * A LRU cache of ParsedRoutes with items that may be on the stack in the future,
     * but were not on the stack before.
     */
    LRU m_preload;

    /**
     * @brief Helper function to push a route.
     *
     * This function has the shared logic between
     * navigateToRoute and pushRoute.
     */
    void push(ParsedRoute *route);

    /**
     * @brief This method returns whether m_routes has a key.
     *
     * This function abstracts the QJSValue.
     */
    bool routesContainsKey(const QString &key) const;

    /**
     * @brief This method returns the component of the specified key for m_routes.
     *
     * The return value will be a @c nullptr if @p key does not exist in
     * m_routes.
     */
    QQmlComponent *routesValueForKey(const QString &key) const;

    /**
     * @brief This method returns the cache status of a key for m_routes.
     *
     * The return value will be @c false if @p key does not exist in
     * m_routes.
     */
    bool routesCacheForKey(const QString &key) const;

    /**
     * @brief This method return the cost of a key for m_routes.
     *
     * The return value will be -1 if @p key does not exist in
     * m_routes.
     */
    int routesCostForKey(const QString &key) const;

    void preload(ParsedRoute *route);
    void unpreload(ParsedRoute *route);

    void placeInCache(ParsedRoute *route);

    static void appendRoute(QQmlListProperty<PageRoute> *list, PageRoute *);
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    static int routeCount(QQmlListProperty<PageRoute> *list);
    static PageRoute *route(QQmlListProperty<PageRoute> *list, int);
#else
    static qsizetype routeCount(QQmlListProperty<PageRoute> *list);
    static PageRoute *route(QQmlListProperty<PageRoute> *list, qsizetype);
#endif
    static void clearRoutes(QQmlListProperty<PageRoute> *list);

    QVariant dataFor(QObject *object);
    bool isActive(QObject *object);
    void pushFromObject(QObject *object, QJSValue route, bool replace = false);

    friend class PageRouterAttached;
    friend class PreloadRouteGroup;
    friend class ParsedRoute;

protected:
    void classBegin() override;
    void componentComplete() override;

public:
    PageRouter(QQuickItem *parent = nullptr);
    ~PageRouter() override;

    QQmlListProperty<PageRoute> routes();

    QQmlPropertyMap *params()
    {
        return m_paramMap.data();
    }

    QJSValue initialRoute() const;
    void setInitialRoute(QJSValue initialRoute);

    int cacheCapacity() const
    {
        return m_cache.size;
    };
    void setCacheCapacity(int size)
    {
        m_cache.setSize(size);
    };

    int preloadedPoolCapacity() const
    {
        return m_preload.size;
    };
    void setPreloadedPoolCapacity(int size)
    {
        m_preload.setSize(size);
    };

    /**
     * @brief This method makes the PageRouter navigate to the specified route.
     *
     * Calling `navigateToRoute` causes the PageRouter to replace currently
     * active pages with the new route.
     *
     * @param route The given route for the PageRouter to navigate to.
     * A route is an array of variants or a single item. A string item will be interpreted
     * as a page without associated data. An object item will be interpreted
     * as follows:
     * @code{.js}
     * {
     *     "route": "/home" // The named page of the route.
     *     "data": QtObject {} // The data to pass to the page.
     * }
     * @endcode
     * Navigating to a route not defined in a PageRouter's routes is undefined
     * behavior.
     *
     * @code{.qml}
     * Button {
     *     text: "Login"
     *     onClicked: {
     *         Kirigami.PageRouter.navigateToRoute(["/home", "/login"])
     *     }
     * }
     * @endcode
     */
    Q_INVOKABLE void navigateToRoute(QJSValue route);

    /**
     * @brief This method Checs whether the current route is on the stack.
     *
     * `routeActive` will return @c true if the given route
     * is on the stack.
     *
     * @param route The given route to check for.
     *
     * `routeActive` returns @c true for partial routes like
     * the following:
     *
     * @code{.js}
     * Kirigami.PageRouter.navigateToRoute(["/home", "/login", "/google"])
     * Kirigami.PageRouter.routeActive(["/home", "/login"]) // returns true
     * @endcode
     *
     * This only works from the root page, e.g. the following will return false:
     * @code{.js}
     * Kirigami.PageRouter.navigateToRoute(["/home", "/login", "/google"])
     * Kirigami.PageRouter.routeActive(["/login", "/google"]) // returns false
     * @endcode
     */
    Q_INVOKABLE bool routeActive(QJSValue route);

    /**
     * @brief This method appends a route to the currently navigated route.
     *
     * Calling `pushRoute` will append the given @p route to the currently navigated
     * routes. See navigateToRoute() if you want to replace the items currently on
     * the PageRouter.
     *
     * @param route The given route to push.
     *
     * @code{.js}
     * Kirigami.PageRouter.navigateToRoute(["/home", "/login"])
     * // The PageRouter is navigated to /home/login
     * Kirigami.PageRouter.pushRoute("/google")
     * // The PageRouter is navigated to /home/login/google
     * @endcode
     */
    Q_INVOKABLE void pushRoute(QJSValue route);

    /**
     * @brief This method pops the last page on the router.
     *
     * Calling `popRoute` will result in the last page on the router getting popped.
     * You should not call this function when there is only one page on the router.
     *
     * @code{.js}
     * Kirigami.PageRouter.navigateToRoute(["/home", "/login"])
     * // The PageRouter is navigated to /home/login
     * Kirigami.PageRouter.popRoute()
     * // The PageRouter is navigated to /home
     * @endcode
     */
    Q_INVOKABLE void popRoute();

    /**
     * @brief This method shifts keyboard focus and view to a given index on the PageRouter's stack.
     *
     * @param view The view to bring to focus. If this is an integer index, the PageRouter will
     * navigate to the given index. If it's a route specifier, the PageRouter will navigate
     * to the first route matching it.
     *
     * Navigating to route by index:
     * @code{.js}
     * Kirigami.PageRouter.navigateToRoute(["/home", "/browse", "/apps", "/login"])
     * Kirigami.PageRouter.bringToView(1)
     * @endcode
     *
     * Navigating to route by name:
     * @code{.js}
     * Kirigami.PageRouter.navigateToRoute(["/home", "/browse", "/apps", "/login"])
     * Kirigami.PageRouter.bringToView("/browse")
     * @endcode
     *
     * Navigating to route by data:
     * @code{.js}
     * Kirigami.PageRouter.navigateToRoute([{"route": "/page", "data": "red"},
     *                                      {"route": "/page", "data": "blue"},
     *                                      {"route": "/page", "data": "green"},
     *                                      {"route": "/page", "data": "yellow"}])
     * Kirigami.PageRouter.bringToView({"route": "/page", "data": "blue"})
     * @endcode
     */
    Q_INVOKABLE void bringToView(QJSValue route);

    /**
     * @brief This method returns a QJSValue corresponding to the current pages on the stack.
     *
     * The returned value is in the same form as the input to navigateToRoute.
     */
    Q_INVOKABLE QJSValue currentRoutes() const;

    static PageRouterAttached *qmlAttachedProperties(QObject *object);

Q_SIGNALS:
    void routesChanged();
    void initialRouteChanged();
    void pageStackChanged();
    void currentIndexChanged();
    void navigationChanged();
};

/**
 * Attached object allowing children of a PageRouter to access its functions
 * without requiring the children to have the parent PageRouter's id.
 *
 * @see kirigami::PageRouter
 */
class PageRouterAttached : public QObject
{
    Q_OBJECT

    Q_PROPERTY(PageRouter *router READ router WRITE setRouter NOTIFY routerChanged)
    /**
     * @brief This property holds data for the page this item belongs to.
     * @note Accessing this property outside of a PageRouter will result in undefined behaviour.
     */
    Q_PROPERTY(QVariant data READ data MEMBER m_data NOTIFY dataChanged)

    /**
     * @brief This property sets whether the page this item belongs to is the current index of the ColumnView.
     * @note Accessing this property outside of a PageRouter will result in undefined behaviour.
     */
    Q_PROPERTY(bool isCurrent READ isCurrent NOTIFY isCurrentChanged)

    /**
     * @brief This property holds which route this PageRouterAttached should watch for.
     * @include pagerouter/PageRouterWatchedRoute.qml
     */
    Q_PROPERTY(QJSValue watchedRoute READ watchedRoute WRITE setWatchedRoute NOTIFY watchedRouteChanged)

    /**
     * @brief This property holds route preloading settings.
     */
    Q_PROPERTY(PreloadRouteGroup *preload READ preload)

    /**
     * Ths property sets whether the watchedRoute is currently active.
     */
    Q_PROPERTY(bool watchedRouteActive READ watchedRouteActive NOTIFY navigationChanged)

private:
    explicit PageRouterAttached(QObject *parent = nullptr);

    QPointer<PageRouter> m_router;
    PreloadRouteGroup *m_preload;
    QVariant m_data;
    QJSValue m_watchedRoute;

    void findParent();

    friend class PageRouter;
    friend class PreloadRouteGroup;
    friend class ParsedRoute;

public:
    PreloadRouteGroup *preload() const
    {
        return m_preload;
    };
    PageRouter *router() const
    {
        return m_router;
    };
    void setRouter(PageRouter *router)
    {
        m_router = router;
        Q_EMIT routerChanged();
    }
    QVariant data() const;
    bool isCurrent() const;
    /// @see PageRouter::navigateToRoute()
    Q_INVOKABLE void navigateToRoute(QJSValue route);
    /// @see PageRouter::routeActive()
    Q_INVOKABLE bool routeActive(QJSValue route);
    /// @see PageRouter::pushRoute()
    Q_INVOKABLE void pushRoute(QJSValue route);
    /// @see PageRouter::popRoute()
    Q_INVOKABLE void popRoute();
    // @see PageRouter::bringToView()
    Q_INVOKABLE void bringToView(QJSValue route);
    /**
     * @brief Push a route from this route on the stack.
     *
     * Replace the routes after the route this is invoked on
     * with the provided @p route.
     *
     * For example, if you invoke this method on the second route
     * in the PageRouter's stack, routes after the second
     * route will be replaced with the provided routes.
     */
    Q_INVOKABLE void pushFromHere(QJSValue route);
    /**
     * @brief Pop routes after this route on the stack.
     *
     * Pop the routes after the route this is invoked on with
     * the provided @p route.
     *
     * For example, if you invoke this method on the second route
     * in the PageRouter's stack, routes after the second route
     * will be removed from the stack.
     */
    Q_INVOKABLE void popFromHere();
    /**
     * @brief Replaces this route with the given routes on the stack.
     *
     * Behaves like pushFromHere, except the current route is also
     * popped.
     */
    Q_INVOKABLE void replaceFromHere(QJSValue route);
    bool watchedRouteActive();
    void setWatchedRoute(QJSValue route);
    QJSValue watchedRoute();

Q_SIGNALS:
    void routerChanged();
    void dataChanged();
    void isCurrentChanged();
    void navigationChanged();
    void watchedRouteChanged();
};

QML_DECLARE_TYPEINFO(PageRouter, QML_HAS_ATTACHED_PROPERTIES)
