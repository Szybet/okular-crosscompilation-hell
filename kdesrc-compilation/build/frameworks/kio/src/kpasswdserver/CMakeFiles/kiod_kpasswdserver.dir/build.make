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
include src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/progress.make

# Include the compile flags for this target's objects.
include src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/flags.make

src/kpasswdserver/kpasswdserveradaptor.moc: src/kpasswdserver/kpasswdserveradaptor.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating kpasswdserveradaptor.moc"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/moc @/home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/kpasswdserveradaptor.moc_parameters

src/kpasswdserver/kpasswdserveradaptor.cpp: /home/szybet/kdesrc/frameworks/kio/src/core/org.kde.KPasswdServer.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating kpasswdserveradaptor.cpp, kpasswdserveradaptor.h"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/qdbusxml2cpp -m -a kpasswdserveradaptor -i kpasswdserver.h -l KPasswdServer /home/szybet/kdesrc/frameworks/kio/src/core/org.kde.KPasswdServer.xml

src/kpasswdserver/kpasswdserveradaptor.h: src/kpasswdserver/kpasswdserveradaptor.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate src/kpasswdserver/kpasswdserveradaptor.h

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/flags.make
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o: src/kpasswdserver/kiod_kpasswdserver_autogen/mocs_compilation.cpp
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/kiod_kpasswdserver_autogen/mocs_compilation.cpp

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/kiod_kpasswdserver_autogen/mocs_compilation.cpp > CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.i

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/kiod_kpasswdserver_autogen/mocs_compilation.cpp -o CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.s

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/flags.make
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o: src/kpasswdserver/kpasswdserveradaptor.cpp
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o: src/kpasswdserver/kpasswdserveradaptor.moc
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o -MF CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o.d -o CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/kpasswdserveradaptor.cpp

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/kpasswdserveradaptor.cpp > CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.i

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/kpasswdserveradaptor.cpp -o CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.s

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/flags.make
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kpasswdserver.cpp
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o -MF CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o.d -o CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kpasswdserver.cpp

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kpasswdserver.cpp > CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.i

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kpasswdserver.cpp -o CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.s

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/flags.make
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kiod_kpasswdserver.cpp
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o -MF CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o.d -o CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kiod_kpasswdserver.cpp

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kiod_kpasswdserver.cpp > CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.i

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver/kiod_kpasswdserver.cpp -o CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.s

# Object files for target kiod_kpasswdserver
kiod_kpasswdserver_OBJECTS = \
"CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o" \
"CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o" \
"CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o"

# External object files for target kiod_kpasswdserver
kiod_kpasswdserver_EXTERNAL_OBJECTS =

bin/kf5/kiod/kpasswdserver.so: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver_autogen/mocs_compilation.cpp.o
bin/kf5/kiod/kpasswdserver.so: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserveradaptor.cpp.o
bin/kf5/kiod/kpasswdserver.so: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kpasswdserver.cpp.o
bin/kf5/kiod/kpasswdserver.so: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/kiod_kpasswdserver.cpp.o
bin/kf5/kiod/kpasswdserver.so: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/build.make
bin/kf5/kiod/kpasswdserver.so: src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared module ../../bin/kf5/kiod/kpasswdserver.so"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kiod_kpasswdserver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/build: bin/kf5/kiod/kpasswdserver.so
.PHONY : src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/build

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver && $(CMAKE_COMMAND) -P CMakeFiles/kiod_kpasswdserver.dir/cmake_clean.cmake
.PHONY : src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/clean

src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/depend: src/kpasswdserver/kpasswdserveradaptor.cpp
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/depend: src/kpasswdserver/kpasswdserveradaptor.h
src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/depend: src/kpasswdserver/kpasswdserveradaptor.moc
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/kpasswdserver /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver /home/szybet/kdesrc/build/frameworks/kio/src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kpasswdserver/CMakeFiles/kiod_kpasswdserver.dir/depend

