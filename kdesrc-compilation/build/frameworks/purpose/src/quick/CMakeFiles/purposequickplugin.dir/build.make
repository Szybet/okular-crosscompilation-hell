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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/purpose

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/purpose

# Include any dependencies generated for this target.
include src/quick/CMakeFiles/purposequickplugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/quick/CMakeFiles/purposequickplugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/quick/CMakeFiles/purposequickplugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/quick/CMakeFiles/purposequickplugin.dir/flags.make

src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o: src/quick/CMakeFiles/purposequickplugin.dir/flags.make
src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o: src/quick/purposequickplugin_autogen/mocs_compilation.cpp
src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o: src/quick/CMakeFiles/purposequickplugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o -MF CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/purpose/src/quick/purposequickplugin_autogen/mocs_compilation.cpp

src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/purpose/src/quick/purposequickplugin_autogen/mocs_compilation.cpp > CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.i

src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/purpose/src/quick/purposequickplugin_autogen/mocs_compilation.cpp -o CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.s

src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o: src/quick/CMakeFiles/purposequickplugin.dir/flags.make
src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o: /home/szybet/kdesrc/frameworks/purpose/src/quick/purposequickplugin.cpp
src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o: src/quick/CMakeFiles/purposequickplugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o -MF CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o.d -o CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o -c /home/szybet/kdesrc/frameworks/purpose/src/quick/purposequickplugin.cpp

src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/purpose/src/quick/purposequickplugin.cpp > CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.i

src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/purpose/src/quick/purposequickplugin.cpp -o CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.s

# Object files for target purposequickplugin
purposequickplugin_OBJECTS = \
"CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o"

# External object files for target purposequickplugin
purposequickplugin_EXTERNAL_OBJECTS =

bin/libpurposequickplugin.so: src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin_autogen/mocs_compilation.cpp.o
bin/libpurposequickplugin.so: src/quick/CMakeFiles/purposequickplugin.dir/purposequickplugin.cpp.o
bin/libpurposequickplugin.so: src/quick/CMakeFiles/purposequickplugin.dir/build.make
bin/libpurposequickplugin.so: src/quick/CMakeFiles/purposequickplugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../bin/libpurposequickplugin.so"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/purposequickplugin.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E make_directory /home/szybet/kdesrc/build/frameworks/purpose/bin/org/kde/purpose
	cd /home/szybet/kdesrc/build/frameworks/purpose/bin && /usr/bin/cmake -E copy /home/szybet/kdesrc/build/frameworks/purpose/src/quick/purposequickplugin_qmldir org/kde/purpose/qmldir
	cd /home/szybet/kdesrc/build/frameworks/purpose/bin && /usr/bin/cmake -E copy /home/szybet/kdesrc/build/frameworks/purpose/bin/libpurposequickplugin.so org/kde/purpose
	cd /home/szybet/kdesrc/build/frameworks/purpose/bin && /usr/bin/cmake -E make_directory org/kde/purpose/
	cd /home/szybet/kdesrc/build/frameworks/purpose/bin && /usr/bin/cmake -E copy /home/szybet/kdesrc/frameworks/purpose/src/quick/AlternativesView.qml org/kde/purpose/
	cd /home/szybet/kdesrc/build/frameworks/purpose/bin && /usr/bin/cmake -E make_directory org/kde/purpose/
	cd /home/szybet/kdesrc/build/frameworks/purpose/bin && /usr/bin/cmake -E copy /home/szybet/kdesrc/frameworks/purpose/src/quick/JobView.qml org/kde/purpose/

# Rule to build all files generated by this target.
src/quick/CMakeFiles/purposequickplugin.dir/build: bin/libpurposequickplugin.so
.PHONY : src/quick/CMakeFiles/purposequickplugin.dir/build

src/quick/CMakeFiles/purposequickplugin.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/quick && $(CMAKE_COMMAND) -P CMakeFiles/purposequickplugin.dir/cmake_clean.cmake
.PHONY : src/quick/CMakeFiles/purposequickplugin.dir/clean

src/quick/CMakeFiles/purposequickplugin.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/purpose && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/purpose /home/szybet/kdesrc/frameworks/purpose/src/quick /home/szybet/kdesrc/build/frameworks/purpose /home/szybet/kdesrc/build/frameworks/purpose/src/quick /home/szybet/kdesrc/build/frameworks/purpose/src/quick/CMakeFiles/purposequickplugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/quick/CMakeFiles/purposequickplugin.dir/depend

