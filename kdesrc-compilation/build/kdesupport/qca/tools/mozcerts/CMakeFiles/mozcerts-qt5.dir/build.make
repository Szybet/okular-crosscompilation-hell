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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kdesupport/qca

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/kdesupport/qca

# Include any dependencies generated for this target.
include tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/progress.make

# Include the compile flags for this target's objects.
include tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/flags.make

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/flags.make
tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o: tools/mozcerts/mozcerts-qt5_autogen/mocs_compilation.cpp
tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o -MF CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts/mozcerts-qt5_autogen/mocs_compilation.cpp

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts/mozcerts-qt5_autogen/mocs_compilation.cpp > CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.i

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts/mozcerts-qt5_autogen/mocs_compilation.cpp -o CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.s

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.o: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/flags.make
tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.o: /home/szybet/kdesrc/kdesupport/qca/tools/mozcerts/main.cpp
tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.o: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.o -MF CMakeFiles/mozcerts-qt5.dir/main.cpp.o.d -o CMakeFiles/mozcerts-qt5.dir/main.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/tools/mozcerts/main.cpp

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mozcerts-qt5.dir/main.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/tools/mozcerts/main.cpp > CMakeFiles/mozcerts-qt5.dir/main.cpp.i

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mozcerts-qt5.dir/main.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/tools/mozcerts/main.cpp -o CMakeFiles/mozcerts-qt5.dir/main.cpp.s

# Object files for target mozcerts-qt5
mozcerts__qt5_OBJECTS = \
"CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/mozcerts-qt5.dir/main.cpp.o"

# External object files for target mozcerts-qt5
mozcerts__qt5_EXTERNAL_OBJECTS =

bin/mozcerts-qt5: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/mozcerts-qt5_autogen/mocs_compilation.cpp.o
bin/mozcerts-qt5: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/main.cpp.o
bin/mozcerts-qt5: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/build.make
bin/mozcerts-qt5: lib/libqca-qt5.so.2.3.6
bin/mozcerts-qt5: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Core.so.5.15.2
bin/mozcerts-qt5: tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/mozcerts-qt5"
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mozcerts-qt5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/build: bin/mozcerts-qt5
.PHONY : tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/build

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts && $(CMAKE_COMMAND) -P CMakeFiles/mozcerts-qt5.dir/cmake_clean.cmake
.PHONY : tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/clean

tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/qca /home/szybet/kdesrc/kdesupport/qca/tools/mozcerts /home/szybet/kdesrc/build/kdesupport/qca /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts /home/szybet/kdesrc/build/kdesupport/qca/tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/mozcerts/CMakeFiles/mozcerts-qt5.dir/depend

