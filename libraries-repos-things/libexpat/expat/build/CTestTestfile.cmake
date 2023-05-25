# CMake generated Testfile for 
# Source directory: /mnt/HDD/Project/Public/okulartry/libexpat/expat
# Build directory: /mnt/HDD/Project/Public/okulartry/libexpat/expat/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(runtests "bash" "run.sh" "/mnt/HDD/Project/Public/okulartry/libexpat/expat/build/tests/runtests")
set_tests_properties(runtests PROPERTIES  _BACKTRACE_TRIPLES "/mnt/HDD/Project/Public/okulartry/libexpat/expat/CMakeLists.txt;615;add_test;/mnt/HDD/Project/Public/okulartry/libexpat/expat/CMakeLists.txt;625;expat_add_test;/mnt/HDD/Project/Public/okulartry/libexpat/expat/CMakeLists.txt;0;")
add_test(runtestspp "bash" "run.sh" "/mnt/HDD/Project/Public/okulartry/libexpat/expat/build/tests/runtestspp")
set_tests_properties(runtestspp PROPERTIES  _BACKTRACE_TRIPLES "/mnt/HDD/Project/Public/okulartry/libexpat/expat/CMakeLists.txt;615;add_test;/mnt/HDD/Project/Public/okulartry/libexpat/expat/CMakeLists.txt;625;expat_add_test;/mnt/HDD/Project/Public/okulartry/libexpat/expat/CMakeLists.txt;0;")
