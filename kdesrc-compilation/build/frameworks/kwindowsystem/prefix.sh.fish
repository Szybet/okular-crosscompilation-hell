# SPDX-FileCopyrightText: 2021 Alexander Lohnau <alexander.lohnau@gmx.de>
# SPDX-License-Identifier: BSD-3-Clause

set PATH "/mnt/HDD/Project/Public/okulartry/okular-things/bin:$PATH"

# LD_LIBRARY_PATH only needed if you are building without rpath
# set -x LD_LIBRARY_PATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:$LD_LIBRARY_PATH"

if test -z "$XDG_DATA_DIRS"
    set -x --path XDG_DATA_DIRS /usr/local/share/ /usr/share/
end
set -x --path XDG_DATA_DIRS "/mnt/HDD/Project/Public/okulartry/okular-things/share" $XDG_DATA_DIRS

if test -z "$XDG_CONFIG_DIRS"
    set -x --path XDG_CONFIG_DIRS /etc/xdg
end
set -x --path XDG_CONFIG_DIRS "/mnt/HDD/Project/Public/okulartry/okular-things/etc/xdg" $XDG_CONFIG_DIRS

set -x --path QT_PLUGIN_PATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib/plugins" $QT_PLUGIN_PATH
set -x --path QML2_IMPORT_PATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib/qml" $QML2_IMPORT_PATH

set -x --path QT_QUICK_CONTROLS_STYLE_PATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib/qml/QtQuick/Controls.2/" $QT_QUICK_CONTROLS_STYLE_PATH
