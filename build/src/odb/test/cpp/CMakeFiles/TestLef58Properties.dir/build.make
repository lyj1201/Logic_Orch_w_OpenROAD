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
include src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/compiler_depend.make

# Include the progress variables for this target.
include src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/progress.make

# Include the compile flags for this target's objects.
include src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/flags.make

src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o: src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/flags.make
src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o: ../src/odb/test/cpp/TestLef58Properties.cpp
src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o: src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/test/cpp && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o -MF CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o.d -o CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o -c /mnt/raid10/yingjie/OpenROAD/src/odb/test/cpp/TestLef58Properties.cpp

src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/test/cpp && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/odb/test/cpp/TestLef58Properties.cpp > CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.i

src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/test/cpp && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/odb/test/cpp/TestLef58Properties.cpp -o CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.s

# Object files for target TestLef58Properties
TestLef58Properties_OBJECTS = \
"CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o"

# External object files for target TestLef58Properties
TestLef58Properties_EXTERNAL_OBJECTS =

src/odb/test/cpp/TestLef58Properties: src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/TestLef58Properties.cpp.o
src/odb/test/cpp/TestLef58Properties: src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/build.make
src/odb/test/cpp/TestLef58Properties: src/odb/src/zutil/libzutil.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/tm/libtm.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/lef/liblef.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/defin/libdefin.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/defout/libdefout.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/lefin/liblefin.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/lefout/liblefout.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/cdl/libcdl.a
src/odb/test/cpp/TestLef58Properties: /usr/lib64/libtcl.so
src/odb/test/cpp/TestLef58Properties: src/utl/utl.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/def/libdef.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/def/libdefzlib.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/lef/liblef.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/lef/liblefzlib.a
src/odb/test/cpp/TestLef58Properties: /usr/lib64/libz.so
src/odb/test/cpp/TestLef58Properties: src/odb/src/defout/libdefout.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/lefout/liblefout.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/db/libdb.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/defout/libdefout.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/lefout/liblefout.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/db/libdb.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/zutil/libzutil.a
src/odb/test/cpp/TestLef58Properties: src/odb/src/tm/libtm.a
src/odb/test/cpp/TestLef58Properties: /usr/lib64/libtcl.so
src/odb/test/cpp/TestLef58Properties: src/odb/src/upf/upf.a
src/odb/test/cpp/TestLef58Properties: src/utl/utl.a
src/odb/test/cpp/TestLef58Properties: /usr/local/lib64/libspdlog.a
src/odb/test/cpp/TestLef58Properties: src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestLef58Properties"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/test/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestLef58Properties.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/build: src/odb/test/cpp/TestLef58Properties
.PHONY : src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/build

src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/test/cpp && $(CMAKE_COMMAND) -P CMakeFiles/TestLef58Properties.dir/cmake_clean.cmake
.PHONY : src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/clean

src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/depend:
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src/odb/test/cpp /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src/odb/test/cpp /mnt/raid10/yingjie/OpenROAD/build/src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/odb/test/cpp/CMakeFiles/TestLef58Properties.dir/depend

