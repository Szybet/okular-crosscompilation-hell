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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kcoreaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kcoreaddons

# Include any dependencies generated for this target.
include autotests/CMakeFiles/kfuzzymatchertest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kfuzzymatchertest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kfuzzymatchertest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kfuzzymatchertest.dir/flags.make

autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kfuzzymatchertest.dir/flags.make
autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o: autotests/kfuzzymatchertest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kfuzzymatchertest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kfuzzymatchertest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kfuzzymatchertest_autogen/mocs_compilation.cpp > CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kfuzzymatchertest_autogen/mocs_compilation.cpp -o CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o: autotests/CMakeFiles/kfuzzymatchertest.dir/flags.make
autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o: /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kfuzzymatchertest.cpp
autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o: autotests/CMakeFiles/kfuzzymatchertest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o -MF CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o.d -o CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o -c /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kfuzzymatchertest.cpp

autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kfuzzymatchertest.cpp > CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.i

autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kfuzzymatchertest.cpp -o CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.s

# Object files for target kfuzzymatchertest
kfuzzymatchertest_OBJECTS = \
"CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o"

# External object files for target kfuzzymatchertest
kfuzzymatchertest_EXTERNAL_OBJECTS =

bin/kfuzzymatchertest: autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest_autogen/mocs_compilation.cpp.o
bin/kfuzzymatchertest: autotests/CMakeFiles/kfuzzymatchertest.dir/kfuzzymatchertest.cpp.o
bin/kfuzzymatchertest: autotests/CMakeFiles/kfuzzymatchertest.dir/build.make
bin/kfuzzymatchertest: lib/libautotests_static.a
bin/kfuzzymatchertest: autotests/CMakeFiles/kfuzzymatchertest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kfuzzymatchertest"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kfuzzymatchertest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kfuzzymatchertest.dir/build: bin/kfuzzymatchertest
.PHONY : autotests/CMakeFiles/kfuzzymatchertest.dir/build

autotests/CMakeFiles/kfuzzymatchertest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kfuzzymatchertest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kfuzzymatchertest.dir/clean

autotests/CMakeFiles/kfuzzymatchertest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kcoreaddons /home/szybet/kdesrc/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/CMakeFiles/kfuzzymatchertest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kfuzzymatchertest.dir/depend

