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
include src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/progress.make

# Include the compile flags for this target's objects.
include src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/flags.make

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/flags.make
src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o: src/kioworkers/ftp/kio_ftp_autogen/mocs_compilation.cpp
src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp/kio_ftp_autogen/mocs_compilation.cpp

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp/kio_ftp_autogen/mocs_compilation.cpp > CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.i

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp/kio_ftp_autogen/mocs_compilation.cpp -o CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.s

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.o: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/flags.make
src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kioworkers/ftp/ftp.cpp
src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.o: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.o -MF CMakeFiles/kio_ftp.dir/ftp.cpp.o.d -o CMakeFiles/kio_ftp.dir/ftp.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kioworkers/ftp/ftp.cpp

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kio_ftp.dir/ftp.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kioworkers/ftp/ftp.cpp > CMakeFiles/kio_ftp.dir/ftp.cpp.i

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kio_ftp.dir/ftp.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kioworkers/ftp/ftp.cpp -o CMakeFiles/kio_ftp.dir/ftp.cpp.s

# Object files for target kio_ftp
kio_ftp_OBJECTS = \
"CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kio_ftp.dir/ftp.cpp.o"

# External object files for target kio_ftp
kio_ftp_EXTERNAL_OBJECTS =

bin/kf5/kio/kio_ftp.so: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/kio_ftp_autogen/mocs_compilation.cpp.o
bin/kf5/kio/kio_ftp.so: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/ftp.cpp.o
bin/kf5/kio/kio_ftp.so: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/build.make
bin/kf5/kio/kio_ftp.so: src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared module ../../../bin/kf5/kio/kio_ftp.so"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kio_ftp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/build: bin/kf5/kio/kio_ftp.so
.PHONY : src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/build

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp && $(CMAKE_COMMAND) -P CMakeFiles/kio_ftp.dir/cmake_clean.cmake
.PHONY : src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/clean

src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/kioworkers/ftp /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp /home/szybet/kdesrc/build/frameworks/kio/src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kioworkers/ftp/CMakeFiles/kio_ftp.dir/depend

