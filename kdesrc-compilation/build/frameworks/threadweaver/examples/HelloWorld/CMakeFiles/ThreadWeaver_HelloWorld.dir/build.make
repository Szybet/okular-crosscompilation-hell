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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/threadweaver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/threadweaver

# Include any dependencies generated for this target.
include examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/progress.make

# Include the compile flags for this target's objects.
include examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/flags.make

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/flags.make
examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o: examples/HelloWorld/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp
examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/threadweaver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp > CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.i

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp -o CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.s

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/flags.make
examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o: /home/szybet/kdesrc/frameworks/threadweaver/examples/HelloWorld/HelloWorld.cpp
examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/threadweaver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o -MF CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o.d -o CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o -c /home/szybet/kdesrc/frameworks/threadweaver/examples/HelloWorld/HelloWorld.cpp

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/threadweaver/examples/HelloWorld/HelloWorld.cpp > CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.i

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/threadweaver/examples/HelloWorld/HelloWorld.cpp -o CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.s

# Object files for target ThreadWeaver_HelloWorld
ThreadWeaver_HelloWorld_OBJECTS = \
"CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o"

# External object files for target ThreadWeaver_HelloWorld
ThreadWeaver_HelloWorld_EXTERNAL_OBJECTS =

bin/ThreadWeaver_HelloWorld: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/ThreadWeaver_HelloWorld_autogen/mocs_compilation.cpp.o
bin/ThreadWeaver_HelloWorld: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/HelloWorld.cpp.o
bin/ThreadWeaver_HelloWorld: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/build.make
bin/ThreadWeaver_HelloWorld: examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/threadweaver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/ThreadWeaver_HelloWorld"
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ThreadWeaver_HelloWorld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/build: bin/ThreadWeaver_HelloWorld
.PHONY : examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/build

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld && $(CMAKE_COMMAND) -P CMakeFiles/ThreadWeaver_HelloWorld.dir/cmake_clean.cmake
.PHONY : examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/clean

examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/threadweaver && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/threadweaver /home/szybet/kdesrc/frameworks/threadweaver/examples/HelloWorld /home/szybet/kdesrc/build/frameworks/threadweaver /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld /home/szybet/kdesrc/build/frameworks/threadweaver/examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/HelloWorld/CMakeFiles/ThreadWeaver_HelloWorld.dir/depend

