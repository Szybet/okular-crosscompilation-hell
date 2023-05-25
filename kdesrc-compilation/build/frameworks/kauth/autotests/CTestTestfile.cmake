# CMake generated Testfile for 
# Source directory: /home/szybet/kdesrc/frameworks/kauth/autotests
# Build directory: /home/szybet/kdesrc/build/frameworks/kauth/autotests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(KAuthSetupActionTest "/home/szybet/kdesrc/build/frameworks/kauth/bin/KAuthSetupActionTest")
set_tests_properties(KAuthSetupActionTest PROPERTIES  ENVIRONMENT "QT_PLUGIN_PATH=/home/szybet/kdesrc/build/frameworks/kauth/bin:" _BACKTRACE_TRIPLES "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/modules/ECMAddTests.cmake;96;add_test;/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;66;ecm_add_test;/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;0;")
add_test(KAuthHelperTest "/home/szybet/kdesrc/build/frameworks/kauth/bin/KAuthHelperTest")
set_tests_properties(KAuthHelperTest PROPERTIES  ENVIRONMENT "QT_PLUGIN_PATH=/home/szybet/kdesrc/build/frameworks/kauth/bin:" _BACKTRACE_TRIPLES "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/ECM/modules/ECMAddTests.cmake;96;add_test;/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;73;ecm_add_test;/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;0;")
add_test(KAuthPolicyGenTest "/home/szybet/kdesrc/build/frameworks/kauth/bin/kauth-policy-gen" "/home/szybet/kdesrc/frameworks/kauth/autotests/foo_actions.actions" "/home/szybet/kdesrc/build/frameworks/kauth/generated-foo.policy")
set_tests_properties(KAuthPolicyGenTest PROPERTIES  _BACKTRACE_TRIPLES "/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;80;add_test;/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;0;")
add_test(KAuthPolicyGenTestCompare "/usr/bin/cmake" "-E" "compare_files" "/home/szybet/kdesrc/build/frameworks/kauth/generated-foo.policy" "/home/szybet/kdesrc/frameworks/kauth/autotests/foo.policy")
set_tests_properties(KAuthPolicyGenTestCompare PROPERTIES  DEPENDS "KAuthPolicyGenTest" _BACKTRACE_TRIPLES "/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;83;add_test;/home/szybet/kdesrc/frameworks/kauth/autotests/CMakeLists.txt;0;")
