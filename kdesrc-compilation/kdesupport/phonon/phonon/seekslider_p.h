/*  This file is part of the KDE project
    Copyright (C) 2006 Matthias Kretz <kretz@kde.org>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) version 3, or any
    later version accepted by the membership of KDE e.V. (or its
    successor approved by the membership of KDE e.V.), Nokia Corporation
    (or its successors, if any) and the KDE Free Qt Foundation, which shall
    act as a proxy defined in Section 6 of version 3 of the license.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef SEEKSLIDER_P_H
#define SEEKSLIDER_P_H

#include <QPointer>
#include <QBoxLayout>
#include <QIcon>
#include <QLabel>
#include <QPixmap>
#include <QStyle>

#include "factory_p.h"
#include "phonondefs_p.h"
#include "platform_p.h"
#include "seekslider.h"
#include "swiftslider_p.h"

#ifndef QT_NO_PHONON_SEEKSLIDER

namespace Phonon
{
class MediaObject;
class SeekSliderPrivate
{
    P_DECLARE_PUBLIC(SeekSlider)
    protected:
        SeekSliderPrivate(SeekSlider *parent)
            : layout(QBoxLayout::LeftToRight, parent),
            slider(Qt::Horizontal, parent),
            iconLabel(parent),
            ticking(false)
#ifndef QT_NO_PHONON_PLATFORMPLUGIN
            ,icon(Platform::icon(QLatin1String("player-time"), parent->style()))
#endif //QT_NO_PHONON_PLATFORMPLUGIN
        {
            const int e = parent->style()->pixelMetric(QStyle::PM_ButtonIconSize);
            iconSize = QSize(e, e);

            slider.setPageStep(5000); // 5 sec
            slider.setSingleStep(500); // 0.5 sec

            layout.setContentsMargins(QMargins());
            layout.setSpacing(2);
            layout.addWidget(&iconLabel, 0, Qt::AlignVCenter);
            layout.addWidget(&slider, 0, Qt::AlignVCenter);

            setEnabled(false);

            if (icon.isNull()) {
                iconLabel.setVisible(false);
            }
        }

        SeekSlider *q_ptr;

    private:
        void setEnabled(bool);
        void _k_stateChanged(Phonon::State);
        void _k_seek(int);
        void _k_tick(qint64);
        void _k_length(qint64);
        void _k_seekableChanged(bool);
        void _k_currentSourceChanged();

        QBoxLayout layout;
        SwiftSlider slider;
        QLabel iconLabel;
        QPointer<MediaObject> media;
        bool ticking;
        QIcon icon;
        QSize iconSize;
};
} // namespace Phonon

#endif //QT_NO_PHONON_SEEKSLIDER

#endif // SEEKSLIDER_P_H
// vim: sw=4 ts=4 tw=80
