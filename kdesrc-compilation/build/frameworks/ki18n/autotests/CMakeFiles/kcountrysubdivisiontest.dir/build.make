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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/ki18n

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/ki18n

# Include any dependencies generated for this target.
include autotests/CMakeFiles/kcountrysubdivisiontest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kcountrysubdivisiontest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kcountrysubdivisiontest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kcountrysubdivisiontest.dir/flags.make

autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kcountrysubdivisiontest.dir/flags.make
autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o: autotests/kcountrysubdivisiontest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kcountrysubdivisiontest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/ki18n/autotests/kcountrysubdivisiontest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/ki18n/autotests/kcountrysubdivisiontest_autogen/mocs_compilation.cpp > CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/ki18n/autotests/kcountrysubdivisiontest_autogen/mocs_compilation.cpp -o CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o: autotests/CMakeFiles/kcountrysubdivisiontest.dir/flags.make
autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o: /home/szybet/kdesrc/frameworks/ki18n/autotests/kcountrysubdivisiontest.cpp
autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o: autotests/CMakeFiles/kcountrysubdivisiontest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o -MF CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o.d -o CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o -c /home/szybet/kdesrc/frameworks/ki18n/autotests/kcountrysubdivisiontest.cpp

autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/ki18n/autotests/kcountrysubdivisiontest.cpp > CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.i

autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/ki18n/autotests/kcountrysubdivisiontest.cpp -o CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.s

# Object files for target kcountrysubdivisiontest
kcountrysubdivisiontest_OBJECTS = \
"CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o"

# External object files for target kcountrysubdivisiontest
kcountrysubdivisiontest_EXTERNAL_OBJECTS =

bin/kcountrysubdivisiontest: autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest_autogen/mocs_compilation.cpp.o
bin/kcountrysubdivisiontest: autotests/CMakeFiles/kcountrysubdivisiontest.dir/kcountrysubdivisiontest.cpp.o
bin/kcountrysubdivisiontest: autotests/CMakeFiles/kcountrysubdivisiontest.dir/build.make
bin/kcountrysubdivisiontest: autotests/CMakeFiles/kcountrysubdivisiontest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kcountrysubdivisiontest"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kcountrysubdivisiontest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kcountrysubdivisiontest.dir/build: bin/kcountrysubdivisiontest
.PHONY : autotests/CMakeFiles/kcountrysubdivisiontest.dir/build

autotests/CMakeFiles/kcountrysubdivisiontest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kcountrysubdivisiontest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kcountrysubdivisiontest.dir/clean

autotests/CMakeFiles/kcountrysubdivisiontest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/ki18n && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/ki18n /home/szybet/kdesrc/frameworks/ki18n/autotests /home/szybet/kdesrc/build/frameworks/ki18n /home/szybet/kdesrc/build/frameworks/ki18n/autotests /home/szybet/kdesrc/build/frameworks/ki18n/autotests/CMakeFiles/kcountrysubdivisiontest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kcountrysubdivisiontest.dir/depend

