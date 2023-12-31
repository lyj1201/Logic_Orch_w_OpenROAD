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

# Utility rule file for openroad_tags.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/openroad_tags.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/openroad_tags.dir/progress.make

src/CMakeFiles/openroad_tags: ../src/Design.cc
src/CMakeFiles/openroad_tags: ../src/Tech.cc
src/CMakeFiles/openroad_tags: ../src/OpenRoad.cc
src/CMakeFiles/openroad_tags: ../src/Main.cc
	cd /mnt/raid10/yingjie/OpenROAD/src && etags -o TAGS Design.cc Tech.cc OpenRoad.cc Main.cc /mnt/raid10/yingjie/OpenROAD/include/ord/*.hh /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/*.hh /mnt/raid10/yingjie/OpenROAD/src/dbSta/include/db_sta/*.hh /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/*.cc /mnt/raid10/yingjie/OpenROAD/src/rsz/src/*.hh /mnt/raid10/yingjie/OpenROAD/src/rsz/src/*.cc

openroad_tags: src/CMakeFiles/openroad_tags
openroad_tags: src/CMakeFiles/openroad_tags.dir/build.make
.PHONY : openroad_tags

# Rule to build all files generated by this target.
src/CMakeFiles/openroad_tags.dir/build: openroad_tags
.PHONY : src/CMakeFiles/openroad_tags.dir/build

src/CMakeFiles/openroad_tags.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src && $(CMAKE_COMMAND) -P CMakeFiles/openroad_tags.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/openroad_tags.dir/clean

src/CMakeFiles/openroad_tags.dir/depend:
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_tags.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/openroad_tags.dir/depend

