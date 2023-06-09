/*
 *  SPDX-FileCopyrightText: 2017 Marco Martin <mart@kde.org>
 *
 *  SPDX-License-Identifier: LGPL-2.0-or-later
 */

#ifndef FORMLAYOUTATTACHED_H
#define FORMLAYOUTATTACHED_H

#include <QObject>
#include <QtQml>

class QQuickItem;

/**
 * @brief This attached property contains the information for decorating a FormLayout:
 *
 * It contains the text labels of fields and information about sections.
 *
 * Some of its properties can be used with other <a href="https://doc.qt.io/qt-6/qml-qtquick-layouts-layout.html">Layout</a> types.
 *
 * Example usage:
 * @include formlayoutattached.qml
 *
 * @see kirigami::FormLayout
 * @since org.kde.kirigami 2.3
 */
class FormLayoutAttached : public QObject
{
    Q_OBJECT
    /**
     * @brief This property holds the text for the field's label.
     */
    Q_PROPERTY(QString label READ label WRITE setLabel NOTIFY labelChanged)

    /**
     * @brief This property holds the alignment for the field's label.
     */
    Q_PROPERTY(int labelAlignment READ labelAlignment WRITE setLabelAlignment NOTIFY labelAlignmentChanged)

    /**
     * @brief This property sets whether this field acts as a section separator.
     *
     * default: ``false``
     *
     * You can use it in the following ways:
     * * As space between two fields:
     * @code
     * QQC2.TextField {
     *     Kirigami.FormData.label: "Label:"
     * }
     * Item {
     *     Kirigami.FormData.isSection: true
     * }
     * QQC2.TextField {
     *     Kirigami.FormData.label: "Label:"
     * }
     * @endcode
     *
     * * As space with a section title:
     * @code
     * QQC2.TextField {
     *     Kirigami.FormData.label: "Label:"
     * }
     * Item {
     *     Kirigami.FormData.label: "Section Title"
     *     Kirigami.FormData.isSection: true
     * }
     * QQC2.TextField {
     *     Kirigami.FormData.label: "Label text"
     * }
     * @endcode
     *
     * * As space with a section title and a separator line:
     * @code
     * QQC2.TextField {
     *     Kirigami.FormData.label: "Label:"
     * }
     * Kirigami.Separator {
     *     Kirigami.FormData.label: "Section Title"
     *     Kirigami.FormData.isSection: true
     * }
     * QQC2.TextField {
     *     Kirigami.FormData.label: "Label:"
     * }
     * @endcode
     *
     * @see kirigami::FormLayout
     */
    Q_PROPERTY(bool isSection READ isSection WRITE setIsSection NOTIFY isSectionChanged)

    /**
     * @brief This property sets whether a checkbox should be added before the field's item.
     *
     * default: ``false``
     */
    Q_PROPERTY(bool checkable READ checkable WRITE setCheckable NOTIFY checkableChanged)

    /**
     * @brief This property sets whether the checkbox created by the ::checkable
     * property should be checked.
     *
     * default: ``false``
     *
     * @see ::checkable
     */
    Q_PROPERTY(bool checked READ checked WRITE setChecked NOTIFY checkedChanged)

    /**
     * @brief This property sets whether the label or checkbox created by the
     * FormLayout attached property should be enabled.
     *
     * default: ``true``
     */
    Q_PROPERTY(bool enabled READ enabled WRITE setEnabled NOTIFY enabledChanged)

    /**
     * This property can only be used
     * in conjunction with a Kirigami.FormData.label,
     * often in a layout that is a child of a kirigami::FormLayout.
     *
     * It then turns the item specified into a "buddy"
     * of the label, making it work as if it were
     * a child of the kirigami::FormLayout.
     *
     * A buddy item is useful for instance when the label has a keyboard accelerator,
     * which when triggered provides active keyboard focus to the buddy item.
     *
     * @code
     * Kirigami.FormLayout {
     *     ColumnLayout {
     *         // If the accelerator is in the letter S,
     *         // pressing Alt+S gives focus to the slider.
     *         Kirigami.FormData.label: "Slider label:"
     *         Kirigami.FormData.buddyFor: slider
     *
     *         QQC2.Slider {
     *             id: slider
     *             from: 0
     *             to: 100
     *             value: 50
     *         }
     *     }
     * }
     * @endcode
     */
    Q_PROPERTY(QQuickItem *buddyFor READ buddyFor WRITE setBuddyFor NOTIFY buddyForChanged)

public:
    explicit FormLayoutAttached(QObject *parent = nullptr);
    ~FormLayoutAttached() override;

    void setLabel(const QString &text);
    QString label() const;

    void setIsSection(bool section);
    bool isSection() const;

    void setCheckable(bool checkable);
    bool checkable() const;

    void setChecked(bool checked);
    bool checked() const;

    void setEnabled(bool enabled);
    bool enabled() const;

    QQuickItem *buddyFor() const;
    void setBuddyFor(QQuickItem *buddyfor);

    int labelAlignment() const;
    void setLabelAlignment(int alignment);

    // QML attached property
    static FormLayoutAttached *qmlAttachedProperties(QObject *object);

Q_SIGNALS:
    void labelChanged();
    void isSectionChanged();
    void checkableChanged();
    void checkedChanged();
    void enabledChanged();
    void buddyForChanged();
    void labelAlignmentChanged();

private:
    QString m_label;
    QString m_actualDecoratedLabel;
    QString m_decoratedLabel;
    QPointer<QQuickItem> m_buddyFor;
    bool m_isSection = false;
    bool m_checkable = false;
    bool m_checked = false;
    bool m_enabled = true;
    int m_labelAlignment = 0;
};

QML_DECLARE_TYPEINFO(FormLayoutAttached, QML_HAS_ATTACHED_PROPERTIES)

#endif // FORMLAYOUTATTACHED_H
