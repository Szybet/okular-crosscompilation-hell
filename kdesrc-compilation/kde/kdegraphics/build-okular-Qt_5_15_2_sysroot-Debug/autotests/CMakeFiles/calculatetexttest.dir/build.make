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
include autotests/CMakeFiles/calculatetexttest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/calculatetexttest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/calculatetexttest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/calculatetexttest.dir/flags.make

autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/calculatetexttest.dir/flags.make
autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o: autotests/calculatetexttest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/calculatetexttest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/calculatetexttest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/calculatetexttest_autogen/mocs_compilation.cpp > CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/calculatetexttest_autogen/mocs_compilation.cpp -o CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o: autotests/CMakeFiles/calculatetexttest.dir/flags.make
autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/calculatetexttest.cpp
autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o: autotests/CMakeFiles/calculatetexttest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o -MF CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o.d -o CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/calculatetexttest.cpp

autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/calculatetexttest.cpp > CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.i

autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/calculatetexttest.cpp -o CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.s

# Object files for target calculatetexttest
calculatetexttest_OBJECTS = \
"CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o"

# External object files for target calculatetexttest
calculatetexttest_EXTERNAL_OBJECTS =

bin/calculatetexttest: autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest_autogen/mocs_compilation.cpp.o
bin/calculatetexttest: autotests/CMakeFiles/calculatetexttest.dir/calculatetexttest.cpp.o
bin/calculatetexttest: autotests/CMakeFiles/calculatetexttest.dir/build.make
bin/calculatetexttest: autotests/CMakeFiles/calculatetexttest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/calculatetexttest"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculatetexttest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/calculatetexttest.dir/build: bin/calculatetexttest
.PHONY : autotests/CMakeFiles/calculatetexttest.dir/build

autotests/CMakeFiles/calculatetexttest.dir/clean:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -P CMakeFiles/calculatetexttest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/calculatetexttest.dir/clean

autotests/CMakeFiles/calculatetexttest.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/CMakeFiles/calculatetexttest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/calculatetexttest.dir/depend

