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
include autotests/CMakeFiles/mainshelltest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/mainshelltest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/mainshelltest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/mainshelltest.dir/flags.make

autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o: autotests/mainshelltest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/mainshelltest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/mainshelltest_autogen/mocs_compilation.cpp > CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/mainshelltest_autogen/mocs_compilation.cpp -o CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/mainshelltest.cpp
autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o -MF CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o.d -o CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/mainshelltest.cpp

autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/mainshelltest.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/mainshelltest.cpp > CMakeFiles/mainshelltest.dir/mainshelltest.cpp.i

autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/mainshelltest.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/mainshelltest.cpp -o CMakeFiles/mainshelltest.dir/mainshelltest.cpp.s

autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/shell/okular_main.cpp
autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o -MF CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o.d -o CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/shell/okular_main.cpp

autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/shell/okular_main.cpp > CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.i

autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/shell/okular_main.cpp -o CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.s

autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shellutils.cpp
autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o -MF CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o.d -o CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shellutils.cpp

autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shellutils.cpp > CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.i

autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shellutils.cpp -o CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.s

autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shell.cpp
autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o -MF CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o.d -o CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shell.cpp

autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shell.cpp > CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.i

autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/shell/shell.cpp -o CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.s

autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/shell/welcomescreen.cpp
autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o -MF CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o.d -o CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/shell/welcomescreen.cpp

autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/shell/welcomescreen.cpp > CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.i

autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/shell/welcomescreen.cpp -o CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.s

autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/shell/recentitemsmodel.cpp
autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o -MF CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o.d -o CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/shell/recentitemsmodel.cpp

autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/shell/recentitemsmodel.cpp > CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.i

autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/shell/recentitemsmodel.cpp -o CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.s

autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o: autotests/CMakeFiles/mainshelltest.dir/flags.make
autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/closedialoghelper.cpp
autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o: autotests/CMakeFiles/mainshelltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o -MF CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o.d -o CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/closedialoghelper.cpp

autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.i"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/closedialoghelper.cpp > CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.i

autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.s"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/okular/autotests/closedialoghelper.cpp -o CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.s

# Object files for target mainshelltest
mainshelltest_OBJECTS = \
"CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o" \
"CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o" \
"CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o" \
"CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o" \
"CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o" \
"CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o" \
"CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o"

# External object files for target mainshelltest
mainshelltest_EXTERNAL_OBJECTS =

bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/mainshelltest_autogen/mocs_compilation.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/mainshelltest.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/__/shell/okular_main.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/__/shell/shellutils.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/__/shell/shell.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/__/shell/welcomescreen.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/__/shell/recentitemsmodel.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/closedialoghelper.cpp.o
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/build.make
bin/mainshelltest: autotests/CMakeFiles/mainshelltest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ../bin/mainshelltest"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mainshelltest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/mainshelltest.dir/build: bin/mainshelltest
.PHONY : autotests/CMakeFiles/mainshelltest.dir/build

autotests/CMakeFiles/mainshelltest.dir/clean:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests && $(CMAKE_COMMAND) -P CMakeFiles/mainshelltest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/mainshelltest.dir/clean

autotests/CMakeFiles/mainshelltest.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/autotests/CMakeFiles/mainshelltest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/mainshelltest.dir/depend

