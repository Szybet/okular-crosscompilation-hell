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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/ki18n

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/ki18n

# Include any dependencies generated for this target.
include autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/flags.make

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/flags.make
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o: autotests/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/ki18n/autotests/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/ki18n/autotests/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp > CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/ki18n/autotests/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp -o CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/flags.make
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o: /home/szybet/kdesrc/frameworks/ki18n/autotests/ktranscriptcleantest.cpp
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o -MF CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o.d -o CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o -c /home/szybet/kdesrc/frameworks/ki18n/autotests/ktranscriptcleantest.cpp

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/ki18n/autotests/ktranscriptcleantest.cpp > CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.i

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/ki18n/autotests/ktranscriptcleantest.cpp -o CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.s

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/flags.make
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o: /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o -MF CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o.d -o CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o -c /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp > CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.i

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp -o CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.s

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/flags.make
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o: /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o -MF CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o.d -o CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o -c /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp > CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.i

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp -o CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.s

# Object files for target ki18n-ktranscriptcleantest
ki18n__ktranscriptcleantest_OBJECTS = \
"CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o" \
"CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o" \
"CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o"

# External object files for target ki18n-ktranscriptcleantest
ki18n__ktranscriptcleantest_EXTERNAL_OBJECTS =

bin/ki18n-ktranscriptcleantest: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ki18n-ktranscriptcleantest_autogen/mocs_compilation.cpp.o
bin/ki18n-ktranscriptcleantest: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/ktranscriptcleantest.cpp.o
bin/ki18n-ktranscriptcleantest: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/ktranscript.cpp.o
bin/ki18n-ktranscriptcleantest: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/__/src/i18n/common_helpers.cpp.o
bin/ki18n-ktranscriptcleantest: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/build.make
bin/ki18n-ktranscriptcleantest: autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../bin/ki18n-ktranscriptcleantest"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ki18n-ktranscriptcleantest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/build: bin/ki18n-ktranscriptcleantest
.PHONY : autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/build

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/ki18n/autotests && $(CMAKE_COMMAND) -P CMakeFiles/ki18n-ktranscriptcleantest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/clean

autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/ki18n && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/ki18n /home/szybet/kdesrc/frameworks/ki18n/autotests /home/szybet/kdesrc/build/frameworks/ki18n /home/szybet/kdesrc/build/frameworks/ki18n/autotests /home/szybet/kdesrc/build/frameworks/ki18n/autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/ki18n-ktranscriptcleantest.dir/depend

