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
include autotests/CMakeFiles/knewpasswordwidgettest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/knewpasswordwidgettest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/knewpasswordwidgettest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/knewpasswordwidgettest.dir/flags.make

autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/knewpasswordwidgettest.dir/flags.make
autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o: autotests/knewpasswordwidgettest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/knewpasswordwidgettest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/knewpasswordwidgettest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/knewpasswordwidgettest_autogen/mocs_compilation.cpp > CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/knewpasswordwidgettest_autogen/mocs_compilation.cpp -o CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o: autotests/CMakeFiles/knewpasswordwidgettest.dir/flags.make
autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o: /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/knewpasswordwidgettest.cpp
autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o: autotests/CMakeFiles/knewpasswordwidgettest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o -MF CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o.d -o CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o -c /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/knewpasswordwidgettest.cpp

autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/knewpasswordwidgettest.cpp > CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.i

autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests/knewpasswordwidgettest.cpp -o CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.s

# Object files for target knewpasswordwidgettest
knewpasswordwidgettest_OBJECTS = \
"CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o"

# External object files for target knewpasswordwidgettest
knewpasswordwidgettest_EXTERNAL_OBJECTS =

bin/knewpasswordwidgettest: autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest_autogen/mocs_compilation.cpp.o
bin/knewpasswordwidgettest: autotests/CMakeFiles/knewpasswordwidgettest.dir/knewpasswordwidgettest.cpp.o
bin/knewpasswordwidgettest: autotests/CMakeFiles/knewpasswordwidgettest.dir/build.make
bin/knewpasswordwidgettest: autotests/CMakeFiles/knewpasswordwidgettest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/knewpasswordwidgettest"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/knewpasswordwidgettest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/knewpasswordwidgettest.dir/build: bin/knewpasswordwidgettest
.PHONY : autotests/CMakeFiles/knewpasswordwidgettest.dir/build

autotests/CMakeFiles/knewpasswordwidgettest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/knewpasswordwidgettest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/knewpasswordwidgettest.dir/clean

autotests/CMakeFiles/knewpasswordwidgettest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwidgetsaddons /home/szybet/kdesrc/frameworks/kwidgetsaddons/autotests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/autotests/CMakeFiles/knewpasswordwidgettest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/knewpasswordwidgettest.dir/depend

