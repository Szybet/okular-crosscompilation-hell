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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kinit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kinit

# Include any dependencies generated for this target.
include src/kdeinit/CMakeFiles/kdeinit5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kdeinit/CMakeFiles/kdeinit5.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kdeinit/CMakeFiles/kdeinit5.dir/progress.make

# Include the compile flags for this target's objects.
include src/kdeinit/CMakeFiles/kdeinit5.dir/flags.make

src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/flags.make
src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o: src/kdeinit/kdeinit5_autogen/mocs_compilation.cpp
src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit/kdeinit5_autogen/mocs_compilation.cpp

src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit/kdeinit5_autogen/mocs_compilation.cpp > CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.i

src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit/kdeinit5_autogen/mocs_compilation.cpp -o CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.s

src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/flags.make
src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.o: /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/kinit.cpp
src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.o -MF CMakeFiles/kdeinit5.dir/kinit.cpp.o.d -o CMakeFiles/kdeinit5.dir/kinit.cpp.o -c /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/kinit.cpp

src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit5.dir/kinit.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/kinit.cpp > CMakeFiles/kdeinit5.dir/kinit.cpp.i

src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit5.dir/kinit.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/kinit.cpp -o CMakeFiles/kdeinit5.dir/kinit.cpp.s

src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/flags.make
src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.o: /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/proctitle.cpp
src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.o -MF CMakeFiles/kdeinit5.dir/proctitle.cpp.o.d -o CMakeFiles/kdeinit5.dir/proctitle.cpp.o -c /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/proctitle.cpp

src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit5.dir/proctitle.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/proctitle.cpp > CMakeFiles/kdeinit5.dir/proctitle.cpp.i

src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit5.dir/proctitle.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kinit/src/kdeinit/proctitle.cpp -o CMakeFiles/kdeinit5.dir/proctitle.cpp.s

src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/flags.make
src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o: /home/szybet/kdesrc/frameworks/kinit/src/klauncher_cmds.cpp
src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o: src/kdeinit/CMakeFiles/kdeinit5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o -MF CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o.d -o CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o -c /home/szybet/kdesrc/frameworks/kinit/src/klauncher_cmds.cpp

src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kinit/src/klauncher_cmds.cpp > CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.i

src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kinit/src/klauncher_cmds.cpp -o CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.s

# Object files for target kdeinit5
kdeinit5_OBJECTS = \
"CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kdeinit5.dir/kinit.cpp.o" \
"CMakeFiles/kdeinit5.dir/proctitle.cpp.o" \
"CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o"

# External object files for target kdeinit5
kdeinit5_EXTERNAL_OBJECTS =

bin/kdeinit5: src/kdeinit/CMakeFiles/kdeinit5.dir/kdeinit5_autogen/mocs_compilation.cpp.o
bin/kdeinit5: src/kdeinit/CMakeFiles/kdeinit5.dir/kinit.cpp.o
bin/kdeinit5: src/kdeinit/CMakeFiles/kdeinit5.dir/proctitle.cpp.o
bin/kdeinit5: src/kdeinit/CMakeFiles/kdeinit5.dir/__/klauncher_cmds.cpp.o
bin/kdeinit5: src/kdeinit/CMakeFiles/kdeinit5.dir/build.make
bin/kdeinit5: src/kdeinit/CMakeFiles/kdeinit5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kinit/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../bin/kdeinit5"
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kdeinit5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kdeinit/CMakeFiles/kdeinit5.dir/build: bin/kdeinit5
.PHONY : src/kdeinit/CMakeFiles/kdeinit5.dir/build

src/kdeinit/CMakeFiles/kdeinit5.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit && $(CMAKE_COMMAND) -P CMakeFiles/kdeinit5.dir/cmake_clean.cmake
.PHONY : src/kdeinit/CMakeFiles/kdeinit5.dir/clean

src/kdeinit/CMakeFiles/kdeinit5.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kinit && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kinit /home/szybet/kdesrc/frameworks/kinit/src/kdeinit /home/szybet/kdesrc/build/frameworks/kinit /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit /home/szybet/kdesrc/build/frameworks/kinit/src/kdeinit/CMakeFiles/kdeinit5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kdeinit/CMakeFiles/kdeinit5.dir/depend

