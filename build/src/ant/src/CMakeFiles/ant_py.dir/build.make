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
include src/ant/src/CMakeFiles/ant_py.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/ant/src/CMakeFiles/ant_py.dir/compiler_depend.make

# Include the progress variables for this target.
include src/ant/src/CMakeFiles/ant_py.dir/progress.make

# Include the compile flags for this target's objects.
include src/ant/src/CMakeFiles/ant_py.dir/flags.make

src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx: ../src/ant/src/AntennaChecker-py.i
src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx: src/ant/src/CMakeFiles/ant_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Swig compile AntennaChecker-py.i for python"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /mnt/raid10/software/local/bin/cmake -E make_directory /mnt/raid10/yingjie/OpenROAD/build/src/ant/src /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/CMakeFiles/ant_py.dir
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /mnt/raid10/software/local/bin/cmake -E env SWIG_LIB=/usr/local/share/swig/4.2.0 /usr/local/bin/swig -python -I/mnt/raid10/yingjie/OpenROAD/../include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/common -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/python -I/mnt/raid10/yingjie/OpenROAD/include -I/mnt/raid10/software/local/include/python3.9 -I/mnt/raid10/yingjie/OpenROAD/src/ant/src/../include -I/mnt/raid10/software/local/include/python3.9 -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/src -I/usr/local/include -I/usr/local/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include/odb -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/defzlib -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lefzlib -I/mnt/raid10/yingjie/OpenROAD/src/sta/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/grt/include -I/mnt/raid10/yingjie/OpenROAD/src/grt/src/fastroute/include -I/mnt/raid10/yingjie/OpenROAD/src/ant/src/../include -I/mnt/raid10/yingjie/OpenROAD/src/dpl/include -I/mnt/raid10/yingjie/OpenROAD/src/dbSta/src/../include -I/mnt/raid10/yingjie/OpenROAD/src/gui/include -I/mnt/raid10/yingjie/OpenROAD/src/stt/include -flatstaticmethod -Werror -w317,325,378,401,402,467,472,503,509 -outdir /mnt/raid10/yingjie/OpenROAD/build/src/ant/src -c++ -module ant_py -interface _ant_py -MF /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-py.i.d -MD -o /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx /mnt/raid10/yingjie/OpenROAD/src/ant/src/AntennaChecker-py.i

src/ant/src/ant_py.py: src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate src/ant/src/ant_py.py

src/ant/src/ant_py-pythonInitVar.cc: src/ant/src/ant_py.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ant_py-pythonInitVar.cc"
	cd /mnt/raid10/yingjie/OpenROAD/src/ant/src && /mnt/raid10/yingjie/OpenROAD/src/sta/etc/TclEncode.tcl /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/ant_py-pythonInitVar.cc ant_py_python_inits /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/ant_py.py

src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o: src/ant/src/CMakeFiles/ant_py.dir/flags.make
src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o: src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx
src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o: src/ant/src/CMakeFiles/ant_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -MD -MT src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o -MF CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o.d -o CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o -c /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx

src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -E /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx > CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.i

src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -S /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx -o CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.s

src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o: src/ant/src/CMakeFiles/ant_py.dir/flags.make
src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o: src/ant/src/ant_py-pythonInitVar.cc
src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o: src/ant/src/CMakeFiles/ant_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o -MF CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o.d -o CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o -c /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/ant_py-pythonInitVar.cc

src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/ant_py-pythonInitVar.cc > CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.i

src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/ant_py-pythonInitVar.cc -o CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.s

# Object files for target ant_py
ant_py_OBJECTS = \
"CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o" \
"CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o"

# External object files for target ant_py
ant_py_EXTERNAL_OBJECTS =

src/ant/src/_ant_py.a: src/ant/src/CMakeFiles/ant_py.dir/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx.o
src/ant/src/_ant_py.a: src/ant/src/CMakeFiles/ant_py.dir/ant_py-pythonInitVar.cc.o
src/ant/src/_ant_py.a: src/ant/src/CMakeFiles/ant_py.dir/build.make
src/ant/src/_ant_py.a: src/ant/src/CMakeFiles/ant_py.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library _ant_py.a"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && $(CMAKE_COMMAND) -P CMakeFiles/ant_py.dir/cmake_clean_target.cmake
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ant_py.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/ant/src/CMakeFiles/ant_py.dir/build: src/ant/src/_ant_py.a
.PHONY : src/ant/src/CMakeFiles/ant_py.dir/build

src/ant/src/CMakeFiles/ant_py.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src/ant/src && $(CMAKE_COMMAND) -P CMakeFiles/ant_py.dir/cmake_clean.cmake
.PHONY : src/ant/src/CMakeFiles/ant_py.dir/clean

src/ant/src/CMakeFiles/ant_py.dir/depend: src/ant/src/CMakeFiles/ant_py.dir/AntennaChecker-pyPYTHON_wrap.cxx
src/ant/src/CMakeFiles/ant_py.dir/depend: src/ant/src/ant_py-pythonInitVar.cc
src/ant/src/CMakeFiles/ant_py.dir/depend: src/ant/src/ant_py.py
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src/ant/src /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src/ant/src /mnt/raid10/yingjie/OpenROAD/build/src/ant/src/CMakeFiles/ant_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/ant/src/CMakeFiles/ant_py.dir/depend

