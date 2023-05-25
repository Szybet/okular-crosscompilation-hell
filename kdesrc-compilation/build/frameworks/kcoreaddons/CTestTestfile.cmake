# CMake generated Testfile for 
# Source directory: /home/szybet/kdesrc/frameworks/kcoreaddons
# Build directory: /home/szybet/kdesrc/build/frameworks/kcoreaddons
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/sbin/appstreamcli" "-DINSTALL_FILES=/home/szybet/kdesrc/build/frameworks/kcoreaddons/install_manifest.txt" "-P" "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties(appstreamtest PROPERTIES  _BACKTRACE_TRIPLES "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;165;add_test;/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;183;appstreamtest;/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/home/szybet/kdesrc/frameworks/kcoreaddons/CMakeLists.txt;15;include;/home/szybet/kdesrc/frameworks/kcoreaddons/CMakeLists.txt;0;")
subdirs("src")
subdirs("autotests")
subdirs("tests")
