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

# Utility rule file for po-es-docs-qt5options-qt5options-7.

# Include any custom commands dependencies for this target.
include CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/progress.make

CMakeFiles/po-es-docs-qt5options-qt5options-7: po/es/docs/qt5options/qt5options.7

po/es/docs/qt5options/qt5options.7: /home/szybet/kdesrc/frameworks/kdoctools/po/es/docs/qt5options/man-qt5options.7.docbook
po/es/docs/qt5options/qt5options.7: src/customization/kde-include-man.xsl
po/es/docs/qt5options/qt5options.7: bin/docbookl10nhelper
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating po/es/docs/qt5options/qt5options.7"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/po/es/docs/qt5options && KF5::meinproc5 --stylesheet /home/szybet/kdesrc/build/frameworks/kdoctools/src/customization//kde-include-man.xsl --check --srcdir=/home/szybet/kdesrc/build/frameworks/kdoctools/src /home/szybet/kdesrc/frameworks/kdoctools/po/es/docs/qt5options/man-qt5options.7.docbook

po-es-docs-qt5options-qt5options-7: CMakeFiles/po-es-docs-qt5options-qt5options-7
po-es-docs-qt5options-qt5options-7: po/es/docs/qt5options/qt5options.7
po-es-docs-qt5options-qt5options-7: CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/build.make
.PHONY : po-es-docs-qt5options-qt5options-7

# Rule to build all files generated by this target.
CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/build: po-es-docs-qt5options-qt5options-7
.PHONY : CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/build

CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/clean

CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kdoctools && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kdoctools /home/szybet/kdesrc/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/po-es-docs-qt5options-qt5options-7.dir/depend

