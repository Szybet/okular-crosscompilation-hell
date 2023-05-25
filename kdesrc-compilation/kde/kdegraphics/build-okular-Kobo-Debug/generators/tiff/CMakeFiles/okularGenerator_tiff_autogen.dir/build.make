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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kde/kdegraphics/okular

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug

# Utility rule file for okularGenerator_tiff_autogen.

# Include any custom commands dependencies for this target.
include generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/progress.make

generators/tiff/CMakeFiles/okularGenerator_tiff_autogen: /home/szybet/kdesrc/kde/kdegraphics/okular/generators/tiff/libokularGenerator_tiff.json
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target okularGenerator_tiff"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/generators/tiff && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/AutogenInfo.json Debug

okularGenerator_tiff_autogen: generators/tiff/CMakeFiles/okularGenerator_tiff_autogen
okularGenerator_tiff_autogen: generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/build.make
.PHONY : okularGenerator_tiff_autogen

# Rule to build all files generated by this target.
generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/build: okularGenerator_tiff_autogen
.PHONY : generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/build

generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/clean:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/generators/tiff && $(CMAKE_COMMAND) -P CMakeFiles/okularGenerator_tiff_autogen.dir/cmake_clean.cmake
.PHONY : generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/clean

generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular/generators/tiff /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/generators/tiff /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/depend

