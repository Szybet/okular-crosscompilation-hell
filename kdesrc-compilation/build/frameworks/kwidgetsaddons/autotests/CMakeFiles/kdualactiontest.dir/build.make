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
include autotests/CMakeFiles/kdualactiontest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kdualactiontest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kdualactiontest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kdualactiontest.dir/flags.make

autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kdualactiontest.dir/flags.make
autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o: autotests/kdualactiontest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kdualactiontest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/kdualactiontest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/kdualactiontest_autogen/mocs_compilation.cpp > CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/kdualactiontest_autogen/mocs_compilation.cpp -o CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o: autotests/CMakeFiles/kdualactiontest.dir/flags.make
autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o: /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/kdualactiontest.cpp
autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o: autotests/CMakeFiles/kdualactiontest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o -MF CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o.d -o CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o -c /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/kdualactiontest.cpp

autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/kdualactiontest.cpp > CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.i

autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/kdualactiontest.cpp -o CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.s

# Object files for target kdualactiontest
kdualactiontest_OBJECTS = \
"CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o"

# External object files for target kdualactiontest
kdualactiontest_EXTERNAL_OBJECTS =

bin/kdualactiontest: autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest_autogen/mocs_compilation.cpp.o
bin/kdualactiontest: autotests/CMakeFiles/kdualactiontest.dir/kdualactiontest.cpp.o
bin/kdualactiontest: autotests/CMakeFiles/kdualactiontest.dir/build.make
bin/kdualactiontest: autotests/CMakeFiles/kdualactiontest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kdualactiontest"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kdualactiontest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kdualactiontest.dir/build: bin/kdualactiontest
.PHONY : autotests/CMakeFiles/kdualactiontest.dir/build

autotests/CMakeFiles/kdualactiontest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kdualactiontest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kdualactiontest.dir/clean

autotests/CMakeFiles/kdualactiontest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwidgetsaddons /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/CMakeFiles/kdualactiontest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kdualactiontest.dir/depend

