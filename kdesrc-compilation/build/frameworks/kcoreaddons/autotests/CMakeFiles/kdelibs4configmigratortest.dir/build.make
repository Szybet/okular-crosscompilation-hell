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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kcoreaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kcoreaddons

# Include any dependencies generated for this target.
include autotests/CMakeFiles/kdelibs4configmigratortest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kdelibs4configmigratortest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kdelibs4configmigratortest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kdelibs4configmigratortest.dir/flags.make

autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kdelibs4configmigratortest.dir/flags.make
autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o: autotests/kdelibs4configmigratortest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kdelibs4configmigratortest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kdelibs4configmigratortest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kdelibs4configmigratortest_autogen/mocs_compilation.cpp > CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kdelibs4configmigratortest_autogen/mocs_compilation.cpp -o CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o: autotests/CMakeFiles/kdelibs4configmigratortest.dir/flags.make
autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o: /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kdelibs4configmigratortest.cpp
autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o: autotests/CMakeFiles/kdelibs4configmigratortest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o -MF CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o.d -o CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o -c /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kdelibs4configmigratortest.cpp

autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kdelibs4configmigratortest.cpp > CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.i

autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kdelibs4configmigratortest.cpp -o CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.s

# Object files for target kdelibs4configmigratortest
kdelibs4configmigratortest_OBJECTS = \
"CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o"

# External object files for target kdelibs4configmigratortest
kdelibs4configmigratortest_EXTERNAL_OBJECTS =

bin/kdelibs4configmigratortest: autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest_autogen/mocs_compilation.cpp.o
bin/kdelibs4configmigratortest: autotests/CMakeFiles/kdelibs4configmigratortest.dir/kdelibs4configmigratortest.cpp.o
bin/kdelibs4configmigratortest: autotests/CMakeFiles/kdelibs4configmigratortest.dir/build.make
bin/kdelibs4configmigratortest: lib/libautotests_static.a
bin/kdelibs4configmigratortest: autotests/CMakeFiles/kdelibs4configmigratortest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kdelibs4configmigratortest"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kdelibs4configmigratortest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kdelibs4configmigratortest.dir/build: bin/kdelibs4configmigratortest
.PHONY : autotests/CMakeFiles/kdelibs4configmigratortest.dir/build

autotests/CMakeFiles/kdelibs4configmigratortest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kdelibs4configmigratortest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kdelibs4configmigratortest.dir/clean

autotests/CMakeFiles/kdelibs4configmigratortest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kcoreaddons /home/szybet/kdesrc/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/CMakeFiles/kdelibs4configmigratortest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kdelibs4configmigratortest.dir/depend

