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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kwindowsystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kwindowsystem

# Utility rule file for translations_49.

# Include any custom commands dependencies for this target.
include CMakeFiles/translations_49.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/translations_49.dir/progress.make

CMakeFiles/translations_49: ECMPoQm/km/kwindowsystem5_qt.qm

ECMPoQm/km/kwindowsystem5_qt.qm: /home/szybet/kdesrc/frameworks/kwindowsystem/poqm/km/kwindowsystem5_qt.po
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwindowsystem/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ECMPoQm/km/kwindowsystem5_qt.qm"
	/usr/bin/lconvert -i /home/szybet/kdesrc/frameworks/kwindowsystem/poqm/km/kwindowsystem5_qt.po -o /home/szybet/kdesrc/build/frameworks/kwindowsystem/ECMPoQm/km/kwindowsystem5_qt.ts -target-language km
	/usr/bin/lrelease -removeidentical -nounfinished -silent /home/szybet/kdesrc/build/frameworks/kwindowsystem/ECMPoQm/km/kwindowsystem5_qt.ts -qm /home/szybet/kdesrc/build/frameworks/kwindowsystem/ECMPoQm/km/kwindowsystem5_qt.qm

translations_49: CMakeFiles/translations_49
translations_49: ECMPoQm/km/kwindowsystem5_qt.qm
translations_49: CMakeFiles/translations_49.dir/build.make
.PHONY : translations_49

# Rule to build all files generated by this target.
CMakeFiles/translations_49.dir/build: translations_49
.PHONY : CMakeFiles/translations_49.dir/build

CMakeFiles/translations_49.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/translations_49.dir/cmake_clean.cmake
.PHONY : CMakeFiles/translations_49.dir/clean

CMakeFiles/translations_49.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwindowsystem && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwindowsystem /home/szybet/kdesrc/frameworks/kwindowsystem /home/szybet/kdesrc/build/frameworks/kwindowsystem /home/szybet/kdesrc/build/frameworks/kwindowsystem /home/szybet/kdesrc/build/frameworks/kwindowsystem/CMakeFiles/translations_49.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/translations_49.dir/depend

