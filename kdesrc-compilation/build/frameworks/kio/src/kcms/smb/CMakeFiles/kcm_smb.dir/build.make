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
include src/kcms/smb/CMakeFiles/kcm_smb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kcms/smb/CMakeFiles/kcm_smb.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kcms/smb/CMakeFiles/kcm_smb.dir/progress.make

# Include the compile flags for this target's objects.
include src/kcms/smb/CMakeFiles/kcm_smb.dir/flags.make

src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o: src/kcms/smb/CMakeFiles/kcm_smb.dir/flags.make
src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o: src/kcms/smb/kcm_smb_autogen/mocs_compilation.cpp
src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o: src/kcms/smb/CMakeFiles/kcm_smb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb/kcm_smb_autogen/mocs_compilation.cpp

src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb/kcm_smb_autogen/mocs_compilation.cpp > CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.i

src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb/kcm_smb_autogen/mocs_compilation.cpp -o CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.s

src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o: src/kcms/smb/CMakeFiles/kcm_smb.dir/flags.make
src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kcms/smb/smbrodlg.cpp
src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o: src/kcms/smb/CMakeFiles/kcm_smb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o -MF CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o.d -o CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kcms/smb/smbrodlg.cpp

src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_smb.dir/smbrodlg.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kcms/smb/smbrodlg.cpp > CMakeFiles/kcm_smb.dir/smbrodlg.cpp.i

src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_smb.dir/smbrodlg.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kcms/smb/smbrodlg.cpp -o CMakeFiles/kcm_smb.dir/smbrodlg.cpp.s

# Object files for target kcm_smb
kcm_smb_OBJECTS = \
"CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o"

# External object files for target kcm_smb
kcm_smb_EXTERNAL_OBJECTS =

bin/kcm_smb.so: src/kcms/smb/CMakeFiles/kcm_smb.dir/kcm_smb_autogen/mocs_compilation.cpp.o
bin/kcm_smb.so: src/kcms/smb/CMakeFiles/kcm_smb.dir/smbrodlg.cpp.o
bin/kcm_smb.so: src/kcms/smb/CMakeFiles/kcm_smb.dir/build.make
bin/kcm_smb.so: src/kcms/smb/CMakeFiles/kcm_smb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared module ../../../bin/kcm_smb.so"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kcm_smb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kcms/smb/CMakeFiles/kcm_smb.dir/build: bin/kcm_smb.so
.PHONY : src/kcms/smb/CMakeFiles/kcm_smb.dir/build

src/kcms/smb/CMakeFiles/kcm_smb.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb && $(CMAKE_COMMAND) -P CMakeFiles/kcm_smb.dir/cmake_clean.cmake
.PHONY : src/kcms/smb/CMakeFiles/kcm_smb.dir/clean

src/kcms/smb/CMakeFiles/kcm_smb.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/kcms/smb /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb /home/szybet/kdesrc/build/frameworks/kio/src/kcms/smb/CMakeFiles/kcm_smb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kcms/smb/CMakeFiles/kcm_smb.dir/depend

