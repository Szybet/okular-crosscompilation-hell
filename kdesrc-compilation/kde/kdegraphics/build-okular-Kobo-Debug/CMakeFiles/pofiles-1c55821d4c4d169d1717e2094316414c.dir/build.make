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

# Utility rule file for pofiles-1c55821d4c4d169d1717e2094316414c.

# Include any custom commands dependencies for this target.
include CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/progress.make

CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mo..."
	/usr/bin/cmake -DGETTEXT_MSGFMT_EXECUTABLE=/sbin/msgfmt -DCOPY_TO=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/locale -DPO_DIR=/home/szybet/kdesrc/kde/kdegraphics/okular/po -P /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/cmake/KF5I18n/build-pofiles.cmake

pofiles-1c55821d4c4d169d1717e2094316414c: CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c
pofiles-1c55821d4c4d169d1717e2094316414c: CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/build.make
.PHONY : pofiles-1c55821d4c4d169d1717e2094316414c

# Rule to build all files generated by this target.
CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/build: pofiles-1c55821d4c4d169d1717e2094316414c
.PHONY : CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/build

CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/clean

CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Kobo-Debug/CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pofiles-1c55821d4c4d169d1717e2094316414c.dir/depend

