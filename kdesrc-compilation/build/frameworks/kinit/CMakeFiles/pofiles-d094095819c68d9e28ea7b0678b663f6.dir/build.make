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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kinit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kinit

# Utility rule file for pofiles-d094095819c68d9e28ea7b0678b663f6.

# Include any custom commands dependencies for this target.
include CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/progress.make

CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mo..."
	/usr/bin/cmake -DGETTEXT_MSGFMT_EXECUTABLE=/sbin/msgfmt -DCOPY_TO=/home/szybet/kdesrc/build/frameworks/kinit/locale -DPO_DIR=/home/szybet/kdesrc/frameworks/kinit/po -P /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/cmake/KF5I18n/build-pofiles.cmake

pofiles-d094095819c68d9e28ea7b0678b663f6: CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6
pofiles-d094095819c68d9e28ea7b0678b663f6: CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/build.make
.PHONY : pofiles-d094095819c68d9e28ea7b0678b663f6

# Rule to build all files generated by this target.
CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/build: pofiles-d094095819c68d9e28ea7b0678b663f6
.PHONY : CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/build

CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/clean

CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kinit && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kinit /home/szybet/kdesrc/frameworks/kinit /home/szybet/kdesrc/build/frameworks/kinit /home/szybet/kdesrc/build/frameworks/kinit /home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pofiles-d094095819c68d9e28ea7b0678b663f6.dir/depend

