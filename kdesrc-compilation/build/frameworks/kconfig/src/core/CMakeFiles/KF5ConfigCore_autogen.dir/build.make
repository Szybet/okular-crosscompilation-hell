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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kconfig

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kconfig

# Utility rule file for KF5ConfigCore_autogen.

# Include any custom commands dependencies for this target.
include src/core/CMakeFiles/KF5ConfigCore_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/core/CMakeFiles/KF5ConfigCore_autogen.dir/progress.make

src/core/CMakeFiles/KF5ConfigCore_autogen: src/core/kconfigcore_export.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target KF5ConfigCore"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/core && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/frameworks/kconfig/src/core/CMakeFiles/KF5ConfigCore_autogen.dir/AutogenInfo.json Debug

KF5ConfigCore_autogen: src/core/CMakeFiles/KF5ConfigCore_autogen
KF5ConfigCore_autogen: src/core/CMakeFiles/KF5ConfigCore_autogen.dir/build.make
.PHONY : KF5ConfigCore_autogen

# Rule to build all files generated by this target.
src/core/CMakeFiles/KF5ConfigCore_autogen.dir/build: KF5ConfigCore_autogen
.PHONY : src/core/CMakeFiles/KF5ConfigCore_autogen.dir/build

src/core/CMakeFiles/KF5ConfigCore_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/core && $(CMAKE_COMMAND) -P CMakeFiles/KF5ConfigCore_autogen.dir/cmake_clean.cmake
.PHONY : src/core/CMakeFiles/KF5ConfigCore_autogen.dir/clean

src/core/CMakeFiles/KF5ConfigCore_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kconfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfig /home/szybet/kdesrc/frameworks/kconfig/src/core /home/szybet/kdesrc/build/frameworks/kconfig /home/szybet/kdesrc/build/frameworks/kconfig/src/core /home/szybet/kdesrc/build/frameworks/kconfig/src/core/CMakeFiles/KF5ConfigCore_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/CMakeFiles/KF5ConfigCore_autogen.dir/depend

