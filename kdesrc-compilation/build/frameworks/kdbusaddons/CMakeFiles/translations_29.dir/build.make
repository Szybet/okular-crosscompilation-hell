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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kdbusaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kdbusaddons

# Utility rule file for translations_29.

# Include any custom commands dependencies for this target.
include CMakeFiles/translations_29.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/translations_29.dir/progress.make

CMakeFiles/translations_29: ECMPoQm/ml/kdbusaddons5_qt.qm

ECMPoQm/ml/kdbusaddons5_qt.qm: /home/szybet/kdesrc/frameworks/kdbusaddons/poqm/ml/kdbusaddons5_qt.po
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ECMPoQm/ml/kdbusaddons5_qt.qm"
	/usr/bin/lconvert -i /home/szybet/kdesrc/frameworks/kdbusaddons/poqm/ml/kdbusaddons5_qt.po -o /home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ml/kdbusaddons5_qt.ts -target-language ml
	/usr/bin/lrelease -removeidentical -nounfinished -silent /home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ml/kdbusaddons5_qt.ts -qm /home/szybet/kdesrc/build/frameworks/kdbusaddons/ECMPoQm/ml/kdbusaddons5_qt.qm

translations_29: CMakeFiles/translations_29
translations_29: ECMPoQm/ml/kdbusaddons5_qt.qm
translations_29: CMakeFiles/translations_29.dir/build.make
.PHONY : translations_29

# Rule to build all files generated by this target.
CMakeFiles/translations_29.dir/build: translations_29
.PHONY : CMakeFiles/translations_29.dir/build

CMakeFiles/translations_29.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/translations_29.dir/cmake_clean.cmake
.PHONY : CMakeFiles/translations_29.dir/clean

CMakeFiles/translations_29.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kdbusaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kdbusaddons /home/szybet/kdesrc/frameworks/kdbusaddons /home/szybet/kdesrc/build/frameworks/kdbusaddons /home/szybet/kdesrc/build/frameworks/kdbusaddons /home/szybet/kdesrc/build/frameworks/kdbusaddons/CMakeFiles/translations_29.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/translations_29.dir/depend

