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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/knotifications

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/knotifications

# Utility rule file for KF5Notifications_autogen.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/KF5Notifications_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/KF5Notifications_autogen.dir/progress.make

src/CMakeFiles/KF5Notifications_autogen: src/knotifications_export.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/knotifications/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target KF5Notifications"
	cd /home/szybet/kdesrc/build/frameworks/knotifications/src && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/frameworks/knotifications/src/CMakeFiles/KF5Notifications_autogen.dir/AutogenInfo.json Debug

KF5Notifications_autogen: src/CMakeFiles/KF5Notifications_autogen
KF5Notifications_autogen: src/CMakeFiles/KF5Notifications_autogen.dir/build.make
.PHONY : KF5Notifications_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/KF5Notifications_autogen.dir/build: KF5Notifications_autogen
.PHONY : src/CMakeFiles/KF5Notifications_autogen.dir/build

src/CMakeFiles/KF5Notifications_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/knotifications/src && $(CMAKE_COMMAND) -P CMakeFiles/KF5Notifications_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/KF5Notifications_autogen.dir/clean

src/CMakeFiles/KF5Notifications_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/knotifications && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/knotifications /home/szybet/kdesrc/frameworks/knotifications/src /home/szybet/kdesrc/build/frameworks/knotifications /home/szybet/kdesrc/build/frameworks/knotifications/src /home/szybet/kdesrc/build/frameworks/knotifications/src/CMakeFiles/KF5Notifications_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/KF5Notifications_autogen.dir/depend

