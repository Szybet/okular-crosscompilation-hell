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
include autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/flags.make

autotests/qrc_sharedconfigresources.cpp: /home/szybet/kdesrc/frameworks/kconfig/autotests/sharedconfigresources.qrc
autotests/qrc_sharedconfigresources.cpp: /home/szybet/kdesrc/frameworks/kconfig/autotests/test.ini
autotests/qrc_sharedconfigresources.cpp: autotests/sharedconfigresources.qrc.depends
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_sharedconfigresources.cpp"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/rcc --name sharedconfigresources --output /home/szybet/kdesrc/build/frameworks/kconfig/autotests/qrc_sharedconfigresources.cpp /home/szybet/kdesrc/frameworks/kconfig/autotests/sharedconfigresources.qrc

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/flags.make
autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o: autotests/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfig/autotests/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfig/autotests/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp > CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfig/autotests/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp -o CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/flags.make
autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/autotests/ksharedconfigtest.cpp
autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o -MF CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o.d -o CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/autotests/ksharedconfigtest.cpp

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/autotests/ksharedconfigtest.cpp > CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.i

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/autotests/ksharedconfigtest.cpp -o CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.s

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/flags.make
autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o: autotests/qrc_sharedconfigresources.cpp
autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o -MF CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o.d -o CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfig/autotests/qrc_sharedconfigresources.cpp

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfig/autotests/qrc_sharedconfigresources.cpp > CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.i

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfig/autotests/qrc_sharedconfigresources.cpp -o CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.s

# Object files for target kconfigcore-ksharedconfigtest
kconfigcore__ksharedconfigtest_OBJECTS = \
"CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o" \
"CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o"

# External object files for target kconfigcore-ksharedconfigtest
kconfigcore__ksharedconfigtest_EXTERNAL_OBJECTS =

bin/kconfigcore-ksharedconfigtest: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/kconfigcore-ksharedconfigtest_autogen/mocs_compilation.cpp.o
bin/kconfigcore-ksharedconfigtest: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/ksharedconfigtest.cpp.o
bin/kconfigcore-ksharedconfigtest: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/qrc_sharedconfigresources.cpp.o
bin/kconfigcore-ksharedconfigtest: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/build.make
bin/kconfigcore-ksharedconfigtest: autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../bin/kconfigcore-ksharedconfigtest"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kconfigcore-ksharedconfigtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/build: bin/kconfigcore-ksharedconfigtest
.PHONY : autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/build

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kconfigcore-ksharedconfigtest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/clean

autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/depend: autotests/qrc_sharedconfigresources.cpp
	cd /home/szybet/kdesrc/build/frameworks/kconfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfig /home/szybet/kdesrc/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig /home/szybet/kdesrc/build/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig/autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kconfigcore-ksharedconfigtest.dir/depend

