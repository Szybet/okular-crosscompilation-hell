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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/kinit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/kinit/build

# Include any dependencies generated for this target.
include src/klauncher/CMakeFiles/kdeinit_klauncher.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.make

# Include the progress variables for this target.
include src/klauncher/CMakeFiles/kdeinit_klauncher.dir/progress.make

# Include the compile flags for this target's objects.
include src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make

src/klauncher/org.kde.KLauncher.xml: /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_adaptor.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating org.kde.KLauncher.xml"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/qdbuscpp2xml /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_adaptor.h -o /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/org.kde.KLauncher.xml

src/klauncher/kslavelauncheradaptor.moc: src/klauncher/kslavelauncheradaptor.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating kslavelauncheradaptor.moc"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/moc @/mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/kslavelauncheradaptor.moc_parameters

src/klauncher/kslavelauncheradaptor.cpp: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/dbus-1/interfaces/kf5_org.kde.KSlaveLauncher.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating kslavelauncheradaptor.cpp, kslavelauncheradaptor.h"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/qdbusxml2cpp -m -a kslavelauncheradaptor -i klauncher.h -l KLauncher /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/dbus-1/interfaces/kf5_org.kde.KSlaveLauncher.xml

src/klauncher/kslavelauncheradaptor.h: src/klauncher/kslavelauncheradaptor.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate src/klauncher/kslavelauncheradaptor.h

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o: src/klauncher/kdeinit_klauncher_autogen/mocs_compilation.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o -c /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/kdeinit_klauncher_autogen/mocs_compilation.cpp

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/kdeinit_klauncher_autogen/mocs_compilation.cpp > CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.i

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/kdeinit_klauncher_autogen/mocs_compilation.cpp -o CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.s

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o: /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o -MF CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o.d -o CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o -c /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher.cpp

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher.cpp > CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.i

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher.cpp -o CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.s

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o: /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_main.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o -MF CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o.d -o CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o -c /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_main.cpp

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_main.cpp > CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.i

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_main.cpp -o CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.s

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o: /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_adaptor.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o -MF CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o.d -o CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o -c /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_adaptor.cpp

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_adaptor.cpp > CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.i

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher/klauncher_adaptor.cpp -o CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.s

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o: /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher_cmds.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o -MF CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o.d -o CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o -c /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher_cmds.cpp

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher_cmds.cpp > CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.i

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher_cmds.cpp -o CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.s

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o: src/klauncher/klauncher_debug.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o -MF CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o.d -o CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o -c /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/klauncher_debug.cpp

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/klauncher_debug.cpp > CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.i

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/klauncher_debug.cpp -o CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.s

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/flags.make
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o: src/klauncher/kslavelauncheradaptor.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o: src/klauncher/kslavelauncheradaptor.moc
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o -MF CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o.d -o CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o -c /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/kslavelauncheradaptor.cpp

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/kslavelauncheradaptor.cpp > CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.i

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/kslavelauncheradaptor.cpp -o CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.s

# Object files for target kdeinit_klauncher
kdeinit_klauncher_OBJECTS = \
"CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o" \
"CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o" \
"CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o" \
"CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o" \
"CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o" \
"CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o"

# External object files for target kdeinit_klauncher
kdeinit_klauncher_EXTERNAL_OBJECTS =

bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kdeinit_klauncher_autogen/mocs_compilation.cpp.o
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher.cpp.o
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_main.cpp.o
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_adaptor.cpp.o
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/__/klauncher_cmds.cpp.o
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/klauncher_debug.cpp.o
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/kslavelauncheradaptor.cpp.o
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/build.make
bin/libkdeinit5_klauncher.so: src/klauncher/CMakeFiles/kdeinit_klauncher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kinit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared library ../../bin/libkdeinit5_klauncher.so"
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kdeinit_klauncher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/build: bin/libkdeinit5_klauncher.so
.PHONY : src/klauncher/CMakeFiles/kdeinit_klauncher.dir/build

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/clean:
	cd /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher && $(CMAKE_COMMAND) -P CMakeFiles/kdeinit_klauncher.dir/cmake_clean.cmake
.PHONY : src/klauncher/CMakeFiles/kdeinit_klauncher.dir/clean

src/klauncher/CMakeFiles/kdeinit_klauncher.dir/depend: src/klauncher/kslavelauncheradaptor.cpp
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/depend: src/klauncher/kslavelauncheradaptor.h
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/depend: src/klauncher/kslavelauncheradaptor.moc
src/klauncher/CMakeFiles/kdeinit_klauncher.dir/depend: src/klauncher/org.kde.KLauncher.xml
	cd /mnt/HDD/Project/Public/okulartry/kinit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/kinit /mnt/HDD/Project/Public/okulartry/kinit/src/klauncher /mnt/HDD/Project/Public/okulartry/kinit/build /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher /mnt/HDD/Project/Public/okulartry/kinit/build/src/klauncher/CMakeFiles/kdeinit_klauncher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/klauncher/CMakeFiles/kdeinit_klauncher.dir/depend

