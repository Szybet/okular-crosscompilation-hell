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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kde/kdegraphics/okular

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug

# Include any dependencies generated for this target.
include autotests/CMakeFiles/keystroketest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/keystroketest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/keystroketest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/keystroketest.dir/flags.make

autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/keystroketest.dir/flags.make
autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o: autotests/keystroketest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/keystroketest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/keystroketest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/keystroketest_autogen/mocs_compilation.cpp > CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/keystroketest_autogen/mocs_compilation.cpp -o CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.o: autotests/CMakeFiles/keystroketest.dir/flags.make
autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/keystroketest.cpp
autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.o: autotests/CMakeFiles/keystroketest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.o -MF CMakeFiles/keystroketest.dir/keystroketest.cpp.o.d -o CMakeFiles/keystroketest.dir/keystroketest.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/keystroketest.cpp

autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/keystroketest.dir/keystroketest.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/keystroketest.cpp > CMakeFiles/keystroketest.dir/keystroketest.cpp.i

autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/keystroketest.dir/keystroketest.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/keystroketest.cpp -o CMakeFiles/keystroketest.dir/keystroketest.cpp.s

# Object files for target keystroketest
keystroketest_OBJECTS = \
"CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/keystroketest.dir/keystroketest.cpp.o"

# External object files for target keystroketest
keystroketest_EXTERNAL_OBJECTS =

bin/keystroketest: autotests/CMakeFiles/keystroketest.dir/keystroketest_autogen/mocs_compilation.cpp.o
bin/keystroketest: autotests/CMakeFiles/keystroketest.dir/keystroketest.cpp.o
bin/keystroketest: autotests/CMakeFiles/keystroketest.dir/build.make
bin/keystroketest: autotests/CMakeFiles/keystroketest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/keystroketest"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/keystroketest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/keystroketest.dir/build: bin/keystroketest
.PHONY : autotests/CMakeFiles/keystroketest.dir/build

autotests/CMakeFiles/keystroketest.dir/clean:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -P CMakeFiles/keystroketest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/keystroketest.dir/clean

autotests/CMakeFiles/keystroketest.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/CMakeFiles/keystroketest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/keystroketest.dir/depend

