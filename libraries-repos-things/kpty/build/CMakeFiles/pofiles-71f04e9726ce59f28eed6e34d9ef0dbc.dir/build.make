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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/kpty

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/kpty/build

# Utility rule file for pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.

# Include any custom commands dependencies for this target.
include CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/progress.make

CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kpty/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mo..."
	/usr/bin/cmake -DGETTEXT_MSGFMT_EXECUTABLE=/sbin/msgfmt -DCOPY_TO=/mnt/HDD/Project/Public/okulartry/kpty/build/locale -DPO_DIR=/mnt/HDD/Project/Public/okulartry/kpty/po -P /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/cmake/KF5I18n/build-pofiles.cmake

pofiles-71f04e9726ce59f28eed6e34d9ef0dbc: CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc
pofiles-71f04e9726ce59f28eed6e34d9ef0dbc: CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/build.make
.PHONY : pofiles-71f04e9726ce59f28eed6e34d9ef0dbc

# Rule to build all files generated by this target.
CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/build: pofiles-71f04e9726ce59f28eed6e34d9ef0dbc
.PHONY : CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/build

CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/clean

CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/kpty/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/kpty /mnt/HDD/Project/Public/okulartry/kpty /mnt/HDD/Project/Public/okulartry/kpty/build /mnt/HDD/Project/Public/okulartry/kpty/build /mnt/HDD/Project/Public/okulartry/kpty/build/CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pofiles-71f04e9726ce59f28eed6e34d9ef0dbc.dir/depend

