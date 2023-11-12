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
include src/ppl/src/munkres/CMakeFiles/Munkres.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/ppl/src/munkres/CMakeFiles/Munkres.dir/compiler_depend.make

# Include the progress variables for this target.
include src/ppl/src/munkres/CMakeFiles/Munkres.dir/progress.make

# Include the compile flags for this target's objects.
include src/ppl/src/munkres/CMakeFiles/Munkres.dir/flags.make

src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.o: src/ppl/src/munkres/CMakeFiles/Munkres.dir/flags.make
src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.o: ../src/ppl/src/munkres/src/Hungarian.cpp
src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.o: src/ppl/src/munkres/CMakeFiles/Munkres.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.o -MF CMakeFiles/Munkres.dir/src/Hungarian.cpp.o.d -o CMakeFiles/Munkres.dir/src/Hungarian.cpp.o -c /mnt/raid10/yingjie/OpenROAD/src/ppl/src/munkres/src/Hungarian.cpp

src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Munkres.dir/src/Hungarian.cpp.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/ppl/src/munkres/src/Hungarian.cpp > CMakeFiles/Munkres.dir/src/Hungarian.cpp.i

src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Munkres.dir/src/Hungarian.cpp.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/ppl/src/munkres/src/Hungarian.cpp -o CMakeFiles/Munkres.dir/src/Hungarian.cpp.s

# Object files for target Munkres
Munkres_OBJECTS = \
"CMakeFiles/Munkres.dir/src/Hungarian.cpp.o"

# External object files for target Munkres
Munkres_EXTERNAL_OBJECTS =

src/ppl/src/munkres/libMunkres.a: src/ppl/src/munkres/CMakeFiles/Munkres.dir/src/Hungarian.cpp.o
src/ppl/src/munkres/libMunkres.a: src/ppl/src/munkres/CMakeFiles/Munkres.dir/build.make
src/ppl/src/munkres/libMunkres.a: src/ppl/src/munkres/CMakeFiles/Munkres.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMunkres.a"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres && $(CMAKE_COMMAND) -P CMakeFiles/Munkres.dir/cmake_clean_target.cmake
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Munkres.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/ppl/src/munkres/CMakeFiles/Munkres.dir/build: src/ppl/src/munkres/libMunkres.a
.PHONY : src/ppl/src/munkres/CMakeFiles/Munkres.dir/build

src/ppl/src/munkres/CMakeFiles/Munkres.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres && $(CMAKE_COMMAND) -P CMakeFiles/Munkres.dir/cmake_clean.cmake
.PHONY : src/ppl/src/munkres/CMakeFiles/Munkres.dir/clean

src/ppl/src/munkres/CMakeFiles/Munkres.dir/depend:
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src/ppl/src/munkres /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres /mnt/raid10/yingjie/OpenROAD/build/src/ppl/src/munkres/CMakeFiles/Munkres.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/ppl/src/munkres/CMakeFiles/Munkres.dir/depend
