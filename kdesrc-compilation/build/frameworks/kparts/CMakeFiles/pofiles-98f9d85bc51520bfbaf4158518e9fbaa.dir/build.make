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

# Utility rule file for pofiles-98f9d85bc51520bfbaf4158518e9fbaa.

# Include any custom commands dependencies for this target.
include CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/progress.make

CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kparts/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mo..."
	/usr/bin/cmake -DGETTEXT_MSGFMT_EXECUTABLE=/sbin/msgfmt -DCOPY_TO=/home/szybet/kdesrc/build/frameworks/kparts/locale -DPO_DIR=/home/szybet/kdesrc/frameworks/kparts/po -P /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/cmake/KF5I18n/build-pofiles.cmake

pofiles-98f9d85bc51520bfbaf4158518e9fbaa: CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa
pofiles-98f9d85bc51520bfbaf4158518e9fbaa: CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/build.make
.PHONY : pofiles-98f9d85bc51520bfbaf4158518e9fbaa

# Rule to build all files generated by this target.
CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/build: pofiles-98f9d85bc51520bfbaf4158518e9fbaa
.PHONY : CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/build

CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/clean

CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kparts && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kparts /home/szybet/kdesrc/frameworks/kparts /home/szybet/kdesrc/build/frameworks/kparts /home/szybet/kdesrc/build/frameworks/kparts /home/szybet/kdesrc/build/frameworks/kparts/CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pofiles-98f9d85bc51520bfbaf4158518e9fbaa.dir/depend

