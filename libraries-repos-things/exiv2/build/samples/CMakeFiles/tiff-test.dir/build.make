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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/exiv2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/exiv2/build

# Include any dependencies generated for this target.
include samples/CMakeFiles/tiff-test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include samples/CMakeFiles/tiff-test.dir/compiler_depend.make

# Include the progress variables for this target.
include samples/CMakeFiles/tiff-test.dir/progress.make

# Include the compile flags for this target's objects.
include samples/CMakeFiles/tiff-test.dir/flags.make

samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.o: samples/CMakeFiles/tiff-test.dir/flags.make
samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.o: /mnt/HDD/Project/Public/okulartry/exiv2/samples/tiff-test.cpp
samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.o: samples/CMakeFiles/tiff-test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/exiv2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/samples && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.o -MF CMakeFiles/tiff-test.dir/tiff-test.cpp.o.d -o CMakeFiles/tiff-test.dir/tiff-test.cpp.o -c /mnt/HDD/Project/Public/okulartry/exiv2/samples/tiff-test.cpp

samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tiff-test.dir/tiff-test.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/samples && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/exiv2/samples/tiff-test.cpp > CMakeFiles/tiff-test.dir/tiff-test.cpp.i

samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tiff-test.dir/tiff-test.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/samples && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/exiv2/samples/tiff-test.cpp -o CMakeFiles/tiff-test.dir/tiff-test.cpp.s

# Object files for target tiff-test
tiff__test_OBJECTS = \
"CMakeFiles/tiff-test.dir/tiff-test.cpp.o"

# External object files for target tiff-test
tiff__test_EXTERNAL_OBJECTS =

bin/tiff-test: samples/CMakeFiles/tiff-test.dir/tiff-test.cpp.o
bin/tiff-test: samples/CMakeFiles/tiff-test.dir/build.make
bin/tiff-test: src/libexiv2.so.14.0.0
bin/tiff-test: xmpsdk/libxmp.a
bin/tiff-test: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libexpat.so
bin/tiff-test: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libz.so
bin/tiff-test: samples/CMakeFiles/tiff-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/exiv2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/tiff-test"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/samples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tiff-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/CMakeFiles/tiff-test.dir/build: bin/tiff-test
.PHONY : samples/CMakeFiles/tiff-test.dir/build

samples/CMakeFiles/tiff-test.dir/clean:
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/samples && $(CMAKE_COMMAND) -P CMakeFiles/tiff-test.dir/cmake_clean.cmake
.PHONY : samples/CMakeFiles/tiff-test.dir/clean

samples/CMakeFiles/tiff-test.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/exiv2 /mnt/HDD/Project/Public/okulartry/exiv2/samples /mnt/HDD/Project/Public/okulartry/exiv2/build /mnt/HDD/Project/Public/okulartry/exiv2/build/samples /mnt/HDD/Project/Public/okulartry/exiv2/build/samples/CMakeFiles/tiff-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/CMakeFiles/tiff-test.dir/depend

