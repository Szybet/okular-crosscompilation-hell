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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kdesupport/polkit-qt-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/kdesupport/polkit-qt-1

# Utility rule file for polkit-qt5-gui-1_autogen.

# Include any custom commands dependencies for this target.
include gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/progress.make

gui/CMakeFiles/polkit-qt5-gui-1_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/polkit-qt-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target polkit-qt5-gui-1"
	cd /home/szybet/kdesrc/build/kdesupport/polkit-qt-1/gui && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/kdesupport/polkit-qt-1/gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/AutogenInfo.json ""

polkit-qt5-gui-1_autogen: gui/CMakeFiles/polkit-qt5-gui-1_autogen
polkit-qt5-gui-1_autogen: gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/build.make
.PHONY : polkit-qt5-gui-1_autogen

# Rule to build all files generated by this target.
gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/build: polkit-qt5-gui-1_autogen
.PHONY : gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/build

gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/polkit-qt-1/gui && $(CMAKE_COMMAND) -P CMakeFiles/polkit-qt5-gui-1_autogen.dir/cmake_clean.cmake
.PHONY : gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/clean

gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/polkit-qt-1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/polkit-qt-1 /home/szybet/kdesrc/kdesupport/polkit-qt-1/gui /home/szybet/kdesrc/build/kdesupport/polkit-qt-1 /home/szybet/kdesrc/build/kdesupport/polkit-qt-1/gui /home/szybet/kdesrc/build/kdesupport/polkit-qt-1/gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/CMakeFiles/polkit-qt5-gui-1_autogen.dir/depend

