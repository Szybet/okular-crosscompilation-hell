# CMake generated Testfile for 
# Source directory: /home/szybet/kdesrc/kde/kdegraphics/okular
# Build directory: /home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-RelWithDebInfo
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[appstreamtest]=] "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-RelWithDebInfo/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties([=[appstreamtest]=] PROPERTIES  _BACKTRACE_TRIPLES "/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;165;add_test;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;183;appstreamtest;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/home/szybet/kdesrc/kde/kdegraphics/okular/CMakeLists.txt;83;include;/home/szybet/kdesrc/kde/kdegraphics/okular/CMakeLists.txt;0;")
subdirs("icons")
subdirs("part")
subdirs("shell")
subdirs("generators")
subdirs("autotests")
subdirs("doc")
