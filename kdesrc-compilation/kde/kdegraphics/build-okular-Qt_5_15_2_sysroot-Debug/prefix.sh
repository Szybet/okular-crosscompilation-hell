export PATH=/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin:$PATH

# LD_LIBRARY_PATH only needed if you are building without rpath
# export LD_LIBRARY_PATH=/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:$LD_LIBRARY_PATH

export XDG_DATA_DIRS=/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share:${XDG_DATA_DIRS:-/usr/local/share/:/usr/share/}
export XDG_CONFIG_DIRS=/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/etc/xdg:${XDG_CONFIG_DIRS:-/etc/xdg}

export QT_PLUGIN_PATH=/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/plugins:$QT_PLUGIN_PATH
export QML2_IMPORT_PATH=/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/qml:$QML2_IMPORT_PATH

export QT_QUICK_CONTROLS_STYLE_PATH=/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/qml/QtQuick/Controls.2/:$QT_QUICK_CONTROLS_STYLE_PATH
