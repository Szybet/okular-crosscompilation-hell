export PATH=/mnt/HDD/Project/Public/okulartry/okular-things/bin:$PATH

# LD_LIBRARY_PATH only needed if you are building without rpath
# export LD_LIBRARY_PATH=/mnt/HDD/Project/Public/okulartry/okular-things/lib:$LD_LIBRARY_PATH

export XDG_DATA_DIRS=/mnt/HDD/Project/Public/okulartry/okular-things/share:${XDG_DATA_DIRS:-/usr/local/share/:/usr/share/}
export XDG_CONFIG_DIRS=/mnt/HDD/Project/Public/okulartry/okular-things/etc/xdg:${XDG_CONFIG_DIRS:-/etc/xdg}

export QT_PLUGIN_PATH=/mnt/HDD/Project/Public/okulartry/okular-things/lib/plugins:$QT_PLUGIN_PATH
export QML2_IMPORT_PATH=/mnt/HDD/Project/Public/okulartry/okular-things/lib/qml:$QML2_IMPORT_PATH

export QT_QUICK_CONTROLS_STYLE_PATH=/mnt/HDD/Project/Public/okulartry/okular-things/lib/qml/QtQuick/Controls.2/:$QT_QUICK_CONTROLS_STYLE_PATH
