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
include src/dbSta/src/CMakeFiles/dbSta.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.make

# Include the progress variables for this target.
include src/dbSta/src/CMakeFiles/dbSta.dir/progress.make

# Include the compile flags for this target's objects.
include src/dbSta/src/CMakeFiles/dbSta.dir/flags.make

src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx: ../src/dbSta/src/dbSta.i
src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Swig compile dbSta.i for tcl"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /mnt/raid10/software/local/bin/cmake -E make_directory /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/CMakeFiles/dbSta.dir
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /mnt/raid10/software/local/bin/cmake -E env SWIG_LIB=/usr/local/share/swig/4.2.0 /usr/local/bin/swig -tcl -I/mnt/raid10/yingjie/OpenROAD/src/sta -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/common -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/swig/tcl -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/mnt/raid10/yingjie/OpenROAD/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/dbSta/src/../include -I/mnt/raid10/yingjie/OpenROAD/src/sta/include/sta -I/mnt/raid10/yingjie/OpenROAD/src/sta -I/mnt/raid10/yingjie/OpenROAD/src/sta/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/include -I/mnt/raid10/yingjie/OpenROAD/src/utl/src -I/usr/local/include -I/usr/local/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include/odb -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/def -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/def/defzlib -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/include -I/usr/include -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lef -I/mnt/raid10/yingjie/OpenROAD/src/odb/src/lef/lefzlib -I/mnt/raid10/yingjie/OpenROAD/src/gui/include -namespace -prefix sta -Werror -w317,325,378,401,402,467,472,503,509 -outdir /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src -c++ -module dbSta -MF /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.i.d -MD -o /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSta.i

src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Graph.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Liberty.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Network.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/NetworkEdit.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Sdc.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Search.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Cmds.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Variables.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Sta.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/tcl/Splash.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/dcalc/DelayCalc.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/parasitics/Parasitics.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/power/Power.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/sta/sdf/Sdf.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/dbSta/src/dbReadVerilog.tcl
src/dbSta/src/dbSta-tclInitVar.cc: ../src/dbSta/src/dbSta.tcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating dbSta-tclInitVar.cc"
	cd /mnt/raid10/yingjie/OpenROAD/src/dbSta/src && /mnt/raid10/yingjie/OpenROAD/src/sta/etc/TclEncode.tcl /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/dbSta-tclInitVar.cc dbSta_tcl_inits /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Graph.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Liberty.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Network.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/NetworkEdit.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Sdc.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Search.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Cmds.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Variables.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Sta.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/tcl/Splash.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/dcalc/DelayCalc.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/Parasitics.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/power/Power.tcl /mnt/raid10/yingjie/OpenROAD/src/sta/sdf/Sdf.tcl /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbReadVerilog.tcl /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSta.tcl

src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o: src/dbSta/src/CMakeFiles/dbSta.dir/flags.make
src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o: src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx
src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -MD -MT src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o -MF CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o.d -o CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o -c /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx

src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -E /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx > CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.i

src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-cast-qual -Wno-missing-braces -S /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx -o CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.s

src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/flags.make
src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o: src/dbSta/src/dbSta-tclInitVar.cc
src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o -MF CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o.d -o CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o -c /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/dbSta-tclInitVar.cc

src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/dbSta-tclInitVar.cc > CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.i

src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/dbSta-tclInitVar.cc -o CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.s

src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/flags.make
src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.o: ../src/dbSta/src/dbSta.cc
src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.o -MF CMakeFiles/dbSta.dir/dbSta.cc.o.d -o CMakeFiles/dbSta.dir/dbSta.cc.o -c /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSta.cc

src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbSta.dir/dbSta.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSta.cc > CMakeFiles/dbSta.dir/dbSta.cc.i

src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbSta.dir/dbSta.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSta.cc -o CMakeFiles/dbSta.dir/dbSta.cc.s

src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/flags.make
src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.o: ../src/dbSta/src/dbNetwork.cc
src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.o -MF CMakeFiles/dbSta.dir/dbNetwork.cc.o.d -o CMakeFiles/dbSta.dir/dbNetwork.cc.o -c /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbNetwork.cc

src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbSta.dir/dbNetwork.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbNetwork.cc > CMakeFiles/dbSta.dir/dbNetwork.cc.i

src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbSta.dir/dbNetwork.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbNetwork.cc -o CMakeFiles/dbSta.dir/dbNetwork.cc.s

src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/flags.make
src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o: ../src/dbSta/src/dbSdcNetwork.cc
src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o -MF CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o.d -o CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o -c /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSdcNetwork.cc

src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbSta.dir/dbSdcNetwork.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSdcNetwork.cc > CMakeFiles/dbSta.dir/dbSdcNetwork.cc.i

src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbSta.dir/dbSdcNetwork.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbSdcNetwork.cc -o CMakeFiles/dbSta.dir/dbSdcNetwork.cc.s

src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/flags.make
src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.o: ../src/dbSta/src/dbReadVerilog.cc
src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.o: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.o -MF CMakeFiles/dbSta.dir/dbReadVerilog.cc.o.d -o CMakeFiles/dbSta.dir/dbReadVerilog.cc.o -c /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbReadVerilog.cc

src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbSta.dir/dbReadVerilog.cc.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbReadVerilog.cc > CMakeFiles/dbSta.dir/dbReadVerilog.cc.i

src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbSta.dir/dbReadVerilog.cc.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/dbReadVerilog.cc -o CMakeFiles/dbSta.dir/dbReadVerilog.cc.s

src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.o: src/dbSta/src/CMakeFiles/dbSta.dir/flags.make
src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.o: ../src/dbSta/src/heatMap.cpp
src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.o: src/dbSta/src/CMakeFiles/dbSta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.o"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.o -MF CMakeFiles/dbSta.dir/heatMap.cpp.o.d -o CMakeFiles/dbSta.dir/heatMap.cpp.o -c /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/heatMap.cpp

src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dbSta.dir/heatMap.cpp.i"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/heatMap.cpp > CMakeFiles/dbSta.dir/heatMap.cpp.i

src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dbSta.dir/heatMap.cpp.s"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && /opt/rh/devtoolset-8/root/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/heatMap.cpp -o CMakeFiles/dbSta.dir/heatMap.cpp.s

# Object files for target dbSta
dbSta_OBJECTS = \
"CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o" \
"CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o" \
"CMakeFiles/dbSta.dir/dbSta.cc.o" \
"CMakeFiles/dbSta.dir/dbNetwork.cc.o" \
"CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o" \
"CMakeFiles/dbSta.dir/dbReadVerilog.cc.o" \
"CMakeFiles/dbSta.dir/heatMap.cpp.o"

# External object files for target dbSta
dbSta_EXTERNAL_OBJECTS =

src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx.o
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/dbSta-tclInitVar.cc.o
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/dbSta.cc.o
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/dbNetwork.cc.o
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/dbSdcNetwork.cc.o
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/dbReadVerilog.cc.o
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/heatMap.cpp.o
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/build.make
src/dbSta/src/dbSta.a: src/dbSta/src/CMakeFiles/dbSta.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/raid10/yingjie/OpenROAD/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library dbSta.a"
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && $(CMAKE_COMMAND) -P CMakeFiles/dbSta.dir/cmake_clean_target.cmake
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dbSta.dir/link.txt --verbose=$(VERBOSE)
	cd /mnt/raid10/yingjie/OpenROAD/src/dbSta && /mnt/raid10/yingjie/OpenROAD/etc/find_messages.py > /mnt/raid10/yingjie/OpenROAD/src/dbSta/src/../messages.txt

# Rule to build all files generated by this target.
src/dbSta/src/CMakeFiles/dbSta.dir/build: src/dbSta/src/dbSta.a
.PHONY : src/dbSta/src/CMakeFiles/dbSta.dir/build

src/dbSta/src/CMakeFiles/dbSta.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src && $(CMAKE_COMMAND) -P CMakeFiles/dbSta.dir/cmake_clean.cmake
.PHONY : src/dbSta/src/CMakeFiles/dbSta.dir/clean

src/dbSta/src/CMakeFiles/dbSta.dir/depend: src/dbSta/src/CMakeFiles/dbSta.dir/dbStaTCL_wrap.cxx
src/dbSta/src/CMakeFiles/dbSta.dir/depend: src/dbSta/src/dbSta-tclInitVar.cc
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src/dbSta/src /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src /mnt/raid10/yingjie/OpenROAD/build/src/dbSta/src/CMakeFiles/dbSta.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/dbSta/src/CMakeFiles/dbSta.dir/depend
