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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2

# Include any dependencies generated for this target.
include src/CMakeFiles/KExiv2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/KExiv2.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/KExiv2.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/KExiv2.dir/flags.make

src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o: src/KExiv2_autogen/mocs_compilation.cpp
src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o -MF CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src/KExiv2_autogen/mocs_compilation.cpp

src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src/KExiv2_autogen/mocs_compilation.cpp > CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.i

src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src/KExiv2_autogen/mocs_compilation.cpp -o CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2.cpp
src/CMakeFiles/KExiv2.dir/kexiv2.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2.cpp

src/CMakeFiles/KExiv2.dir/kexiv2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2.cpp > CMakeFiles/KExiv2.dir/kexiv2.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2.cpp -o CMakeFiles/KExiv2.dir/kexiv2.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2_p.cpp
src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2_p.cpp

src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2_p.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2_p.cpp > CMakeFiles/KExiv2.dir/kexiv2_p.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2_p.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2_p.cpp -o CMakeFiles/KExiv2.dir/kexiv2_p.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2data.cpp
src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2data.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2data.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2data.cpp

src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2data.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2data.cpp > CMakeFiles/KExiv2.dir/kexiv2data.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2data.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2data.cpp -o CMakeFiles/KExiv2.dir/kexiv2data.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2image.cpp
src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2image.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2image.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2image.cpp

src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2image.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2image.cpp > CMakeFiles/KExiv2.dir/kexiv2image.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2image.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2image.cpp -o CMakeFiles/KExiv2.dir/kexiv2image.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2comments.cpp
src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2comments.cpp

src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2comments.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2comments.cpp > CMakeFiles/KExiv2.dir/kexiv2comments.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2comments.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2comments.cpp -o CMakeFiles/KExiv2.dir/kexiv2comments.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2exif.cpp
src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2exif.cpp

src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2exif.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2exif.cpp > CMakeFiles/KExiv2.dir/kexiv2exif.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2exif.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2exif.cpp -o CMakeFiles/KExiv2.dir/kexiv2exif.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2iptc.cpp
src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2iptc.cpp

src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2iptc.cpp > CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2iptc.cpp -o CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2gps.cpp
src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2gps.cpp

src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2gps.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2gps.cpp > CMakeFiles/KExiv2.dir/kexiv2gps.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2gps.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2gps.cpp -o CMakeFiles/KExiv2.dir/kexiv2gps.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2xmp.cpp
src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2xmp.cpp

src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2xmp.cpp > CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2xmp.cpp -o CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.s

src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2previews.cpp
src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o -MF CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o.d -o CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2previews.cpp

src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/kexiv2previews.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2previews.cpp > CMakeFiles/KExiv2.dir/kexiv2previews.cpp.i

src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/kexiv2previews.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/kexiv2previews.cpp -o CMakeFiles/KExiv2.dir/kexiv2previews.cpp.s

src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o: /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/rotationmatrix.cpp
src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o -MF CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o.d -o CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o -c /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/rotationmatrix.cpp

src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/rotationmatrix.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/rotationmatrix.cpp > CMakeFiles/KExiv2.dir/rotationmatrix.cpp.i

src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/rotationmatrix.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src/rotationmatrix.cpp -o CMakeFiles/KExiv2.dir/rotationmatrix.cpp.s

src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o: src/CMakeFiles/KExiv2.dir/flags.make
src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o: src/libkexiv2_debug.cpp
src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o: src/CMakeFiles/KExiv2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o -MF CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o.d -o CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o -c /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src/libkexiv2_debug.cpp

src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.i"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src/libkexiv2_debug.cpp > CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.i

src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.s"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src/libkexiv2_debug.cpp -o CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.s

# Object files for target KExiv2
KExiv2_OBJECTS = \
"CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2data.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2image.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o" \
"CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o" \
"CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o" \
"CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o"

# External object files for target KExiv2
KExiv2_EXTERNAL_OBJECTS =

bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/KExiv2_autogen/mocs_compilation.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2_p.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2data.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2image.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2comments.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2exif.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2iptc.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2gps.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2xmp.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/kexiv2previews.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/rotationmatrix.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/libkexiv2_debug.cpp.o
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/build.make
bin/libKF5KExiv2.so.5.0.0: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libexiv2.so
bin/libKF5KExiv2.so.5.0.0: src/CMakeFiles/KExiv2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX shared library ../bin/libKF5KExiv2.so"
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KExiv2.dir/link.txt --verbose=$(VERBOSE)
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && $(CMAKE_COMMAND) -E cmake_symlink_library ../bin/libKF5KExiv2.so.5.0.0 ../bin/libKF5KExiv2.so.15.0.0 ../bin/libKF5KExiv2.so

bin/libKF5KExiv2.so.15.0.0: bin/libKF5KExiv2.so.5.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5KExiv2.so.15.0.0

bin/libKF5KExiv2.so: bin/libKF5KExiv2.so.5.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5KExiv2.so

# Rule to build all files generated by this target.
src/CMakeFiles/KExiv2.dir/build: bin/libKF5KExiv2.so
.PHONY : src/CMakeFiles/KExiv2.dir/build

src/CMakeFiles/KExiv2.dir/clean:
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src && $(CMAKE_COMMAND) -P CMakeFiles/KExiv2.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/KExiv2.dir/clean

src/CMakeFiles/KExiv2.dir/depend:
	cd /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2 /home/szybet/kdesrc/kde/kdegraphics/libs/libkexiv2/src /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2 /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src /home/szybet/kdesrc/build/kde/kdegraphics/libs/libkexiv2/src/CMakeFiles/KExiv2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/KExiv2.dir/depend

