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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kdesupport/phonon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/kdesupport/phonon

# Utility rule file for translations_71.

# Include any custom commands dependencies for this target.
include CMakeFiles/translations_71.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/translations_71.dir/progress.make

CMakeFiles/translations_71: ECMPoQm/ja/libphonon_qt.qm

ECMPoQm/ja/libphonon_qt.qm: /home/szybet/kdesrc/kdesupport/phonon/poqm/ja/libphonon_qt.po
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ECMPoQm/ja/libphonon_qt.qm"
	/usr/bin/lconvert -i /home/szybet/kdesrc/kdesupport/phonon/poqm/ja/libphonon_qt.po -o /home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ja/libphonon_qt.ts -target-language ja
	/usr/bin/lrelease -removeidentical -nounfinished -silent /home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ja/libphonon_qt.ts -qm /home/szybet/kdesrc/build/kdesupport/phonon/ECMPoQm/ja/libphonon_qt.qm

translations_71: CMakeFiles/translations_71
translations_71: ECMPoQm/ja/libphonon_qt.qm
translations_71: CMakeFiles/translations_71.dir/build.make
.PHONY : translations_71

# Rule to build all files generated by this target.
CMakeFiles/translations_71.dir/build: translations_71
.PHONY : CMakeFiles/translations_71.dir/build

CMakeFiles/translations_71.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/translations_71.dir/cmake_clean.cmake
.PHONY : CMakeFiles/translations_71.dir/clean

CMakeFiles/translations_71.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/phonon && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/phonon /home/szybet/kdesrc/kdesupport/phonon /home/szybet/kdesrc/build/kdesupport/phonon /home/szybet/kdesrc/build/kdesupport/phonon /home/szybet/kdesrc/build/kdesupport/phonon/CMakeFiles/translations_71.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/translations_71.dir/depend

