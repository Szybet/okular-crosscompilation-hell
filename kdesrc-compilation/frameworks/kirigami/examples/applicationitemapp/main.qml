/*
 *  SPDX-FileCopyrightText: 2016 Marco Martin <mart@kde.org>
 *
 *  SPDX-License-Identifier: LGPL-2.0-or-later
 */

import QtQuick 2.15
import org.kde.kirigami 2.20 as Kirigami

Kirigami.ApplicationItem {
    id: root

    globalDrawer: Kirigami.GlobalDrawer {
        title: "Hello App"
        titleIcon: "applications-graphics"

        actions: [
            Kirigami.Action {
                text: "View"
                icon.name: "view-list-icons"
                Kirigami.Action {
                    text: "action 1"
                }
                Kirigami.Action {
                    text: "action 2"
                }
                Kirigami.Action {
                    text: "action 3"
                }
            },
            Kirigami.Action {
                text: "action 3"
            },
            Kirigami.Action {
                text: "action 4"
            }
        ]
        handleVisible: true
    }
    contextDrawer: Kirigami.ContextDrawer {
        id: contextDrawer
    }

    pageStack.initialPage: mainPageComponent

    Component {
        id: mainPageComponent
        Kirigami.Page {
            title: "Hello"
            actions.contextualActions: [
                Kirigami.Action {
                    text: "action 1"
                },
                Kirigami.Action {
                    text: "action 2"
                }
            ]
            Rectangle {
                color: "red"
                anchors.fill: parent
            }
        }
    }
}
