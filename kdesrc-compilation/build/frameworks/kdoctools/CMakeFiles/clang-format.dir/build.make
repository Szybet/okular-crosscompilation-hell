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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kdoctools

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kdoctools

# Utility rule file for clang-format.

# Include any custom commands dependencies for this target.
include CMakeFiles/clang-format.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/clang-format.dir/progress.make

clang-format: CMakeFiles/clang-format.dir/build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/checkXML5.cpp..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/checkXML5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/docbookl10nhelper.cpp..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/docbookl10nhelper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/docbookxslt.h..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/docbookxslt.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/docbookxslt_p.h..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/docbookxslt_p.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/meinproc.cpp..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/meinproc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/meinproc_common.cpp..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/meinproc_common.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/meinproc_common.h..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/meinproc_common.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/xslt.cpp..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/xslt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kdoctools/src/xslt_kde.cpp..."
	cd /home/szybet/kdesrc/frameworks/kdoctools && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kdoctools/src/xslt_kde.cpp
.PHONY : clang-format

# Rule to build all files generated by this target.
CMakeFiles/clang-format.dir/build: clang-format
.PHONY : CMakeFiles/clang-format.dir/build

CMakeFiles/clang-format.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clang-format.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clang-format.dir/clean

CMakeFiles/clang-format.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kdoctools && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kdoctools /home/szybet/kdesrc/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/clang-format.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clang-format.dir/depend

