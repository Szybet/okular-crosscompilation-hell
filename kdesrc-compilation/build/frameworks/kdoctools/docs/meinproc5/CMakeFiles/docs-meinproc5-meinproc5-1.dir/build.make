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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kdoctools

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kdoctools

# Utility rule file for docs-meinproc5-meinproc5-1.

# Include any custom commands dependencies for this target.
include docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/compiler_depend.make

# Include the progress variables for this target.
include docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/progress.make

docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1: docs/meinproc5/meinproc5.1

docs/meinproc5/meinproc5.1: /home/szybet/kdesrc/frameworks/kdoctools/docs/meinproc5/man-meinproc5.1.docbook
docs/meinproc5/meinproc5.1: src/customization/kde-include-man.xsl
docs/meinproc5/meinproc5.1: bin/docbookl10nhelper
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating meinproc5.1"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/docs/meinproc5 && KF5::meinproc5 --stylesheet /home/szybet/kdesrc/build/frameworks/kdoctools/src/customization//kde-include-man.xsl --check --srcdir=/home/szybet/kdesrc/build/frameworks/kdoctools/src /home/szybet/kdesrc/frameworks/kdoctools/docs/meinproc5/man-meinproc5.1.docbook

docs-meinproc5-meinproc5-1: docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1
docs-meinproc5-meinproc5-1: docs/meinproc5/meinproc5.1
docs-meinproc5-meinproc5-1: docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/build.make
.PHONY : docs-meinproc5-meinproc5-1

# Rule to build all files generated by this target.
docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/build: docs-meinproc5-meinproc5-1
.PHONY : docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/build

docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/docs/meinproc5 && $(CMAKE_COMMAND) -P CMakeFiles/docs-meinproc5-meinproc5-1.dir/cmake_clean.cmake
.PHONY : docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/clean

docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kdoctools && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kdoctools /home/szybet/kdesrc/frameworks/kdoctools/docs/meinproc5 /home/szybet/kdesrc/build/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools/docs/meinproc5 /home/szybet/kdesrc/build/frameworks/kdoctools/docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : docs/meinproc5/CMakeFiles/docs-meinproc5-meinproc5-1.dir/depend

