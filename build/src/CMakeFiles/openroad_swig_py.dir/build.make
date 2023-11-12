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
include src/CMakeFiles/openroad_swig_py.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/openroad_swig_py.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/openroad_swig_py.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/openroad_swig_py.dir/flags.make

src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx: ../src/OpenRoad-py.i
src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx: src/CMakeFiles/openroad_swig_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Swig compile OpenRoad-py.i for python"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /mnt/raid10/software/local/bin/cmake -E make_directory /mnt/raid10/yingjie/OpenROAD/build/src /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_swig_py.dir
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /mnt/raid10/software/local/bin/cmake -E env SWIG_LIB=/usr/local/share/swig/4.2.0 /usr/local/bin/swig -python -I/mnt/raid10/yingjie/OpenROAD/include -I/mnt/raid10/software/local/include/python3.9 -I/mnt/raid10/software/local/include/python3.9 -I/mnt/raid10/yingjie/OpenROAD/src/dbSta/src/../include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/src -I/usr/local/include -I/usr/local/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include/odb -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/defzlib -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lefzlib -I/mnt/raid10/yingjie/OpenROAD/src/sta/include -I/usr/include -flatstaticmethod -Werror -w317,325,378,401,402,467,472,503,509 -outdir /mnt/raid10/yingjie/OpenROAD/build/src -c++ -module openroad_swig_py -interface _openroad_swig_py -MF /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_swig_py.dir/OpenRoad-py.i.d -MD -o /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx /mnt/raid10/yingjie/OpenROAD/src/OpenRoad-py.i

src/openroad_swig_py.py: src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate src/openroad_swig_py.py

src/openroad_swig_py-pythonInitVar.cc: src/openroad_swig_py.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating openroad_swig_py-pythonInitVar.cc"
	cd /mnt/raid10/yingjie/OpenROAD/src && /mnt/raid10/yingjie/OpenROAD/src/sta/etc/TclEncode.tcl /mnt/raid10/yingjie/OpenROAD/build/src/openroad_swig_py-pythonInitVar.cc openroad_swig_py_python_inits /mnt/raid10/yingjie/OpenROAD/build/src/openroad_swig_py.py

src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o: src/CMakeFiles/openroad_swig_py.dir/flags.make
src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o: src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx
src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o: src/CMakeFiles/openroad_swig_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -MD -MT src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o -MF CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o.d -o CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o -c /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx

src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -E /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx > CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.i

src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -S /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx -o CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.s

src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o: src/CMakeFiles/openroad_swig_py.dir/flags.make
src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o: src/openroad_swig_py-pythonInitVar.cc
src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o: src/CMakeFiles/openroad_swig_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o -MF CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o.d -o CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o -c /mnt/raid10/yingjie/OpenROAD/build/src/openroad_swig_py-pythonInitVar.cc

src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/build/src/openroad_swig_py-pythonInitVar.cc > CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.i

src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/build/src/openroad_swig_py-pythonInitVar.cc -o CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.s

# Object files for target openroad_swig_py
openroad_swig_py_OBJECTS = \
"CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o" \
"CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o"

# External object files for target openroad_swig_py
openroad_swig_py_EXTERNAL_OBJECTS =

src/_openroad_swig_py.a: src/CMakeFiles/openroad_swig_py.dir/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx.o
src/_openroad_swig_py.a: src/CMakeFiles/openroad_swig_py.dir/openroad_swig_py-pythonInitVar.cc.o
src/_openroad_swig_py.a: src/CMakeFiles/openroad_swig_py.dir/build.make
src/_openroad_swig_py.a: src/CMakeFiles/openroad_swig_py.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library _openroad_swig_py.a"
	cd /mnt/raid10/yingjie/OpenROAD/build/src && $(CMAKE_COMMAND) -P CMakeFiles/openroad_swig_py.dir/cmake_clean_target.cmake
	cd /mnt/raid10/yingjie/OpenROAD/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/openroad_swig_py.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/openroad_swig_py.dir/build: src/_openroad_swig_py.a
.PHONY : src/CMakeFiles/openroad_swig_py.dir/build

src/CMakeFiles/openroad_swig_py.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src && $(CMAKE_COMMAND) -P CMakeFiles/openroad_swig_py.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/openroad_swig_py.dir/clean

src/CMakeFiles/openroad_swig_py.dir/depend: src/CMakeFiles/openroad_swig_py.dir/OpenRoad-pyPYTHON_wrap.cxx
src/CMakeFiles/openroad_swig_py.dir/depend: src/openroad_swig_py-pythonInitVar.cc
src/CMakeFiles/openroad_swig_py.dir/depend: src/openroad_swig_py.py
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src /mnt/raid10/yingjie/OpenROAD/build/src/CMakeFiles/openroad_swig_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/openroad_swig_py.dir/depend
