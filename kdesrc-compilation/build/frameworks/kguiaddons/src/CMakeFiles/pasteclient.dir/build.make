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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kguiaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kguiaddons

# Include any dependencies generated for this target.
include src/CMakeFiles/pasteclient.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/pasteclient.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/pasteclient.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/pasteclient.dir/flags.make

src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o: src/CMakeFiles/pasteclient.dir/flags.make
src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o: src/pasteclient_autogen/mocs_compilation.cpp
src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o: src/CMakeFiles/pasteclient.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o -MF CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kguiaddons/src/pasteclient_autogen/mocs_compilation.cpp

src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kguiaddons/src/pasteclient_autogen/mocs_compilation.cpp > CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.i

src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kguiaddons/src/pasteclient_autogen/mocs_compilation.cpp -o CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.s

src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o: src/CMakeFiles/pasteclient.dir/flags.make
src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o: /home/szybet/kdesrc/frameworks/kguiaddons/src/systemclipboard/tests/paste.cpp
src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o: src/CMakeFiles/pasteclient.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o -MF CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o.d -o CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o -c /home/szybet/kdesrc/frameworks/kguiaddons/src/systemclipboard/tests/paste.cpp

src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kguiaddons/src/systemclipboard/tests/paste.cpp > CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.i

src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kguiaddons/src/systemclipboard/tests/paste.cpp -o CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.s

# Object files for target pasteclient
pasteclient_OBJECTS = \
"CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o"

# External object files for target pasteclient
pasteclient_EXTERNAL_OBJECTS =

bin/pasteclient: src/CMakeFiles/pasteclient.dir/pasteclient_autogen/mocs_compilation.cpp.o
bin/pasteclient: src/CMakeFiles/pasteclient.dir/systemclipboard/tests/paste.cpp.o
bin/pasteclient: src/CMakeFiles/pasteclient.dir/build.make
bin/pasteclient: src/CMakeFiles/pasteclient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/pasteclient"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pasteclient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/pasteclient.dir/build: bin/pasteclient
.PHONY : src/CMakeFiles/pasteclient.dir/build

src/CMakeFiles/pasteclient.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src && $(CMAKE_COMMAND) -P CMakeFiles/pasteclient.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/pasteclient.dir/clean

src/CMakeFiles/pasteclient.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kguiaddons /home/szybet/kdesrc/frameworks/kguiaddons/src /home/szybet/kdesrc/build/frameworks/kguiaddons /home/szybet/kdesrc/build/frameworks/kguiaddons/src /home/szybet/kdesrc/build/frameworks/kguiaddons/src/CMakeFiles/pasteclient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/pasteclient.dir/depend

