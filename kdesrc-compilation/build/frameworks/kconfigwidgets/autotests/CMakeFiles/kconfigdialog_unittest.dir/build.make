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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kconfigwidgets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kconfigwidgets

# Include any dependencies generated for this target.
include autotests/CMakeFiles/kconfigdialog_unittest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kconfigdialog_unittest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kconfigdialog_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kconfigdialog_unittest.dir/flags.make

autotests/signaltest.moc: autotests/signaltest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating signaltest.moc"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/moc @/home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/signaltest.moc_parameters

autotests/signaltest.h: /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/signaltest.kcfgc
autotests/signaltest.h: /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/signaltest.kcfg
autotests/signaltest.h: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libexec/kf5/kconfig_compiler_kf5
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating signaltest.h, signaltest.cpp"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libexec/kf5/kconfig_compiler_kf5 /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/signaltest.kcfg /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/signaltest.kcfgc -d /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/

autotests/signaltest.cpp: autotests/signaltest.h
	@$(CMAKE_COMMAND) -E touch_nocreate autotests/signaltest.cpp

autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kconfigdialog_unittest.dir/flags.make
autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o: autotests/kconfigdialog_unittest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kconfigdialog_unittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/kconfigdialog_unittest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/kconfigdialog_unittest_autogen/mocs_compilation.cpp > CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/kconfigdialog_unittest_autogen/mocs_compilation.cpp -o CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o: autotests/CMakeFiles/kconfigdialog_unittest.dir/flags.make
autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o: /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/kconfigdialog_unittest.cpp
autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o: autotests/CMakeFiles/kconfigdialog_unittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o -MF CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o.d -o CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o -c /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/kconfigdialog_unittest.cpp

autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/kconfigdialog_unittest.cpp > CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.i

autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/kconfigdialog_unittest.cpp -o CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.s

autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o: autotests/CMakeFiles/kconfigdialog_unittest.dir/flags.make
autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o: autotests/signaltest.cpp
autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o: autotests/signaltest.moc
autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o: autotests/CMakeFiles/kconfigdialog_unittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o -MF CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o.d -o CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/signaltest.cpp

autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/signaltest.cpp > CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.i

autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/signaltest.cpp -o CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.s

# Object files for target kconfigdialog_unittest
kconfigdialog_unittest_OBJECTS = \
"CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o" \
"CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o"

# External object files for target kconfigdialog_unittest
kconfigdialog_unittest_EXTERNAL_OBJECTS =

bin/kconfigdialog_unittest: autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest_autogen/mocs_compilation.cpp.o
bin/kconfigdialog_unittest: autotests/CMakeFiles/kconfigdialog_unittest.dir/kconfigdialog_unittest.cpp.o
bin/kconfigdialog_unittest: autotests/CMakeFiles/kconfigdialog_unittest.dir/signaltest.cpp.o
bin/kconfigdialog_unittest: autotests/CMakeFiles/kconfigdialog_unittest.dir/build.make
bin/kconfigdialog_unittest: autotests/CMakeFiles/kconfigdialog_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../bin/kconfigdialog_unittest"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kconfigdialog_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kconfigdialog_unittest.dir/build: bin/kconfigdialog_unittest
.PHONY : autotests/CMakeFiles/kconfigdialog_unittest.dir/build

autotests/CMakeFiles/kconfigdialog_unittest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kconfigdialog_unittest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kconfigdialog_unittest.dir/clean

autotests/CMakeFiles/kconfigdialog_unittest.dir/depend: autotests/signaltest.cpp
autotests/CMakeFiles/kconfigdialog_unittest.dir/depend: autotests/signaltest.h
autotests/CMakeFiles/kconfigdialog_unittest.dir/depend: autotests/signaltest.moc
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfigwidgets /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests /home/szybet/kdesrc/build/frameworks/kconfigwidgets /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/CMakeFiles/kconfigdialog_unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kconfigdialog_unittest.dir/depend

