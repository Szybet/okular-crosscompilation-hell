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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kauth

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kauth

# Include any dependencies generated for this target.
include src/CMakeFiles/KF5AuthCore.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/KF5AuthCore.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/KF5AuthCore.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/KF5AuthCore.dir/flags.make

src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o: src/KF5AuthCore_autogen/mocs_compilation.cpp
src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o -MF CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/KF5AuthCore_autogen/mocs_compilation.cpp

src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/KF5AuthCore_autogen/mocs_compilation.cpp > CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.i

src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/KF5AuthCore_autogen/mocs_compilation.cpp -o CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.s

src/CMakeFiles/KF5AuthCore.dir/action.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/action.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/action.cpp
src/CMakeFiles/KF5AuthCore.dir/action.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/action.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/action.cpp.o -MF CMakeFiles/KF5AuthCore.dir/action.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/action.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/action.cpp

src/CMakeFiles/KF5AuthCore.dir/action.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/action.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/action.cpp > CMakeFiles/KF5AuthCore.dir/action.cpp.i

src/CMakeFiles/KF5AuthCore.dir/action.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/action.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/action.cpp -o CMakeFiles/KF5AuthCore.dir/action.cpp.s

src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/actionreply.cpp
src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o -MF CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/actionreply.cpp

src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/actionreply.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/actionreply.cpp > CMakeFiles/KF5AuthCore.dir/actionreply.cpp.i

src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/actionreply.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/actionreply.cpp -o CMakeFiles/KF5AuthCore.dir/actionreply.cpp.s

src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/executejob.cpp
src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.o -MF CMakeFiles/KF5AuthCore.dir/executejob.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/executejob.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/executejob.cpp

src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/executejob.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/executejob.cpp > CMakeFiles/KF5AuthCore.dir/executejob.cpp.i

src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/executejob.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/executejob.cpp -o CMakeFiles/KF5AuthCore.dir/executejob.cpp.s

src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp
src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o -MF CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp

src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp > CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.i

src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp -o CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.s

src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/BackendsManager.cpp
src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o -MF CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/BackendsManager.cpp

src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/BackendsManager.cpp > CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.i

src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/BackendsManager.cpp -o CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.s

src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp
src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o -MF CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp

src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp > CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.i

src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp -o CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.s

src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/helpersupport.cpp
src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o -MF CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/helpersupport.cpp

src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/helpersupport.cpp > CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.i

src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/helpersupport.cpp -o CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.s

src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o: src/kauthdebug.cpp
src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o -MF CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp

src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp > CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.i

src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp -o CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.s

src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/backends/fake/FakeBackend.cpp
src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o -MF CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/backends/fake/FakeBackend.cpp

src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/backends/fake/FakeBackend.cpp > CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.i

src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/backends/fake/FakeBackend.cpp -o CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.s

src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/backends/fakehelper/FakeHelperProxy.cpp
src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o -MF CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/backends/fakehelper/FakeHelperProxy.cpp

src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/backends/fakehelper/FakeHelperProxy.cpp > CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.i

src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/backends/fakehelper/FakeHelperProxy.cpp -o CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.s

src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o: src/CMakeFiles/KF5AuthCore.dir/flags.make
src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o: src/ECMQmLoader-kauth5_qt.cpp
src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o: src/CMakeFiles/KF5AuthCore.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o -MF CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o.d -o CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/ECMQmLoader-kauth5_qt.cpp

src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/ECMQmLoader-kauth5_qt.cpp > CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.i

src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/ECMQmLoader-kauth5_qt.cpp -o CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.s

# Object files for target KF5AuthCore
KF5AuthCore_OBJECTS = \
"CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/action.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/executejob.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o" \
"CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o"

# External object files for target KF5AuthCore
KF5AuthCore_EXTERNAL_OBJECTS =

bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/KF5AuthCore_autogen/mocs_compilation.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/action.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/actionreply.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/executejob.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/AuthBackend.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/BackendsManager.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/HelperProxy.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/helpersupport.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/kauthdebug.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/backends/fake/FakeBackend.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/backends/fakehelper/FakeHelperProxy.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/ECMQmLoader-kauth5_qt.cpp.o
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/build.make
bin/libKF5AuthCore.so.5.107.0: src/CMakeFiles/KF5AuthCore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX shared library ../bin/libKF5AuthCore.so"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KF5AuthCore.dir/link.txt --verbose=$(VERBOSE)
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && $(CMAKE_COMMAND) -E cmake_symlink_library ../bin/libKF5AuthCore.so.5.107.0 ../bin/libKF5AuthCore.so.5 ../bin/libKF5AuthCore.so

bin/libKF5AuthCore.so.5: bin/libKF5AuthCore.so.5.107.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5AuthCore.so.5

bin/libKF5AuthCore.so: bin/libKF5AuthCore.so.5.107.0
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libKF5AuthCore.so

# Rule to build all files generated by this target.
src/CMakeFiles/KF5AuthCore.dir/build: bin/libKF5AuthCore.so
.PHONY : src/CMakeFiles/KF5AuthCore.dir/build

src/CMakeFiles/KF5AuthCore.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && $(CMAKE_COMMAND) -P CMakeFiles/KF5AuthCore.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/KF5AuthCore.dir/clean

src/CMakeFiles/KF5AuthCore.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kauth && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kauth /home/szybet/kdesrc/frameworks/kauth/src /home/szybet/kdesrc/build/frameworks/kauth /home/szybet/kdesrc/build/frameworks/kauth/src /home/szybet/kdesrc/build/frameworks/kauth/src/CMakeFiles/KF5AuthCore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/KF5AuthCore.dir/depend

