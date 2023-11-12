# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /mnt/raid10/software/local/bin/cmake

# The command to remove a file.
RM = /mnt/raid10/software/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/raid10/yingjie/OpenROAD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/raid10/yingjie/OpenROAD/build

# Include any dependencies generated for this target.
include src/odb/src/lefout/CMakeFiles/lefout.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/odb/src/lefout/CMakeFiles/lefout.dir/compiler_depend.make

# Include the progress variables for this target.
include src/odb/src/lefout/CMakeFiles/lefout.dir/progress.make

# Include the compile flags for this target's objects.
include src/odb/src/lefout/CMakeFiles/lefout.dir/flags.make

src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.o: src/odb/src/lefout/CMakeFiles/lefout.dir/flags.make
src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.o: ../src/odb/src/lefout/lefout.cpp
src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.o: src/odb/src/lefout/CMakeFiles/lefout.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.o -MF CMakeFiles/lefout.dir/lefout.cpp.o.d -o CMakeFiles/lefout.dir/lefout.cpp.o -c /mnt/raid10/yingjie/OpenROAD/src/odb/src/lefout/lefout.cpp

src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lefout.dir/lefout.cpp.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/odb/src/lefout/lefout.cpp > CMakeFiles/lefout.dir/lefout.cpp.i

src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lefout.dir/lefout.cpp.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/odb/src/lefout/lefout.cpp -o CMakeFiles/lefout.dir/lefout.cpp.s

# Object files for target lefout
lefout_OBJECTS = \
"CMakeFiles/lefout.dir/lefout.cpp.o"

# External object files for target lefout
lefout_EXTERNAL_OBJECTS =

src/odb/src/lefout/liblefout.a: src/odb/src/lefout/CMakeFiles/lefout.dir/lefout.cpp.o
src/odb/src/lefout/liblefout.a: src/odb/src/lefout/CMakeFiles/lefout.dir/build.make
src/odb/src/lefout/liblefout.a: src/odb/src/lefout/CMakeFiles/lefout.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblefout.a"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout && $(CMAKE_COMMAND) -P CMakeFiles/lefout.dir/cmake_clean_target.cmake
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lefout.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/odb/src/lefout/CMakeFiles/lefout.dir/build: src/odb/src/lefout/liblefout.a
.PHONY : src/odb/src/lefout/CMakeFiles/lefout.dir/build

src/odb/src/lefout/CMakeFiles/lefout.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout && $(CMAKE_COMMAND) -P CMakeFiles/lefout.dir/cmake_clean.cmake
.PHONY : src/odb/src/lefout/CMakeFiles/lefout.dir/clean

src/odb/src/lefout/CMakeFiles/lefout.dir/depend:
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src/odb/src/lefout /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/lefout/CMakeFiles/lefout.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/odb/src/lefout/CMakeFiles/lefout.dir/depend

