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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kconfig

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kconfig

# Include any dependencies generated for this target.
include src/kreadconfig/CMakeFiles/kreadconfig5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kreadconfig/CMakeFiles/kreadconfig5.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kreadconfig/CMakeFiles/kreadconfig5.dir/progress.make

# Include the compile flags for this target's objects.
include src/kreadconfig/CMakeFiles/kreadconfig5.dir/flags.make

src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o: src/kreadconfig/CMakeFiles/kreadconfig5.dir/flags.make
src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o: src/kreadconfig/kreadconfig5_autogen/mocs_compilation.cpp
src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o: src/kreadconfig/CMakeFiles/kreadconfig5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig/kreadconfig5_autogen/mocs_compilation.cpp

src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig/kreadconfig5_autogen/mocs_compilation.cpp > CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.i

src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig/kreadconfig5_autogen/mocs_compilation.cpp -o CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.s

src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o: src/kreadconfig/CMakeFiles/kreadconfig5.dir/flags.make
src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kreadconfig/kreadconfig.cpp
src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o: src/kreadconfig/CMakeFiles/kreadconfig5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o -MF CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o.d -o CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kreadconfig/kreadconfig.cpp

src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kreadconfig/kreadconfig.cpp > CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.i

src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kreadconfig/kreadconfig.cpp -o CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.s

# Object files for target kreadconfig5
kreadconfig5_OBJECTS = \
"CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o"

# External object files for target kreadconfig5
kreadconfig5_EXTERNAL_OBJECTS =

bin/kreadconfig5: src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig5_autogen/mocs_compilation.cpp.o
bin/kreadconfig5: src/kreadconfig/CMakeFiles/kreadconfig5.dir/kreadconfig.cpp.o
bin/kreadconfig5: src/kreadconfig/CMakeFiles/kreadconfig5.dir/build.make
bin/kreadconfig5: src/kreadconfig/CMakeFiles/kreadconfig5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/kreadconfig5"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kreadconfig5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kreadconfig/CMakeFiles/kreadconfig5.dir/build: bin/kreadconfig5
.PHONY : src/kreadconfig/CMakeFiles/kreadconfig5.dir/build

src/kreadconfig/CMakeFiles/kreadconfig5.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig && $(CMAKE_COMMAND) -P CMakeFiles/kreadconfig5.dir/cmake_clean.cmake
.PHONY : src/kreadconfig/CMakeFiles/kreadconfig5.dir/clean

src/kreadconfig/CMakeFiles/kreadconfig5.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kconfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfig /home/szybet/kdesrc/frameworks/kconfig/src/kreadconfig /home/szybet/kdesrc/build/frameworks/kconfig /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig /home/szybet/kdesrc/build/frameworks/kconfig/src/kreadconfig/CMakeFiles/kreadconfig5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kreadconfig/CMakeFiles/kreadconfig5.dir/depend

