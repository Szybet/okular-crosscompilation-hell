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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/kwindowsystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/kwindowsystem/build

# Include any dependencies generated for this target.
include src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/flags.make

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/flags.make
src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o: src/platforms/wayland/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp
src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o -MF CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o -c /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp > CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.i

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp -o CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.s

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/flags.make
src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o: /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/kwindowsystem.cpp
src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o -MF CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o.d -o CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o -c /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/kwindowsystem.cpp

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/kwindowsystem.cpp > CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.i

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/kwindowsystem.cpp -o CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.s

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/flags.make
src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o: /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/plugin.cpp
src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o -MF CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o.d -o CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o -c /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/plugin.cpp

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/plugin.cpp > CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.i

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland/plugin.cpp -o CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.s

# Object files for target KF5WindowSystemWaylandPlugin
KF5WindowSystemWaylandPlugin_OBJECTS = \
"CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o" \
"CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o"

# External object files for target KF5WindowSystemWaylandPlugin
KF5WindowSystemWaylandPlugin_EXTERNAL_OBJECTS =

bin/kf5/org.kde.kwindowsystem.platforms/KF5WindowSystemWaylandPlugin.so: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/KF5WindowSystemWaylandPlugin_autogen/mocs_compilation.cpp.o
bin/kf5/org.kde.kwindowsystem.platforms/KF5WindowSystemWaylandPlugin.so: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/kwindowsystem.cpp.o
bin/kf5/org.kde.kwindowsystem.platforms/KF5WindowSystemWaylandPlugin.so: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/plugin.cpp.o
bin/kf5/org.kde.kwindowsystem.platforms/KF5WindowSystemWaylandPlugin.so: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/build.make
bin/kf5/org.kde.kwindowsystem.platforms/KF5WindowSystemWaylandPlugin.so: src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared module ../../../bin/kf5/org.kde.kwindowsystem.platforms/KF5WindowSystemWaylandPlugin.so"
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KF5WindowSystemWaylandPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/build: bin/kf5/org.kde.kwindowsystem.platforms/KF5WindowSystemWaylandPlugin.so
.PHONY : src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/build

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/clean:
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland && $(CMAKE_COMMAND) -P CMakeFiles/KF5WindowSystemWaylandPlugin.dir/cmake_clean.cmake
.PHONY : src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/clean

src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/kwindowsystem /mnt/HDD/Project/Public/okulartry/kwindowsystem/src/platforms/wayland /mnt/HDD/Project/Public/okulartry/kwindowsystem/build /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/platforms/wayland/CMakeFiles/KF5WindowSystemWaylandPlugin.dir/depend

