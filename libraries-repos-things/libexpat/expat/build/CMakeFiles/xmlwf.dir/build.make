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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/libexpat/expat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/libexpat/expat/build

# Include any dependencies generated for this target.
include CMakeFiles/xmlwf.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/xmlwf.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/xmlwf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xmlwf.dir/flags.make

CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o: CMakeFiles/xmlwf.dir/flags.make
CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o: /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlwf.c
CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o: CMakeFiles/xmlwf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/libexpat/expat/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o -MF CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o.d -o CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o -c /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlwf.c

CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.i"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlwf.c > CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.i

CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.s"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlwf.c -o CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.s

CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o: CMakeFiles/xmlwf.dir/flags.make
CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o: /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlfile.c
CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o: CMakeFiles/xmlwf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/libexpat/expat/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o -MF CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o.d -o CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o -c /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlfile.c

CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.i"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlfile.c > CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.i

CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.s"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/xmlfile.c -o CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.s

CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o: CMakeFiles/xmlwf.dir/flags.make
CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o: /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/codepage.c
CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o: CMakeFiles/xmlwf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/libexpat/expat/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o -MF CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o.d -o CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o -c /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/codepage.c

CMakeFiles/xmlwf.dir/xmlwf/codepage.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xmlwf.dir/xmlwf/codepage.c.i"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/codepage.c > CMakeFiles/xmlwf.dir/xmlwf/codepage.c.i

CMakeFiles/xmlwf.dir/xmlwf/codepage.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xmlwf.dir/xmlwf/codepage.c.s"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/codepage.c -o CMakeFiles/xmlwf.dir/xmlwf/codepage.c.s

CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o: CMakeFiles/xmlwf.dir/flags.make
CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o: /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/readfilemap.c
CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o: CMakeFiles/xmlwf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/libexpat/expat/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o -MF CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o.d -o CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o -c /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/readfilemap.c

CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.i"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/readfilemap.c > CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.i

CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.s"
	/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/HDD/Project/Public/okulartry/libexpat/expat/xmlwf/readfilemap.c -o CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.s

# Object files for target xmlwf
xmlwf_OBJECTS = \
"CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o" \
"CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o" \
"CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o" \
"CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o"

# External object files for target xmlwf
xmlwf_EXTERNAL_OBJECTS =

xmlwf/xmlwf: CMakeFiles/xmlwf.dir/xmlwf/xmlwf.c.o
xmlwf/xmlwf: CMakeFiles/xmlwf.dir/xmlwf/xmlfile.c.o
xmlwf/xmlwf: CMakeFiles/xmlwf.dir/xmlwf/codepage.c.o
xmlwf/xmlwf: CMakeFiles/xmlwf.dir/xmlwf/readfilemap.c.o
xmlwf/xmlwf: CMakeFiles/xmlwf.dir/build.make
xmlwf/xmlwf: libexpat.so.1.8.10
xmlwf/xmlwf: CMakeFiles/xmlwf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/libexpat/expat/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable xmlwf/xmlwf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xmlwf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xmlwf.dir/build: xmlwf/xmlwf
.PHONY : CMakeFiles/xmlwf.dir/build

CMakeFiles/xmlwf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/xmlwf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/xmlwf.dir/clean

CMakeFiles/xmlwf.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/libexpat/expat/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/libexpat/expat /mnt/HDD/Project/Public/okulartry/libexpat/expat /mnt/HDD/Project/Public/okulartry/libexpat/expat/build /mnt/HDD/Project/Public/okulartry/libexpat/expat/build /mnt/HDD/Project/Public/okulartry/libexpat/expat/build/CMakeFiles/xmlwf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xmlwf.dir/depend

