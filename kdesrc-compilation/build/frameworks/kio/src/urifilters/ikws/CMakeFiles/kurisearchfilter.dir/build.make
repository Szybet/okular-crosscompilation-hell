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
include src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.make

# Include the progress variables for this target.
include src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/progress.make

# Include the compile flags for this target's objects.
include src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make

src/urifilters/ikws/ui_ikwsopts_ui.h: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/ikwsopts_ui.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_ikwsopts_ui.h"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /usr/bin/cmake -DKDE_UIC_EXECUTABLE:FILEPATH=/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/uic -DKDE_UIC_FILE:FILEPATH=/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/ikwsopts_ui.ui -DKDE_UIC_H_FILE:FILEPATH=/home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws/ui_ikwsopts_ui.h -DKDE_UIC_BASENAME:STRING=ikwsopts_ui -P /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/cmake/KF5I18n/kf5i18nuic.cmake

src/urifilters/ikws/ui_searchproviderdlg_ui.h: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderdlg_ui.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_searchproviderdlg_ui.h"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /usr/bin/cmake -DKDE_UIC_EXECUTABLE:FILEPATH=/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/uic -DKDE_UIC_FILE:FILEPATH=/home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderdlg_ui.ui -DKDE_UIC_H_FILE:FILEPATH=/home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws/ui_searchproviderdlg_ui.h -DKDE_UIC_BASENAME:STRING=searchproviderdlg_ui -P /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/cmake/KF5I18n/kf5i18nuic.cmake

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o: src/urifilters/ikws/kurisearchfilter_autogen/mocs_compilation.cpp
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws/kurisearchfilter_autogen/mocs_compilation.cpp

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws/kurisearchfilter_autogen/mocs_compilation.cpp > CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.i

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws/kurisearchfilter_autogen/mocs_compilation.cpp -o CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.s

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kurisearchfilter.cpp
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o -MF CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o.d -o CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kurisearchfilter.cpp

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kurisearchfilter.cpp > CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.i

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kurisearchfilter.cpp -o CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.s

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kuriikwsfiltereng.cpp
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o -MF CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o.d -o CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kuriikwsfiltereng.cpp

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kuriikwsfiltereng.cpp > CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.i

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/kuriikwsfiltereng.cpp -o CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.s

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/ikwsopts.cpp
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o -MF CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o.d -o CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/ikwsopts.cpp

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/ikwsopts.cpp > CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.i

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/ikwsopts.cpp -o CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.s

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderdlg.cpp
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o -MF CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o.d -o CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderdlg.cpp

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderdlg.cpp > CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.i

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderdlg.cpp -o CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.s

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchprovider.cpp
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o -MF CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o.d -o CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchprovider.cpp

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchprovider.cpp > CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.i

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchprovider.cpp -o CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.s

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/flags.make
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderregistry.cpp
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o -MF CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o.d -o CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderregistry.cpp

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderregistry.cpp > CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.i

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws/searchproviderregistry.cpp -o CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.s

# Object files for target kurisearchfilter
kurisearchfilter_OBJECTS = \
"CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o" \
"CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o" \
"CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o" \
"CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o" \
"CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o" \
"CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o"

# External object files for target kurisearchfilter
kurisearchfilter_EXTERNAL_OBJECTS =

bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter_autogen/mocs_compilation.cpp.o
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kurisearchfilter.cpp.o
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/kuriikwsfiltereng.cpp.o
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/ikwsopts.cpp.o
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderdlg.cpp.o
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchprovider.cpp.o
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/searchproviderregistry.cpp.o
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/build.make
bin/kf5/urifilters/kurisearchfilter.so: src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX shared module ../../../bin/kf5/urifilters/kurisearchfilter.so"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kurisearchfilter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/build: bin/kf5/urifilters/kurisearchfilter.so
.PHONY : src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/build

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws && $(CMAKE_COMMAND) -P CMakeFiles/kurisearchfilter.dir/cmake_clean.cmake
.PHONY : src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/clean

src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/depend: src/urifilters/ikws/ui_ikwsopts_ui.h
src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/depend: src/urifilters/ikws/ui_searchproviderdlg_ui.h
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/urifilters/ikws /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws /home/szybet/kdesrc/build/frameworks/kio/src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/urifilters/ikws/CMakeFiles/kurisearchfilter.dir/depend

