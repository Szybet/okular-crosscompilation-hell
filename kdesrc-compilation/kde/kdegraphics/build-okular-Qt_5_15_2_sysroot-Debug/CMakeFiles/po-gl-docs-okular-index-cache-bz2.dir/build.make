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
CMAKE_BINARY_DIR = /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug

# Utility rule file for po-gl-docs-okular-index-cache-bz2.

# Include any custom commands dependencies for this target.
include CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/progress.make

CMakeFiles/po-gl-docs-okular-index-cache-bz2: po/gl/docs/okular/index.cache.bz2

po/gl/docs/okular/index.cache.bz2: /home/szybet/kdesrc/kde/kdegraphics/okular/po/gl/docs/okular/index.docbook
po/gl/docs/okular/index.cache.bz2: /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/share/kf5/kdoctools/customization/kde-chunk.xsl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating po/gl/docs/okular/index.cache.bz2"
	cd /home/szybet/kdesrc/kde/kdegraphics/okular && /mnt/HDD/Project/inkbox-build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/meinproc5 --check --cache /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/po/gl/docs/okular/index.cache.bz2 po/gl/docs/okular/index.docbook

po-gl-docs-okular-index-cache-bz2: CMakeFiles/po-gl-docs-okular-index-cache-bz2
po-gl-docs-okular-index-cache-bz2: po/gl/docs/okular/index.cache.bz2
po-gl-docs-okular-index-cache-bz2: CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/build.make
.PHONY : po-gl-docs-okular-index-cache-bz2

# Rule to build all files generated by this target.
CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/build: po-gl-docs-okular-index-cache-bz2
.PHONY : CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/build

CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/clean

CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/po-gl-docs-okular-index-cache-bz2.dir/depend

