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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kio

# Include any dependencies generated for this target.
include src/kntlm/CMakeFiles/KF5KIONTLM.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kntlm/CMakeFiles/KF5KIONTLM.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kntlm/CMakeFiles/KF5KIONTLM.dir/progress.make

# Include the compile flags for this target's objects.
include src/kntlm/CMakeFiles/KF5KIONTLM.dir/flags.make

src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o: src/kntlm/CMakeFiles/KF5KIONTLM.dir/flags.make
src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o: src/kntlm/KF5KIONTLM_autogen/mocs_compilation.cpp
src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o: src/kntlm/CMakeFiles/KF5KIONTLM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o -MF CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/kntlm/KF5KIONTLM_autogen/mocs_compilation.cpp

src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/kntlm/KF5KIONTLM_autogen/mocs_compilation.cpp > CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.i

src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/kntlm/KF5KIONTLM_autogen/mocs_compilation.cpp -o CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.s

src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o: src/kntlm/CMakeFiles/KF5KIONTLM.dir/flags.make
src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kntlm/kntlm.cpp
src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o: src/kntlm/CMakeFiles/KF5KIONTLM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o -MF CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o.d -o CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kntlm/kntlm.cpp

src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kntlm/kntlm.cpp > CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.i

src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kntlm/kntlm.cpp -o CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.s

src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.o: src/kntlm/CMakeFiles/KF5KIONTLM.dir/flags.make
src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kntlm/des.cpp
src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.o: src/kntlm/CMakeFiles/KF5KIONTLM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.o -MF CMakeFiles/KF5KIONTLM.dir/des.cpp.o.d -o CMakeFiles/KF5KIONTLM.dir/des.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kntlm/des.cpp

src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5KIONTLM.dir/des.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kntlm/des.cpp > CMakeFiles/KF5KIONTLM.dir/des.cpp.i

src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5KIONTLM.dir/des.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kntlm/des.cpp -o CMakeFiles/KF5KIONTLM.dir/des.cpp.s

# Object files for target KF5KIONTLM
KF5KIONTLM_OBJECTS = \
"CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o" \
"CMakeFiles/KF5KIONTLM.dir/des.cpp.o"

# External object files for target KF5KIONTLM
KF5KIONTLM_EXTERNAL_OBJECTS =

bin/libKF5KIONTLM.so.5.107.0: src/kntlm/CMakeFiles/KF5KIONTLM.dir/KF5KIONTLM_autogen/mocs_compilation.cpp.o
bin/libKF5KIONTLM.so.5.107.0: src/kntlm/CMakeFiles/KF5KIONTLM.dir/kntlm.cpp.o
bin/libKF5KIONTLM.so.5.107.0: src/kntlm/CMakeFiles/KF5KIONTLM.dir/des.cpp.o
bin/libKF5KIONTLM.so.5.107.0: src/kntlm/CMakeFiles/KF5KIONTLM.dir/build.make
bin/libKF5KIONTLM.so.5.107.0: src/kntlm/CMakeFiles/KF5KIONTLM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library ../../bin/libKF5KIONTLM.so"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KF5KIONTLM.dir/link.txt --verbose=$(VERBOSE)
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && $(CMAKE_COMMAND) -E cmake_symlink_library ../../bin/libKF5KIONTLM.so.5.107.0 ../../bin/libKF5KIONTLM.so.5 ../../bin/libKF5KIONTLM.so

bin/libKF5KIONTLM.so.5: bin/libKF5KIONTLM.so.5.107.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5KIONTLM.so.5

bin/libKF5KIONTLM.so: bin/libKF5KIONTLM.so.5.107.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5KIONTLM.so

# Rule to build all files generated by this target.
src/kntlm/CMakeFiles/KF5KIONTLM.dir/build: bin/libKF5KIONTLM.so
.PHONY : src/kntlm/CMakeFiles/KF5KIONTLM.dir/build

src/kntlm/CMakeFiles/KF5KIONTLM.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kntlm && $(CMAKE_COMMAND) -P CMakeFiles/KF5KIONTLM.dir/cmake_clean.cmake
.PHONY : src/kntlm/CMakeFiles/KF5KIONTLM.dir/clean

src/kntlm/CMakeFiles/KF5KIONTLM.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/kntlm /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/kntlm /home/szybet/kdesrc/build/frameworks/kio/src/kntlm/CMakeFiles/KF5KIONTLM.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kntlm/CMakeFiles/KF5KIONTLM.dir/depend

