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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kwidgetsaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kwidgetsaddons

# Utility rule file for translations_30.

# Include any custom commands dependencies for this target.
include CMakeFiles/translations_30.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/translations_30.dir/progress.make

CMakeFiles/translations_30: ECMPoQm/fy/kwidgetsaddons5_qt.qm

ECMPoQm/fy/kwidgetsaddons5_qt.qm: /home/szybet/kdesrc/frameworks/kwidgetsaddons/poqm/fy/kwidgetsaddons5_qt.po
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ECMPoQm/fy/kwidgetsaddons5_qt.qm"
	/usr/bin/lconvert -i /home/szybet/kdesrc/frameworks/kwidgetsaddons/poqm/fy/kwidgetsaddons5_qt.po -o /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/fy/kwidgetsaddons5_qt.ts -target-language fy
	/usr/bin/lrelease -removeidentical -nounfinished -silent /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/fy/kwidgetsaddons5_qt.ts -qm /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/ECMPoQm/fy/kwidgetsaddons5_qt.qm

translations_30: CMakeFiles/translations_30
translations_30: ECMPoQm/fy/kwidgetsaddons5_qt.qm
translations_30: CMakeFiles/translations_30.dir/build.make
.PHONY : translations_30

# Rule to build all files generated by this target.
CMakeFiles/translations_30.dir/build: translations_30
.PHONY : CMakeFiles/translations_30.dir/build

CMakeFiles/translations_30.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/translations_30.dir/cmake_clean.cmake
.PHONY : CMakeFiles/translations_30.dir/clean

CMakeFiles/translations_30.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwidgetsaddons /home/szybet/kdesrc/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles/translations_30.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/translations_30.dir/depend

