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
include autotests/CMakeFiles/keysequencerecordertest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/keysequencerecordertest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/keysequencerecordertest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/keysequencerecordertest.dir/flags.make

autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/keysequencerecordertest.dir/flags.make
autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o: autotests/keysequencerecordertest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/keysequencerecordertest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/keysequencerecordertest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/keysequencerecordertest_autogen/mocs_compilation.cpp > CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/keysequencerecordertest_autogen/mocs_compilation.cpp -o CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o: autotests/CMakeFiles/keysequencerecordertest.dir/flags.make
autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o: /home/szybet/kdesrc/frameworks/kguiaddons/autotests/keysequencerecordertest.cpp
autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o: autotests/CMakeFiles/keysequencerecordertest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o -MF CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o.d -o CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o -c /home/szybet/kdesrc/frameworks/kguiaddons/autotests/keysequencerecordertest.cpp

autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kguiaddons/autotests/keysequencerecordertest.cpp > CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.i

autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kguiaddons/autotests/keysequencerecordertest.cpp -o CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.s

# Object files for target keysequencerecordertest
keysequencerecordertest_OBJECTS = \
"CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o"

# External object files for target keysequencerecordertest
keysequencerecordertest_EXTERNAL_OBJECTS =

bin/keysequencerecordertest: autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest_autogen/mocs_compilation.cpp.o
bin/keysequencerecordertest: autotests/CMakeFiles/keysequencerecordertest.dir/keysequencerecordertest.cpp.o
bin/keysequencerecordertest: autotests/CMakeFiles/keysequencerecordertest.dir/build.make
bin/keysequencerecordertest: autotests/CMakeFiles/keysequencerecordertest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/keysequencerecordertest"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/keysequencerecordertest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/keysequencerecordertest.dir/build: bin/keysequencerecordertest
.PHONY : autotests/CMakeFiles/keysequencerecordertest.dir/build

autotests/CMakeFiles/keysequencerecordertest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/keysequencerecordertest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/keysequencerecordertest.dir/clean

autotests/CMakeFiles/keysequencerecordertest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kguiaddons /home/szybet/kdesrc/frameworks/kguiaddons/autotests /home/szybet/kdesrc/build/frameworks/kguiaddons /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests /home/szybet/kdesrc/build/frameworks/kguiaddons/autotests/CMakeFiles/keysequencerecordertest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/keysequencerecordertest.dir/depend

