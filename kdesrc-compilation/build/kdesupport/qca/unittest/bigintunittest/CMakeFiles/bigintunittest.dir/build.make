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
include unittest/bigintunittest/CMakeFiles/bigintunittest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittest/bigintunittest/CMakeFiles/bigintunittest.dir/compiler_depend.make

# Include the progress variables for this target.
include unittest/bigintunittest/CMakeFiles/bigintunittest.dir/progress.make

# Include the compile flags for this target's objects.
include unittest/bigintunittest/CMakeFiles/bigintunittest.dir/flags.make

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/flags.make
unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o: unittest/bigintunittest/bigintunittest_autogen/mocs_compilation.cpp
unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest/bigintunittest_autogen/mocs_compilation.cpp

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest/bigintunittest_autogen/mocs_compilation.cpp > CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.i

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest/bigintunittest_autogen/mocs_compilation.cpp -o CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.s

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/flags.make
unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o: /home/szybet/kdesrc/kdesupport/qca/unittest/bigintunittest/bigintunittest.cpp
unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o -MF CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o.d -o CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/unittest/bigintunittest/bigintunittest.cpp

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bigintunittest.dir/bigintunittest.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/unittest/bigintunittest/bigintunittest.cpp > CMakeFiles/bigintunittest.dir/bigintunittest.cpp.i

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bigintunittest.dir/bigintunittest.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/unittest/bigintunittest/bigintunittest.cpp -o CMakeFiles/bigintunittest.dir/bigintunittest.cpp.s

# Object files for target bigintunittest
bigintunittest_OBJECTS = \
"CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o"

# External object files for target bigintunittest
bigintunittest_EXTERNAL_OBJECTS =

bin/bigintunittest: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest_autogen/mocs_compilation.cpp.o
bin/bigintunittest: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/bigintunittest.cpp.o
bin/bigintunittest: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/build.make
bin/bigintunittest: lib/libqca-qt5.so.2.3.6
bin/bigintunittest: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Test.so.5.15.2
bin/bigintunittest: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Core.so.5.15.2
bin/bigintunittest: unittest/bigintunittest/CMakeFiles/bigintunittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/bigintunittest"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bigintunittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittest/bigintunittest/CMakeFiles/bigintunittest.dir/build: bin/bigintunittest
.PHONY : unittest/bigintunittest/CMakeFiles/bigintunittest.dir/build

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest && $(CMAKE_COMMAND) -P CMakeFiles/bigintunittest.dir/cmake_clean.cmake
.PHONY : unittest/bigintunittest/CMakeFiles/bigintunittest.dir/clean

unittest/bigintunittest/CMakeFiles/bigintunittest.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/qca /home/szybet/kdesrc/kdesupport/qca/unittest/bigintunittest /home/szybet/kdesrc/build/kdesupport/qca /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest /home/szybet/kdesrc/build/kdesupport/qca/unittest/bigintunittest/CMakeFiles/bigintunittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittest/bigintunittest/CMakeFiles/bigintunittest.dir/depend

