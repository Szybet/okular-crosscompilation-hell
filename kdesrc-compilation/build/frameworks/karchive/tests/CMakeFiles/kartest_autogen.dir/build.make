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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/karchive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/karchive

# Utility rule file for kartest_autogen.

# Include any custom commands dependencies for this target.
include tests/CMakeFiles/kartest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/kartest_autogen.dir/progress.make

tests/CMakeFiles/kartest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target kartest"
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/frameworks/karchive/tests/CMakeFiles/kartest_autogen.dir/AutogenInfo.json Debug

kartest_autogen: tests/CMakeFiles/kartest_autogen
kartest_autogen: tests/CMakeFiles/kartest_autogen.dir/build.make
.PHONY : kartest_autogen

# Rule to build all files generated by this target.
tests/CMakeFiles/kartest_autogen.dir/build: kartest_autogen
.PHONY : tests/CMakeFiles/kartest_autogen.dir/build

tests/CMakeFiles/kartest_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/karchive/tests && $(CMAKE_COMMAND) -P CMakeFiles/kartest_autogen.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/kartest_autogen.dir/clean

tests/CMakeFiles/kartest_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/karchive && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/karchive /home/szybet/kdesrc/frameworks/karchive/tests /home/szybet/kdesrc/build/frameworks/karchive /home/szybet/kdesrc/build/frameworks/karchive/tests /home/szybet/kdesrc/build/frameworks/karchive/tests/CMakeFiles/kartest_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/kartest_autogen.dir/depend

