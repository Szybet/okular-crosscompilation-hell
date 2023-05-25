# CMake generated Testfile for 
# Source directory: /home/szybet/kdesrc/kde/kdegraphics/okular/generators/chm
# Build directory: /home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-RelWithDebInfo/generators/chm
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[chmgeneratortest]=] "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-RelWithDebInfo/bin/chmgeneratortest")
set_tests_properties([=[chmgeneratortest]=] PROPERTIES  ENVIRONMENT "QT_PLUGIN_PATH=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Desktop-RelWithDebInfo/bin::/usr/lib/qt/plugins" _BACKTRACE_TRIPLES "/usr/share/ECM/modules/ECMAddTests.cmake;96;add_test;/home/szybet/kdesrc/kde/kdegraphics/okular/generators/chm/CMakeLists.txt;29;ecm_add_test;/home/szybet/kdesrc/kde/kdegraphics/okular/generators/chm/CMakeLists.txt;0;")
subdirs("kio-msits")
