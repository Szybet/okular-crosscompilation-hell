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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kio

# Utility rule file for KF5KIOCore_autogen.

# Include any custom commands dependencies for this target.
include src/core/CMakeFiles/KF5KIOCore_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/core/CMakeFiles/KF5KIOCore_autogen.dir/progress.make

src/core/CMakeFiles/KF5KIOCore_autogen: src/core/kiocore_export.h
src/core/CMakeFiles/KF5KIOCore_autogen: src/core/moc_predefs.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target KF5KIOCore"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/core && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/frameworks/kio/src/core/CMakeFiles/KF5KIOCore_autogen.dir/AutogenInfo.json Debug

src/core/moc_predefs.h:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_predefs.h"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/core && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++  -dM -E -c /usr/share/cmake/Modules/CMakeCXXCompilerABI.cpp > /home/szybet/kdesrc/build/frameworks/kio/src/core/moc_predefs.h

KF5KIOCore_autogen: src/core/CMakeFiles/KF5KIOCore_autogen
KF5KIOCore_autogen: src/core/moc_predefs.h
KF5KIOCore_autogen: src/core/CMakeFiles/KF5KIOCore_autogen.dir/build.make
.PHONY : KF5KIOCore_autogen

# Rule to build all files generated by this target.
src/core/CMakeFiles/KF5KIOCore_autogen.dir/build: KF5KIOCore_autogen
.PHONY : src/core/CMakeFiles/KF5KIOCore_autogen.dir/build

src/core/CMakeFiles/KF5KIOCore_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/core && $(CMAKE_COMMAND) -P CMakeFiles/KF5KIOCore_autogen.dir/cmake_clean.cmake
.PHONY : src/core/CMakeFiles/KF5KIOCore_autogen.dir/clean

src/core/CMakeFiles/KF5KIOCore_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/core /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/core /home/szybet/kdesrc/build/frameworks/kio/src/core/CMakeFiles/KF5KIOCore_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/CMakeFiles/KF5KIOCore_autogen.dir/depend

