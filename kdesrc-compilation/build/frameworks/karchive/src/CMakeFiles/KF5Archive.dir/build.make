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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/karchive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/karchive

# Include any dependencies generated for this target.
include src/CMakeFiles/KF5Archive.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/KF5Archive.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/KF5Archive.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/KF5Archive.dir/flags.make

src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o: src/KF5Archive_autogen/mocs_compilation.cpp
src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o -MF CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/karchive/src/KF5Archive_autogen/mocs_compilation.cpp

src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/karchive/src/KF5Archive_autogen/mocs_compilation.cpp > CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.i

src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/karchive/src/KF5Archive_autogen/mocs_compilation.cpp -o CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.s

src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o: src/ECMQmLoader-karchive5_qt.cpp
src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o -MF CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o.d -o CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o -c /home/szybet/kdesrc/build/frameworks/karchive/src/ECMQmLoader-karchive5_qt.cpp

src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/karchive/src/ECMQmLoader-karchive5_qt.cpp > CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.i

src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/karchive/src/ECMQmLoader-karchive5_qt.cpp -o CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.s

src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.cpp
src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o -MF CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o.d -o CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.cpp

src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kxzfilter.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.cpp > CMakeFiles/KF5Archive.dir/kxzfilter.cpp.i

src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kxzfilter.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.cpp -o CMakeFiles/KF5Archive.dir/kxzfilter.cpp.s

src/CMakeFiles/KF5Archive.dir/k7zip.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/k7zip.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/k7zip.cpp
src/CMakeFiles/KF5Archive.dir/k7zip.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/KF5Archive.dir/k7zip.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/k7zip.cpp.o -MF CMakeFiles/KF5Archive.dir/k7zip.cpp.o.d -o CMakeFiles/KF5Archive.dir/k7zip.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/k7zip.cpp

src/CMakeFiles/KF5Archive.dir/k7zip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/k7zip.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/k7zip.cpp > CMakeFiles/KF5Archive.dir/k7zip.cpp.i

src/CMakeFiles/KF5Archive.dir/k7zip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/k7zip.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/k7zip.cpp -o CMakeFiles/KF5Archive.dir/k7zip.cpp.s

src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.cpp
src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o -MF CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o.d -o CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.cpp

src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.cpp > CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.i

src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.cpp -o CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.s

src/CMakeFiles/KF5Archive.dir/karchive.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/karchive.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/karchive.cpp
src/CMakeFiles/KF5Archive.dir/karchive.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/KF5Archive.dir/karchive.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/karchive.cpp.o -MF CMakeFiles/KF5Archive.dir/karchive.cpp.o.d -o CMakeFiles/KF5Archive.dir/karchive.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/karchive.cpp

src/CMakeFiles/KF5Archive.dir/karchive.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/karchive.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/karchive.cpp > CMakeFiles/KF5Archive.dir/karchive.cpp.i

src/CMakeFiles/KF5Archive.dir/karchive.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/karchive.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/karchive.cpp -o CMakeFiles/KF5Archive.dir/karchive.cpp.s

src/CMakeFiles/KF5Archive.dir/kar.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kar.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kar.cpp
src/CMakeFiles/KF5Archive.dir/kar.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/KF5Archive.dir/kar.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kar.cpp.o -MF CMakeFiles/KF5Archive.dir/kar.cpp.o.d -o CMakeFiles/KF5Archive.dir/kar.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kar.cpp

src/CMakeFiles/KF5Archive.dir/kar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kar.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kar.cpp > CMakeFiles/KF5Archive.dir/kar.cpp.i

src/CMakeFiles/KF5Archive.dir/kar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kar.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kar.cpp -o CMakeFiles/KF5Archive.dir/kar.cpp.s

src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.cpp
src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o -MF CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o.d -o CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.cpp

src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.cpp > CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.i

src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.cpp -o CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.s

src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.cpp
src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o -MF CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o.d -o CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.cpp

src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kfilterbase.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.cpp > CMakeFiles/KF5Archive.dir/kfilterbase.cpp.i

src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kfilterbase.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.cpp -o CMakeFiles/KF5Archive.dir/kfilterbase.cpp.s

src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.cpp
src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o -MF CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o.d -o CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.cpp

src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.cpp > CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.i

src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.cpp -o CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.s

src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice.cpp
src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o -MF CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o.d -o CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice.cpp

src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice.cpp > CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.i

src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice.cpp -o CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.s

src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.cpp
src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.o -MF CMakeFiles/KF5Archive.dir/knonefilter.cpp.o.d -o CMakeFiles/KF5Archive.dir/knonefilter.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.cpp

src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/knonefilter.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.cpp > CMakeFiles/KF5Archive.dir/knonefilter.cpp.i

src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/knonefilter.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.cpp -o CMakeFiles/KF5Archive.dir/knonefilter.cpp.s

src/CMakeFiles/KF5Archive.dir/ktar.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/ktar.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/ktar.cpp
src/CMakeFiles/KF5Archive.dir/ktar.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/CMakeFiles/KF5Archive.dir/ktar.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/ktar.cpp.o -MF CMakeFiles/KF5Archive.dir/ktar.cpp.o.d -o CMakeFiles/KF5Archive.dir/ktar.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/ktar.cpp

src/CMakeFiles/KF5Archive.dir/ktar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/ktar.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/ktar.cpp > CMakeFiles/KF5Archive.dir/ktar.cpp.i

src/CMakeFiles/KF5Archive.dir/ktar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/ktar.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/ktar.cpp -o CMakeFiles/KF5Archive.dir/ktar.cpp.s

src/CMakeFiles/KF5Archive.dir/kzip.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kzip.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kzip.cpp
src/CMakeFiles/KF5Archive.dir/kzip.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object src/CMakeFiles/KF5Archive.dir/kzip.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kzip.cpp.o -MF CMakeFiles/KF5Archive.dir/kzip.cpp.o.d -o CMakeFiles/KF5Archive.dir/kzip.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kzip.cpp

src/CMakeFiles/KF5Archive.dir/kzip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kzip.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kzip.cpp > CMakeFiles/KF5Archive.dir/kzip.cpp.i

src/CMakeFiles/KF5Archive.dir/kzip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kzip.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kzip.cpp -o CMakeFiles/KF5Archive.dir/kzip.cpp.s

src/CMakeFiles/KF5Archive.dir/krcc.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/krcc.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/krcc.cpp
src/CMakeFiles/KF5Archive.dir/krcc.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object src/CMakeFiles/KF5Archive.dir/krcc.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/krcc.cpp.o -MF CMakeFiles/KF5Archive.dir/krcc.cpp.o.d -o CMakeFiles/KF5Archive.dir/krcc.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/krcc.cpp

src/CMakeFiles/KF5Archive.dir/krcc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/krcc.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/krcc.cpp > CMakeFiles/KF5Archive.dir/krcc.cpp.i

src/CMakeFiles/KF5Archive.dir/krcc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/krcc.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/krcc.cpp -o CMakeFiles/KF5Archive.dir/krcc.cpp.s

src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o: /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.cpp
src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o -MF CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o.d -o CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o -c /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.cpp

src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/kfilterdev.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.cpp > CMakeFiles/KF5Archive.dir/kfilterdev.cpp.i

src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/kfilterdev.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.cpp -o CMakeFiles/KF5Archive.dir/kfilterdev.cpp.s

src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o: src/CMakeFiles/KF5Archive.dir/flags.make
src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o: src/loggingcategory.cpp
src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o: src/CMakeFiles/KF5Archive.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o -MF CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o.d -o CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o -c /home/szybet/kdesrc/build/frameworks/karchive/src/loggingcategory.cpp

src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5Archive.dir/loggingcategory.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/karchive/src/loggingcategory.cpp > CMakeFiles/KF5Archive.dir/loggingcategory.cpp.i

src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5Archive.dir/loggingcategory.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/karchive/src/loggingcategory.cpp -o CMakeFiles/KF5Archive.dir/loggingcategory.cpp.s

# Object files for target KF5Archive
KF5Archive_OBJECTS = \
"CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o" \
"CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o" \
"CMakeFiles/KF5Archive.dir/k7zip.cpp.o" \
"CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o" \
"CMakeFiles/KF5Archive.dir/karchive.cpp.o" \
"CMakeFiles/KF5Archive.dir/kar.cpp.o" \
"CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o" \
"CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o" \
"CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o" \
"CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o" \
"CMakeFiles/KF5Archive.dir/knonefilter.cpp.o" \
"CMakeFiles/KF5Archive.dir/ktar.cpp.o" \
"CMakeFiles/KF5Archive.dir/kzip.cpp.o" \
"CMakeFiles/KF5Archive.dir/krcc.cpp.o" \
"CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o" \
"CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o"

# External object files for target KF5Archive
KF5Archive_EXTERNAL_OBJECTS =

bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/KF5Archive_autogen/mocs_compilation.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/ECMQmLoader-karchive5_qt.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kxzfilter.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/k7zip.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kzstdfilter.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/karchive.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kar.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kcompressiondevice.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kfilterbase.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kgzipfilter.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/klimitediodevice.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/knonefilter.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/ktar.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kzip.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/krcc.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/kfilterdev.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/loggingcategory.cpp.o
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/build.make
bin/libKF5Archive.so.5.107.0: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/liblzma.so
bin/libKF5Archive.so.5.107.0: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libz.so
bin/libKF5Archive.so.5.107.0: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/local/lib/libzstd.so
bin/libKF5Archive.so.5.107.0: src/CMakeFiles/KF5Archive.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX shared library ../bin/libKF5Archive.so"
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KF5Archive.dir/link.txt --verbose=$(VERBOSE)
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && $(CMAKE_COMMAND) -E cmake_symlink_library ../bin/libKF5Archive.so.5.107.0 ../bin/libKF5Archive.so.5 ../bin/libKF5Archive.so

bin/libKF5Archive.so.5: bin/libKF5Archive.so.5.107.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5Archive.so.5

bin/libKF5Archive.so: bin/libKF5Archive.so.5.107.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5Archive.so

# Rule to build all files generated by this target.
src/CMakeFiles/KF5Archive.dir/build: bin/libKF5Archive.so
.PHONY : src/CMakeFiles/KF5Archive.dir/build

src/CMakeFiles/KF5Archive.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/karchive/src && $(CMAKE_COMMAND) -P CMakeFiles/KF5Archive.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/KF5Archive.dir/clean

src/CMakeFiles/KF5Archive.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/karchive && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/karchive /home/szybet/kdesrc/frameworks/karchive/src /home/szybet/kdesrc/build/frameworks/karchive /home/szybet/kdesrc/build/frameworks/karchive/src /home/szybet/kdesrc/build/frameworks/karchive/src/CMakeFiles/KF5Archive.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/KF5Archive.dir/depend

