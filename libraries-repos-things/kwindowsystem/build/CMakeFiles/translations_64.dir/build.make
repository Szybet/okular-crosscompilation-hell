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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/kwindowsystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/kwindowsystem/build

# Utility rule file for translations_64.

# Include any custom commands dependencies for this target.
include CMakeFiles/translations_64.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/translations_64.dir/progress.make

CMakeFiles/translations_64: ECMPoQm/nn/kwindowsystem5_qt.qm

ECMPoQm/nn/kwindowsystem5_qt.qm: /mnt/HDD/Project/Public/okulartry/kwindowsystem/po/nn/kwindowsystem5_qt.po
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ECMPoQm/nn/kwindowsystem5_qt.qm"
	/usr/bin/lconvert -i /mnt/HDD/Project/Public/okulartry/kwindowsystem/po/nn/kwindowsystem5_qt.po -o /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/nn/kwindowsystem5_qt.ts -target-language nn
	/usr/bin/lrelease -removeidentical -nounfinished -silent /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/nn/kwindowsystem5_qt.ts -qm /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/ECMPoQm/nn/kwindowsystem5_qt.qm

translations_64: CMakeFiles/translations_64
translations_64: ECMPoQm/nn/kwindowsystem5_qt.qm
translations_64: CMakeFiles/translations_64.dir/build.make
.PHONY : translations_64

# Rule to build all files generated by this target.
CMakeFiles/translations_64.dir/build: translations_64
.PHONY : CMakeFiles/translations_64.dir/build

CMakeFiles/translations_64.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/translations_64.dir/cmake_clean.cmake
.PHONY : CMakeFiles/translations_64.dir/clean

CMakeFiles/translations_64.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/kwindowsystem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/kwindowsystem /mnt/HDD/Project/Public/okulartry/kwindowsystem /mnt/HDD/Project/Public/okulartry/kwindowsystem/build /mnt/HDD/Project/Public/okulartry/kwindowsystem/build /mnt/HDD/Project/Public/okulartry/kwindowsystem/build/CMakeFiles/translations_64.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/translations_64.dir/depend

