# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kdesupport/qca

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/kdesupport/qca

# Include any dependencies generated for this target.
include examples/randomtest/CMakeFiles/randomtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/randomtest/CMakeFiles/randomtest.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/randomtest/CMakeFiles/randomtest.dir/progress.make

# Include the compile flags for this target's objects.
include examples/randomtest/CMakeFiles/randomtest.dir/flags.make

examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o: examples/randomtest/CMakeFiles/randomtest.dir/flags.make
examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o: examples/randomtest/randomtest_autogen/mocs_compilation.cpp
examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o: examples/randomtest/CMakeFiles/randomtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest/randomtest_autogen/mocs_compilation.cpp

examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest/randomtest_autogen/mocs_compilation.cpp > CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.i

examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest/randomtest_autogen/mocs_compilation.cpp -o CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.s

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o: examples/randomtest/CMakeFiles/randomtest.dir/flags.make
examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o: /home/szybet/kdesrc/kdesupport/qca/examples/randomtest/randomtest.cpp
examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o: examples/randomtest/CMakeFiles/randomtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o -MF CMakeFiles/randomtest.dir/randomtest.cpp.o.d -o CMakeFiles/randomtest.dir/randomtest.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/examples/randomtest/randomtest.cpp

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/randomtest.dir/randomtest.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/examples/randomtest/randomtest.cpp > CMakeFiles/randomtest.dir/randomtest.cpp.i

examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/randomtest.dir/randomtest.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/examples/randomtest/randomtest.cpp -o CMakeFiles/randomtest.dir/randomtest.cpp.s

# Object files for target randomtest
randomtest_OBJECTS = \
"CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/randomtest.dir/randomtest.cpp.o"

# External object files for target randomtest
randomtest_EXTERNAL_OBJECTS =

bin/randomtest: examples/randomtest/CMakeFiles/randomtest.dir/randomtest_autogen/mocs_compilation.cpp.o
bin/randomtest: examples/randomtest/CMakeFiles/randomtest.dir/randomtest.cpp.o
bin/randomtest: examples/randomtest/CMakeFiles/randomtest.dir/build.make
bin/randomtest: lib/libqca-qt5.so.2.3.6
bin/randomtest: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Core.so.5.15.2
bin/randomtest: examples/randomtest/CMakeFiles/randomtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/randomtest"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/randomtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/randomtest/CMakeFiles/randomtest.dir/build: bin/randomtest
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/build

examples/randomtest/CMakeFiles/randomtest.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest && $(CMAKE_COMMAND) -P CMakeFiles/randomtest.dir/cmake_clean.cmake
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/clean

examples/randomtest/CMakeFiles/randomtest.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/qca /home/szybet/kdesrc/kdesupport/qca/examples/randomtest /home/szybet/kdesrc/build/kdesupport/qca /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest /home/szybet/kdesrc/build/kdesupport/qca/examples/randomtest/CMakeFiles/randomtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/randomtest/CMakeFiles/randomtest.dir/depend

