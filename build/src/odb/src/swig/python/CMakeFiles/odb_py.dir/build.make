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
include src/odb/src/swig/python/CMakeFiles/odb_py.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/odb/src/swig/python/CMakeFiles/odb_py.dir/compiler_depend.make

# Include the progress variables for this target.
include src/odb/src/swig/python/CMakeFiles/odb_py.dir/progress.make

# Include the compile flags for this target's objects.
include src/odb/src/swig/python/CMakeFiles/odb_py.dir/flags.make

src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx: ../src/odb/src/swig/common/odb.i
src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx: src/odb/src/swig/python/CMakeFiles/odb_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Swig compile ../common/odb.i for python"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /mnt/raid10/software/local/bin/cmake -E make_directory /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/CMakeFiles/odb_py.dir
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /mnt/raid10/software/local/bin/cmake -E env SWIG_LIB=/usr/local/share/swig/4.2.0 /usr/local/bin/swig -python -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/python -I/mnt/raid10/yingjie/OpenROAD/include -I/mnt/raid10/software/local/include/python3.9 -I/mnt/raid10/yingjie/OpenROAD/src/odb/include/odb -I/mnt/raid10/software/local/include/python3.9 -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/src -I/usr/local/include -I/usr/local/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include/odb -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/defzlib -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lefzlib -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/common/. -flatstaticmethod -Werror -w317,325,378,401,402,467,472,503,509 -outdir /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python -c++ -module odb_py -interface _odb_py -MF /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb.i.d -MD -o /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx /mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/common/odb.i

src/odb/src/swig/python/odb_py.py: src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate src/odb/src/swig/python/odb_py.py

src/odb/src/swig/python/odb_py-pythonInitVar.cc: src/odb/src/swig/python/odb_py.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating odb_py-pythonInitVar.cc"
	cd /mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/python && /mnt/raid10/yingjie/OpenROAD/src/sta/etc/TclEncode.tcl /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/odb_py-pythonInitVar.cc odb_py_python_inits /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/odb_py.py

src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o: src/odb/src/swig/python/CMakeFiles/odb_py.dir/flags.make
src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o: src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx
src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o: src/odb/src/swig/python/CMakeFiles/odb_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -MD -MT src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o -MF CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o.d -o CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o -c /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx

src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -E /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx > CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.i

src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -S /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx -o CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.s

src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o: src/odb/src/swig/python/CMakeFiles/odb_py.dir/flags.make
src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o: src/odb/src/swig/python/odb_py-pythonInitVar.cc
src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o: src/odb/src/swig/python/CMakeFiles/odb_py.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o -MF CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o.d -o CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o -c /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/odb_py-pythonInitVar.cc

src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/odb_py-pythonInitVar.cc > CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.i

src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/odb_py-pythonInitVar.cc -o CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.s

# Object files for target odb_py
odb_py_OBJECTS = \
"CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o" \
"CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o"

# External object files for target odb_py
odb_py_EXTERNAL_OBJECTS =

src/odb/src/swig/python/_odb_py.a: src/odb/src/swig/python/CMakeFiles/odb_py.dir/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx.o
src/odb/src/swig/python/_odb_py.a: src/odb/src/swig/python/CMakeFiles/odb_py.dir/odb_py-pythonInitVar.cc.o
src/odb/src/swig/python/_odb_py.a: src/odb/src/swig/python/CMakeFiles/odb_py.dir/build.make
src/odb/src/swig/python/_odb_py.a: src/odb/src/swig/python/CMakeFiles/odb_py.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library _odb_py.a"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && $(CMAKE_COMMAND) -P CMakeFiles/odb_py.dir/cmake_clean_target.cmake
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/odb_py.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/odb/src/swig/python/CMakeFiles/odb_py.dir/build: src/odb/src/swig/python/_odb_py.a
.PHONY : src/odb/src/swig/python/CMakeFiles/odb_py.dir/build

src/odb/src/swig/python/CMakeFiles/odb_py.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python && $(CMAKE_COMMAND) -P CMakeFiles/odb_py.dir/cmake_clean.cmake
.PHONY : src/odb/src/swig/python/CMakeFiles/odb_py.dir/clean

src/odb/src/swig/python/CMakeFiles/odb_py.dir/depend: src/odb/src/swig/python/CMakeFiles/odb_py.dir/odbPYTHON_wrap.cxx
src/odb/src/swig/python/CMakeFiles/odb_py.dir/depend: src/odb/src/swig/python/odb_py-pythonInitVar.cc
src/odb/src/swig/python/CMakeFiles/odb_py.dir/depend: src/odb/src/swig/python/odb_py.py
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/python /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python /mnt/raid10/yingjie/OpenROAD/build/src/odb/src/swig/python/CMakeFiles/odb_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/odb/src/swig/python/CMakeFiles/odb_py.dir/depend

