# CMake generated Testfile for 
# Source directory: /mnt/HDD/Project/Public/okulartry/kwindowsystem
# Build directory: /mnt/HDD/Project/Public/okulartry/kwindowsystem/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/sbin/appstreamcli" "-DINSTALL_FILES=/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/install_manifest.txt" "-P" "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties(appstreamtest PROPERTIES  _BACKTRACE_TRIPLES "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;165;add_test;/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;183;appstreamtest;/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/mnt/HDD/Project/Public/okulartry/kwindowsystem/CMakeLists.txt;15;include;/mnt/HDD/Project/Public/okulartry/kwindowsystem/CMakeLists.txt;0;")
subdirs("src")
subdirs("autotests")
subdirs("tests")
