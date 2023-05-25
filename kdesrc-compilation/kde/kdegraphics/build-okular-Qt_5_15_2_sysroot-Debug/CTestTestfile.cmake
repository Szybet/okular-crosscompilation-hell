# CMake generated Testfile for 
# Source directory: /home/szybet/kdesrc/kde/kdegraphics/okular
# Build directory: /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[appstreamtest]=] "/usr/bin/cmake" "-DAPPSTREAMCLI=/sbin/appstreamcli" "-DINSTALL_FILES=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/install_manifest.txt" "-P" "/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties([=[appstreamtest]=] PROPERTIES  _BACKTRACE_TRIPLES "/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;165;add_test;/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;183;appstreamtest;/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/home/szybet/kdesrc/kde/kdegraphics/okular/CMakeLists.txt;83;include;/home/szybet/kdesrc/kde/kdegraphics/okular/CMakeLists.txt;0;")
subdirs("icons")
subdirs("part")
subdirs("shell")
subdirs("generators")
subdirs("autotests")
subdirs("doc")
