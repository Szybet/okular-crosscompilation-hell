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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kdbusaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kdbusaddons

# Include any dependencies generated for this target.
include tests/CMakeFiles/dbuscalltest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/dbuscalltest.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/dbuscalltest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/dbuscalltest.dir/flags.make

tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/dbuscalltest.dir/flags.make
tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o: tests/dbuscalltest_autogen/mocs_compilation.cpp
tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/dbuscalltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests/dbuscalltest_autogen/mocs_compilation.cpp

tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests/dbuscalltest_autogen/mocs_compilation.cpp > CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.i

tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests/dbuscalltest_autogen/mocs_compilation.cpp -o CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.s

tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o: tests/CMakeFiles/dbuscalltest.dir/flags.make
tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o: /home/szybet/kdesrc/frameworks/kdbusaddons/tests/dbuscalltest.cpp
tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o: tests/CMakeFiles/dbuscalltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o -MF CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o.d -o CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o -c /home/szybet/kdesrc/frameworks/kdbusaddons/tests/dbuscalltest.cpp

tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kdbusaddons/tests/dbuscalltest.cpp > CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.i

tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kdbusaddons/tests/dbuscalltest.cpp -o CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.s

# Object files for target dbuscalltest
dbuscalltest_OBJECTS = \
"CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o"

# External object files for target dbuscalltest
dbuscalltest_EXTERNAL_OBJECTS =

bin/dbuscalltest: tests/CMakeFiles/dbuscalltest.dir/dbuscalltest_autogen/mocs_compilation.cpp.o
bin/dbuscalltest: tests/CMakeFiles/dbuscalltest.dir/dbuscalltest.cpp.o
bin/dbuscalltest: tests/CMakeFiles/dbuscalltest.dir/build.make
bin/dbuscalltest: tests/CMakeFiles/dbuscalltest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/dbuscalltest"
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dbuscalltest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/dbuscalltest.dir/build: bin/dbuscalltest
.PHONY : tests/CMakeFiles/dbuscalltest.dir/build

tests/CMakeFiles/dbuscalltest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests && $(CMAKE_COMMAND) -P CMakeFiles/dbuscalltest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/dbuscalltest.dir/clean

tests/CMakeFiles/dbuscalltest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kdbusaddons /home/szybet/kdesrc/frameworks/kdbusaddons/tests /home/szybet/kdesrc/build/frameworks/kdbusaddons /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests /home/szybet/kdesrc/build/frameworks/kdbusaddons/tests/CMakeFiles/dbuscalltest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/dbuscalltest.dir/depend

