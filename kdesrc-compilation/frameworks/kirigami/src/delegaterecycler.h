/*
 *  SPDX-FileCopyrightText: 2018 Marco Martin <mart@kde.org>
 *
 *  SPDX-License-Identifier: LGPL-2.0-or-later
 */

#ifndef DELEGATERECYCLER_H
#define DELEGATERECYCLER_H

#include <QPointer>
#include <QQuickItem>
#include <QVariant>

class DelegateRecyclerAttached : public QObject
{
    Q_OBJECT

public:
    DelegateRecyclerAttached(QObject *parent = nullptr);
    ~DelegateRecyclerAttached() override;

Q_SIGNALS:
    void pooled();
    void reused();
};

/**
 * This class may be used as a delegate of a ListView or a GridView in the case
 * the intended delegate is a bit heavy, with many objects inside.
 * This will ensure the delegate instances will be put back in a common pool after
 * destruction, so when scrolling a big list, the delegates from old delete items will
 * be taken from the pool and reused, minimizing the need of instantiating new objects
 * and deleting old ones. It ensures scrolling of lists with heavy delegates is
 * smoother and helps with memory fragmentations as well.
 *
 * @note CardListView and CardGridView are already using this recycler, so do NOT use it
 * as a delegate for those 2 views. Also, do NOT use this with a Repeater.
 *
 * @since org.kde.kirigami 2.4
 */
class DelegateRecycler : public QQuickItem
{
    Q_OBJECT

    /**
     * The Component the actual delegates will be built from.
     *
     * @note the component may not be a child of this object, therefore it can't be
     * declared inside the DelegateRecycler declaration.
     *
     * The DelegateRecycler will not take ownership of the delegate Component, so it's up
     * to the caller to delete it (usually with the normal child/parent relationship)
     */
    Q_PROPERTY(QQmlComponent *sourceComponent READ sourceComponent WRITE setSourceComponent RESET resetSourceComponent NOTIFY sourceComponentChanged)

public:
    DelegateRecycler(QQuickItem *parent = nullptr);
    ~DelegateRecycler() override;

    QQmlComponent *sourceComponent() const;
    void setSourceComponent(QQmlComponent *component);
    void resetSourceComponent();

    static DelegateRecyclerAttached *qmlAttachedProperties(QObject *object);

protected:
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    void geometryChanged(const QRectF &newGeometry, const QRectF &oldGeometry) override;
#else
    void geometryChange(const QRectF &newGeometry, const QRectF &oldGeometry) override;
#endif
    void focusInEvent(QFocusEvent *event) override;

    void updateHints();
    void updateSize(bool parentResized);

Q_SIGNALS:
    void sourceComponentChanged();

private Q_SLOTS:
    void syncIndex();
    void syncModel();
    void syncModelProperties();
    void syncModelData();

private:
    QPointer<QQmlComponent> m_sourceComponent;
    QPointer<QQuickItem> m_item;
    QObject *m_propertiesTracker = nullptr;
    bool m_updatingSize = false;
    bool m_widthFromItem = false;
    bool m_heightFromItem = false;
};

QML_DECLARE_TYPEINFO(DelegateRecycler, QML_HAS_ATTACHED_PROPERTIES)

#endif
