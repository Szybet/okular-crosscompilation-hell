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
include examples/ciphertest/CMakeFiles/ciphertest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/ciphertest/CMakeFiles/ciphertest.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/ciphertest/CMakeFiles/ciphertest.dir/progress.make

# Include the compile flags for this target's objects.
include examples/ciphertest/CMakeFiles/ciphertest.dir/flags.make

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o: examples/ciphertest/CMakeFiles/ciphertest.dir/flags.make
examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o: examples/ciphertest/ciphertest_autogen/mocs_compilation.cpp
examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o: examples/ciphertest/CMakeFiles/ciphertest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest/ciphertest_autogen/mocs_compilation.cpp

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest/ciphertest_autogen/mocs_compilation.cpp > CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.i

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest/ciphertest_autogen/mocs_compilation.cpp -o CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.s

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o: examples/ciphertest/CMakeFiles/ciphertest.dir/flags.make
examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o: /home/szybet/kdesrc/kdesupport/qca/examples/ciphertest/ciphertest.cpp
examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o: examples/ciphertest/CMakeFiles/ciphertest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o -MF CMakeFiles/ciphertest.dir/ciphertest.cpp.o.d -o CMakeFiles/ciphertest.dir/ciphertest.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/examples/ciphertest/ciphertest.cpp

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ciphertest.dir/ciphertest.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/examples/ciphertest/ciphertest.cpp > CMakeFiles/ciphertest.dir/ciphertest.cpp.i

examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ciphertest.dir/ciphertest.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/examples/ciphertest/ciphertest.cpp -o CMakeFiles/ciphertest.dir/ciphertest.cpp.s

# Object files for target ciphertest
ciphertest_OBJECTS = \
"CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ciphertest.dir/ciphertest.cpp.o"

# External object files for target ciphertest
ciphertest_EXTERNAL_OBJECTS =

bin/ciphertest: examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest_autogen/mocs_compilation.cpp.o
bin/ciphertest: examples/ciphertest/CMakeFiles/ciphertest.dir/ciphertest.cpp.o
bin/ciphertest: examples/ciphertest/CMakeFiles/ciphertest.dir/build.make
bin/ciphertest: lib/libqca-qt5.so.2.3.6
bin/ciphertest: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Core.so.5.15.2
bin/ciphertest: examples/ciphertest/CMakeFiles/ciphertest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/ciphertest"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ciphertest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/ciphertest/CMakeFiles/ciphertest.dir/build: bin/ciphertest
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/build

examples/ciphertest/CMakeFiles/ciphertest.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest && $(CMAKE_COMMAND) -P CMakeFiles/ciphertest.dir/cmake_clean.cmake
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/clean

examples/ciphertest/CMakeFiles/ciphertest.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/qca /home/szybet/kdesrc/kdesupport/qca/examples/ciphertest /home/szybet/kdesrc/build/kdesupport/qca /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest /home/szybet/kdesrc/build/kdesupport/qca/examples/ciphertest/CMakeFiles/ciphertest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/ciphertest/CMakeFiles/ciphertest.dir/depend

