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
include examples/base64test/CMakeFiles/base64test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/base64test/CMakeFiles/base64test.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/base64test/CMakeFiles/base64test.dir/progress.make

# Include the compile flags for this target's objects.
include examples/base64test/CMakeFiles/base64test.dir/flags.make

examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o: examples/base64test/CMakeFiles/base64test.dir/flags.make
examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o: examples/base64test/base64test_autogen/mocs_compilation.cpp
examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o: examples/base64test/CMakeFiles/base64test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test/base64test_autogen/mocs_compilation.cpp

examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test/base64test_autogen/mocs_compilation.cpp > CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.i

examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test/base64test_autogen/mocs_compilation.cpp -o CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.s

examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.o: examples/base64test/CMakeFiles/base64test.dir/flags.make
examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.o: /home/szybet/kdesrc/kdesupport/qca/examples/base64test/base64test.cpp
examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.o: examples/base64test/CMakeFiles/base64test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.o -MF CMakeFiles/base64test.dir/base64test.cpp.o.d -o CMakeFiles/base64test.dir/base64test.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/examples/base64test/base64test.cpp

examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base64test.dir/base64test.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/examples/base64test/base64test.cpp > CMakeFiles/base64test.dir/base64test.cpp.i

examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base64test.dir/base64test.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/examples/base64test/base64test.cpp -o CMakeFiles/base64test.dir/base64test.cpp.s

# Object files for target base64test
base64test_OBJECTS = \
"CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/base64test.dir/base64test.cpp.o"

# External object files for target base64test
base64test_EXTERNAL_OBJECTS =

bin/base64test: examples/base64test/CMakeFiles/base64test.dir/base64test_autogen/mocs_compilation.cpp.o
bin/base64test: examples/base64test/CMakeFiles/base64test.dir/base64test.cpp.o
bin/base64test: examples/base64test/CMakeFiles/base64test.dir/build.make
bin/base64test: lib/libqca-qt5.so.2.3.6
bin/base64test: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Core.so.5.15.2
bin/base64test: examples/base64test/CMakeFiles/base64test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/base64test"
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base64test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/base64test/CMakeFiles/base64test.dir/build: bin/base64test
.PHONY : examples/base64test/CMakeFiles/base64test.dir/build

examples/base64test/CMakeFiles/base64test.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test && $(CMAKE_COMMAND) -P CMakeFiles/base64test.dir/cmake_clean.cmake
.PHONY : examples/base64test/CMakeFiles/base64test.dir/clean

examples/base64test/CMakeFiles/base64test.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/qca /home/szybet/kdesrc/kdesupport/qca/examples/base64test /home/szybet/kdesrc/build/kdesupport/qca /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test /home/szybet/kdesrc/build/kdesupport/qca/examples/base64test/CMakeFiles/base64test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/base64test/CMakeFiles/base64test.dir/depend

