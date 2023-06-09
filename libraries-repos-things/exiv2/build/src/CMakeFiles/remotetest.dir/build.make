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
include src/CMakeFiles/remotetest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/remotetest.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/remotetest.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/remotetest.dir/flags.make

src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o: src/CMakeFiles/remotetest.dir/flags.make
src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o: /mnt/HDD/Project/Public/okulartry/exiv2/samples/remotetest.cpp
src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o: src/CMakeFiles/remotetest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/exiv2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o -MF CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o.d -o CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o -c /mnt/HDD/Project/Public/okulartry/exiv2/samples/remotetest.cpp

src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/exiv2/samples/remotetest.cpp > CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.i

src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/exiv2/samples/remotetest.cpp -o CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.s

# Object files for target remotetest
remotetest_OBJECTS = \
"CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o"

# External object files for target remotetest
remotetest_EXTERNAL_OBJECTS =

bin/remotetest: src/CMakeFiles/remotetest.dir/__/samples/remotetest.cpp.o
bin/remotetest: src/CMakeFiles/remotetest.dir/build.make
bin/remotetest: src/libexiv2.so.14.0.0
bin/remotetest: xmpsdk/libxmp.a
bin/remotetest: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libexpat.so
bin/remotetest: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libz.so
bin/remotetest: src/CMakeFiles/remotetest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/exiv2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/remotetest"
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/remotetest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/remotetest.dir/build: bin/remotetest
.PHONY : src/CMakeFiles/remotetest.dir/build

src/CMakeFiles/remotetest.dir/clean:
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build/src && $(CMAKE_COMMAND) -P CMakeFiles/remotetest.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/remotetest.dir/clean

src/CMakeFiles/remotetest.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/exiv2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/exiv2 /mnt/HDD/Project/Public/okulartry/exiv2/src /mnt/HDD/Project/Public/okulartry/exiv2/build /mnt/HDD/Project/Public/okulartry/exiv2/build/src /mnt/HDD/Project/Public/okulartry/exiv2/build/src/CMakeFiles/remotetest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/remotetest.dir/depend

