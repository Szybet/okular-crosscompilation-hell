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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/karchive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/karchive

# Include any dependencies generated for this target.
include tests/CMakeFiles/krcctest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/krcctest.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/krcctest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/krcctest.dir/flags.make

tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/krcctest.dir/flags.make
tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o: tests/krcctest_autogen/mocs_compilation.cpp
tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/krcctest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/karchive/tests/krcctest_autogen/mocs_compilation.cpp

tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/karchive/tests/krcctest_autogen/mocs_compilation.cpp > CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.i

tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/karchive/tests/krcctest_autogen/mocs_compilation.cpp -o CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.s

tests/CMakeFiles/krcctest.dir/krcctest.cpp.o: tests/CMakeFiles/krcctest.dir/flags.make
tests/CMakeFiles/krcctest.dir/krcctest.cpp.o: /home/szybet/kdesrc/frameworks/karchive/tests/krcctest.cpp
tests/CMakeFiles/krcctest.dir/krcctest.cpp.o: tests/CMakeFiles/krcctest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/krcctest.dir/krcctest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/krcctest.dir/krcctest.cpp.o -MF CMakeFiles/krcctest.dir/krcctest.cpp.o.d -o CMakeFiles/krcctest.dir/krcctest.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/tests/krcctest.cpp

tests/CMakeFiles/krcctest.dir/krcctest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/krcctest.dir/krcctest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/tests/krcctest.cpp > CMakeFiles/krcctest.dir/krcctest.cpp.i

tests/CMakeFiles/krcctest.dir/krcctest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/krcctest.dir/krcctest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/tests/krcctest.cpp -o CMakeFiles/krcctest.dir/krcctest.cpp.s

# Object files for target krcctest
krcctest_OBJECTS = \
"CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/krcctest.dir/krcctest.cpp.o"

# External object files for target krcctest
krcctest_EXTERNAL_OBJECTS =

bin/krcctest: tests/CMakeFiles/krcctest.dir/krcctest_autogen/mocs_compilation.cpp.o
bin/krcctest: tests/CMakeFiles/krcctest.dir/krcctest.cpp.o
bin/krcctest: tests/CMakeFiles/krcctest.dir/build.make
bin/krcctest: tests/CMakeFiles/krcctest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/krcctest"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/krcctest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/krcctest.dir/build: bin/krcctest
.PHONY : tests/CMakeFiles/krcctest.dir/build

tests/CMakeFiles/krcctest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && $(CMAKE_COMMAND) -P CMakeFiles/krcctest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/krcctest.dir/clean

tests/CMakeFiles/krcctest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/karchive && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/karchive /home/szybet/kdesrc/frameworks/karchive/tests /home/szybet/kdesrc/build/frameworks/karchive /home/szybet/kdesrc/build/frameworks/karchive/tests /home/szybet/kdesrc/build/frameworks/karchive/tests/CMakeFiles/krcctest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/krcctest.dir/depend

