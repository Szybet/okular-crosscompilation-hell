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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kdesupport/qca

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/kdesupport/qca

# Include any dependencies generated for this target.
include plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.make

# Include the progress variables for this target.
include plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o: plugins/qca-gnupg/qca-gnupg_autogen/mocs_compilation.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o -MF CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg/qca-gnupg_autogen/mocs_compilation.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg/qca-gnupg_autogen/mocs_compilation.cpp > CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg/qca-gnupg_autogen/mocs_compilation.cpp -o CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/qca-gnupg.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o -MF CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o.d -o CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/qca-gnupg.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/qca-gnupg.cpp > CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/qca-gnupg.cpp -o CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgop.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.o -MF CMakeFiles/qca-gnupg.dir/gpgop.cpp.o.d -o CMakeFiles/qca-gnupg.dir/gpgop.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgop.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/gpgop.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgop.cpp > CMakeFiles/qca-gnupg.dir/gpgop.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/gpgop.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgop.cpp -o CMakeFiles/qca-gnupg.dir/gpgop.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/utils.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.o -MF CMakeFiles/qca-gnupg.dir/utils.cpp.o.d -o CMakeFiles/qca-gnupg.dir/utils.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/utils.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/utils.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/utils.cpp > CMakeFiles/qca-gnupg.dir/utils.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/utils.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/utils.cpp -o CMakeFiles/qca-gnupg.dir/utils.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/sprocess.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o -MF CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o.d -o CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/sprocess.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/sprocess.cpp > CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/sprocess.cpp -o CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mypgpkeycontext.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o -MF CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o.d -o CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mypgpkeycontext.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mypgpkeycontext.cpp > CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mypgpkeycontext.cpp -o CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystoreentry.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o -MF CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o.d -o CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystoreentry.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystoreentry.cpp > CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystoreentry.cpp -o CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/myopenpgpcontext.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o -MF CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o.d -o CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/myopenpgpcontext.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/myopenpgpcontext.cpp > CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/myopenpgpcontext.cpp -o CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystorelist.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o -MF CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o.d -o CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystorelist.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystorelist.cpp > CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mykeystorelist.cpp -o CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mymessagecontext.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o -MF CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o.d -o CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mymessagecontext.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mymessagecontext.cpp > CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/mymessagecontext.cpp -o CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/ringwatch.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o -MF CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o.d -o CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/ringwatch.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/ringwatch.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/ringwatch.cpp > CMakeFiles/qca-gnupg.dir/ringwatch.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/ringwatch.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/ringwatch.cpp -o CMakeFiles/qca-gnupg.dir/ringwatch.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/lineconverter.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o -MF CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o.d -o CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/lineconverter.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/lineconverter.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/lineconverter.cpp > CMakeFiles/qca-gnupg.dir/lineconverter.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/lineconverter.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/lineconverter.cpp -o CMakeFiles/qca-gnupg.dir/lineconverter.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgaction.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o -MF CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o.d -o CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgaction.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/gpgaction.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgaction.cpp > CMakeFiles/qca-gnupg.dir/gpgaction.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/gpgaction.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgaction.cpp -o CMakeFiles/qca-gnupg.dir/gpgaction.cpp.s

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/flags.make
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o: /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/gpgproc.cpp
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o -MF CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o.d -o CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/gpgproc.cpp

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/gpgproc.cpp > CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.i

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg/gpgproc/gpgproc.cpp -o CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.s

# Object files for target qca-gnupg
qca__gnupg_OBJECTS = \
"CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o" \
"CMakeFiles/qca-gnupg.dir/gpgop.cpp.o" \
"CMakeFiles/qca-gnupg.dir/utils.cpp.o" \
"CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o" \
"CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o" \
"CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o" \
"CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o" \
"CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o" \
"CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o" \
"CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o" \
"CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o" \
"CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o" \
"CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o"

# External object files for target qca-gnupg
qca__gnupg_EXTERNAL_OBJECTS =

lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg_autogen/mocs_compilation.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/qca-gnupg.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgop.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/utils.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/sprocess.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mypgpkeycontext.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystoreentry.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/myopenpgpcontext.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mykeystorelist.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/mymessagecontext.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/ringwatch.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/lineconverter.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgaction.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/gpgproc/gpgproc.cpp.o
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/build.make
lib/qca-qt5/crypto/libqca-gnupg.so: lib/libqca-qt5.so.2.3.6
lib/qca-qt5/crypto/libqca-gnupg.so: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Core.so.5.15.2
lib/qca-qt5/crypto/libqca-gnupg.so: plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX shared module ../../lib/qca-qt5/crypto/libqca-gnupg.so"
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qca-gnupg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/build: lib/qca-qt5/crypto/libqca-gnupg.so
.PHONY : plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/build

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg && $(CMAKE_COMMAND) -P CMakeFiles/qca-gnupg.dir/cmake_clean.cmake
.PHONY : plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/clean

plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/qca /home/szybet/kdesrc/kdesupport/qca/plugins/qca-gnupg /home/szybet/kdesrc/build/kdesupport/qca /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg /home/szybet/kdesrc/build/kdesupport/qca/plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/qca-gnupg/CMakeFiles/qca-gnupg.dir/depend

