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

# Utility rule file for kdeinit5_shutdown_autogen.

# Include any custom commands dependencies for this target.
include src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/progress.make

src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target kdeinit5_shutdown"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/AutogenInfo.json Debug

kdeinit5_shutdown_autogen: src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen
kdeinit5_shutdown_autogen: src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/build.make
.PHONY : kdeinit5_shutdown_autogen

# Rule to build all files generated by this target.
src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/build: kdeinit5_shutdown_autogen
.PHONY : src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/build

src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && $(CMAKE_COMMAND) -P CMakeFiles/kdeinit5_shutdown_autogen.dir/cmake_clean.cmake
.PHONY : src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/clean

src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kinit && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kinit /home/szybet/kdesrc/frameworks/kinit/src/kdeinit /home/szybet/kdesrc/build/frameworks/kinit /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kdeinit/CMakeFiles/kdeinit5_shutdown_autogen.dir/depend

