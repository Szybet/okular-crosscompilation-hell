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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kparts

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kparts

# Utility rule file for pofiles.

# Include any custom commands dependencies for this target.
include CMakeFiles/pofiles.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pofiles.dir/progress.make

pofiles: CMakeFiles/pofiles.dir/build.make
.PHONY : pofiles

# Rule to build all files generated by this target.
CMakeFiles/pofiles.dir/build: pofiles
.PHONY : CMakeFiles/pofiles.dir/build

CMakeFiles/pofiles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pofiles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pofiles.dir/clean

CMakeFiles/pofiles.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kparts && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kparts /home/szybet/kdesrc/frameworks/kparts /home/szybet/kdesrc/build/frameworks/kparts /home/szybet/kdesrc/build/frameworks/kparts /home/szybet/kdesrc/build/frameworks/kparts/CMakeFiles/pofiles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pofiles.dir/depend

