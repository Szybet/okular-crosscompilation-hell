# CMake generated Testfile for 
# Source directory: /home/szybet/kdesrc/kde/kdegraphics/okular/generators/epub
# Build directory: /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/epub
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[epubgeneratortest]=] "/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/bin/epubgeneratortest")
set_tests_properties([=[epubgeneratortest]=] PROPERTIES  ENVIRONMENT "QT_PLUGIN_PATH=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/bin::/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/plugins" _BACKTRACE_TRIPLES "/mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/modules/ECMAddTests.cmake;96;add_test;/home/szybet/kdesrc/kde/kdegraphics/okular/generators/epub/CMakeLists.txt;23;ecm_add_test;/home/szybet/kdesrc/kde/kdegraphics/okular/generators/epub/CMakeLists.txt;0;")
subdirs("data")
