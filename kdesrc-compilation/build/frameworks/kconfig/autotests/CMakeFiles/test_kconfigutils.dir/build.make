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
include autotests/CMakeFiles/test_kconfigutils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/test_kconfigutils.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/test_kconfigutils.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/test_kconfigutils.dir/flags.make

autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/test_kconfigutils.dir/flags.make
autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o: autotests/test_kconfigutils_autogen/mocs_compilation.cpp
autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/test_kconfigutils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o -MF CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfig/autotests/test_kconfigutils_autogen/mocs_compilation.cpp

autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfig/autotests/test_kconfigutils_autogen/mocs_compilation.cpp > CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfig/autotests/test_kconfigutils_autogen/mocs_compilation.cpp -o CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o: autotests/CMakeFiles/test_kconfigutils.dir/flags.make
autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconfigutils.cpp
autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o: autotests/CMakeFiles/test_kconfigutils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o -MF CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o.d -o CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconfigutils.cpp

autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconfigutils.cpp > CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.i

autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconfigutils.cpp -o CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.s

autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o: autotests/CMakeFiles/test_kconfigutils.dir/flags.make
autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kconf_update/kconfigutils.cpp
autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o: autotests/CMakeFiles/test_kconfigutils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o -MF CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o.d -o CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kconf_update/kconfigutils.cpp

autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kconf_update/kconfigutils.cpp > CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.i

autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kconf_update/kconfigutils.cpp -o CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.s

# Object files for target test_kconfigutils
test_kconfigutils_OBJECTS = \
"CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o" \
"CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o"

# External object files for target test_kconfigutils
test_kconfigutils_EXTERNAL_OBJECTS =

bin/test_kconfigutils: autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils_autogen/mocs_compilation.cpp.o
bin/test_kconfigutils: autotests/CMakeFiles/test_kconfigutils.dir/test_kconfigutils.cpp.o
bin/test_kconfigutils: autotests/CMakeFiles/test_kconfigutils.dir/__/src/kconf_update/kconfigutils.cpp.o
bin/test_kconfigutils: autotests/CMakeFiles/test_kconfigutils.dir/build.make
bin/test_kconfigutils: autotests/CMakeFiles/test_kconfigutils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/test_kconfigutils"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_kconfigutils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/test_kconfigutils.dir/build: bin/test_kconfigutils
.PHONY : autotests/CMakeFiles/test_kconfigutils.dir/build

autotests/CMakeFiles/test_kconfigutils.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -P CMakeFiles/test_kconfigutils.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/test_kconfigutils.dir/clean

autotests/CMakeFiles/test_kconfigutils.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kconfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfig /home/szybet/kdesrc/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig /home/szybet/kdesrc/build/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig/autotests/CMakeFiles/test_kconfigutils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/test_kconfigutils.dir/depend

