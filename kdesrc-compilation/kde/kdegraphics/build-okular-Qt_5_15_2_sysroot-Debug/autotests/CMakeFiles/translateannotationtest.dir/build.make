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
include autotests/CMakeFiles/translateannotationtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/translateannotationtest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/translateannotationtest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/translateannotationtest.dir/flags.make

autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/translateannotationtest.dir/flags.make
autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o: autotests/translateannotationtest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/translateannotationtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/translateannotationtest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/translateannotationtest_autogen/mocs_compilation.cpp > CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/translateannotationtest_autogen/mocs_compilation.cpp -o CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o: autotests/CMakeFiles/translateannotationtest.dir/flags.make
autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/translateannotationtest.cpp
autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o: autotests/CMakeFiles/translateannotationtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o -MF CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o.d -o CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/translateannotationtest.cpp

autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/translateannotationtest.cpp > CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.i

autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/translateannotationtest.cpp -o CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.s

autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.o: autotests/CMakeFiles/translateannotationtest.dir/flags.make
autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/testingutils.cpp
autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.o: autotests/CMakeFiles/translateannotationtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.o -MF CMakeFiles/translateannotationtest.dir/testingutils.cpp.o.d -o CMakeFiles/translateannotationtest.dir/testingutils.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/testingutils.cpp

autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/translateannotationtest.dir/testingutils.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/testingutils.cpp > CMakeFiles/translateannotationtest.dir/testingutils.cpp.i

autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/translateannotationtest.dir/testingutils.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/testingutils.cpp -o CMakeFiles/translateannotationtest.dir/testingutils.cpp.s

# Object files for target translateannotationtest
translateannotationtest_OBJECTS = \
"CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o" \
"CMakeFiles/translateannotationtest.dir/testingutils.cpp.o"

# External object files for target translateannotationtest
translateannotationtest_EXTERNAL_OBJECTS =

bin/translateannotationtest: autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest_autogen/mocs_compilation.cpp.o
bin/translateannotationtest: autotests/CMakeFiles/translateannotationtest.dir/translateannotationtest.cpp.o
bin/translateannotationtest: autotests/CMakeFiles/translateannotationtest.dir/testingutils.cpp.o
bin/translateannotationtest: autotests/CMakeFiles/translateannotationtest.dir/build.make
bin/translateannotationtest: autotests/CMakeFiles/translateannotationtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/translateannotationtest"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/translateannotationtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/translateannotationtest.dir/build: bin/translateannotationtest
.PHONY : autotests/CMakeFiles/translateannotationtest.dir/build

autotests/CMakeFiles/translateannotationtest.dir/clean:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -P CMakeFiles/translateannotationtest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/translateannotationtest.dir/clean

autotests/CMakeFiles/translateannotationtest.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/CMakeFiles/translateannotationtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/translateannotationtest.dir/depend

