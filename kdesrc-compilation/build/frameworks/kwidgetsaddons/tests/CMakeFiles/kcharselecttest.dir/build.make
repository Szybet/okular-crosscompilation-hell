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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kwidgetsaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kwidgetsaddons

# Include any dependencies generated for this target.
include tests/CMakeFiles/kcharselecttest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/kcharselecttest.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/kcharselecttest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/kcharselecttest.dir/flags.make

tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/kcharselecttest.dir/flags.make
tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o: tests/kcharselecttest_autogen/mocs_compilation.cpp
tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/kcharselecttest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/kcharselecttest_autogen/mocs_compilation.cpp

tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/kcharselecttest_autogen/mocs_compilation.cpp > CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.i

tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/kcharselecttest_autogen/mocs_compilation.cpp -o CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.s

tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o: tests/CMakeFiles/kcharselecttest.dir/flags.make
tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o: /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kcharselecttest.cpp
tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o: tests/CMakeFiles/kcharselecttest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o -MF CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o.d -o CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o -c /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kcharselecttest.cpp

tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kcharselecttest.cpp > CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.i

tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kcharselecttest.cpp -o CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.s

# Object files for target kcharselecttest
kcharselecttest_OBJECTS = \
"CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o"

# External object files for target kcharselecttest
kcharselecttest_EXTERNAL_OBJECTS =

bin/kcharselecttest: tests/CMakeFiles/kcharselecttest.dir/kcharselecttest_autogen/mocs_compilation.cpp.o
bin/kcharselecttest: tests/CMakeFiles/kcharselecttest.dir/kcharselecttest.cpp.o
bin/kcharselecttest: tests/CMakeFiles/kcharselecttest.dir/build.make
bin/kcharselecttest: tests/CMakeFiles/kcharselecttest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kcharselecttest"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kcharselecttest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/kcharselecttest.dir/build: bin/kcharselecttest
.PHONY : tests/CMakeFiles/kcharselecttest.dir/build

tests/CMakeFiles/kcharselecttest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && $(CMAKE_COMMAND) -P CMakeFiles/kcharselecttest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/kcharselecttest.dir/clean

tests/CMakeFiles/kcharselecttest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwidgetsaddons /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/CMakeFiles/kcharselecttest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/kcharselecttest.dir/depend

