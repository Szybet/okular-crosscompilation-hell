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
include src/plugins/barcode/CMakeFiles/barcodeplugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/plugins/barcode/CMakeFiles/barcodeplugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/plugins/barcode/CMakeFiles/barcodeplugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/barcode/CMakeFiles/barcodeplugin.dir/flags.make

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/flags.make
src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o: src/plugins/barcode/barcodeplugin_autogen/mocs_compilation.cpp
src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o -MF CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode/barcodeplugin_autogen/mocs_compilation.cpp

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode/barcodeplugin_autogen/mocs_compilation.cpp > CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.i

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode/barcodeplugin_autogen/mocs_compilation.cpp -o CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.s

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/flags.make
src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o: /home/szybet/kdesrc/frameworks/purpose/src/plugins/barcode/barcodeplugin.cpp
src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o -MF CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o.d -o CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o -c /home/szybet/kdesrc/frameworks/purpose/src/plugins/barcode/barcodeplugin.cpp

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/purpose/src/plugins/barcode/barcodeplugin.cpp > CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.i

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/purpose/src/plugins/barcode/barcodeplugin.cpp -o CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.s

# Object files for target barcodeplugin
barcodeplugin_OBJECTS = \
"CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o"

# External object files for target barcodeplugin
barcodeplugin_EXTERNAL_OBJECTS =

bin/kf5/purpose/barcodeplugin.so: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin_autogen/mocs_compilation.cpp.o
bin/kf5/purpose/barcodeplugin.so: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/barcodeplugin.cpp.o
bin/kf5/purpose/barcodeplugin.so: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/build.make
bin/kf5/purpose/barcodeplugin.so: src/plugins/barcode/CMakeFiles/barcodeplugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared module ../../../bin/kf5/purpose/barcodeplugin.so"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/barcodeplugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/plugins/barcode/CMakeFiles/barcodeplugin.dir/build: bin/kf5/purpose/barcodeplugin.so
.PHONY : src/plugins/barcode/CMakeFiles/barcodeplugin.dir/build

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode && $(CMAKE_COMMAND) -P CMakeFiles/barcodeplugin.dir/cmake_clean.cmake
.PHONY : src/plugins/barcode/CMakeFiles/barcodeplugin.dir/clean

src/plugins/barcode/CMakeFiles/barcodeplugin.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/purpose && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/purpose /home/szybet/kdesrc/frameworks/purpose/src/plugins/barcode /home/szybet/kdesrc/build/frameworks/purpose /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode /home/szybet/kdesrc/build/frameworks/purpose/src/plugins/barcode/CMakeFiles/barcodeplugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/plugins/barcode/CMakeFiles/barcodeplugin.dir/depend

