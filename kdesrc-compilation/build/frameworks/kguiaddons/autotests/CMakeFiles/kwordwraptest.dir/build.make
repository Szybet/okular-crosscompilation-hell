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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kguiaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kguiaddons

# Include any dependencies generated for this target.
include autotests/CMakeFiles/kwordwraptest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kwordwraptest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kwordwraptest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kwordwraptest.dir/flags.make

autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kwordwraptest.dir/flags.make
autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o: autotests/kwordwraptest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kwordwraptest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/kwordwraptest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/kwordwraptest_autogen/mocs_compilation.cpp > CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/kwordwraptest_autogen/mocs_compilation.cpp -o CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o: autotests/CMakeFiles/kwordwraptest.dir/flags.make
autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o: /home/szybet/kdesrc/frameworks/kguiaddons/autotests/kwordwraptest.cpp
autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o: autotests/CMakeFiles/kwordwraptest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o -MF CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o.d -o CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o -c /home/szybet/kdesrc/frameworks/kguiaddons/autotests/kwordwraptest.cpp

autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kguiaddons/autotests/kwordwraptest.cpp > CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.i

autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kguiaddons/autotests/kwordwraptest.cpp -o CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.s

# Object files for target kwordwraptest
kwordwraptest_OBJECTS = \
"CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o"

# External object files for target kwordwraptest
kwordwraptest_EXTERNAL_OBJECTS =

bin/kwordwraptest: autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest_autogen/mocs_compilation.cpp.o
bin/kwordwraptest: autotests/CMakeFiles/kwordwraptest.dir/kwordwraptest.cpp.o
bin/kwordwraptest: autotests/CMakeFiles/kwordwraptest.dir/build.make
bin/kwordwraptest: autotests/CMakeFiles/kwordwraptest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kwordwraptest"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kwordwraptest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kwordwraptest.dir/build: bin/kwordwraptest
.PHONY : autotests/CMakeFiles/kwordwraptest.dir/build

autotests/CMakeFiles/kwordwraptest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kwordwraptest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kwordwraptest.dir/clean

autotests/CMakeFiles/kwordwraptest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kguiaddons /home/szybet/kdesrc/frameworks/kguiaddons/autotests /home/szybet/kdesrc/build/frameworks/kguiaddons /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/CMakeFiles/kwordwraptest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kwordwraptest.dir/depend

