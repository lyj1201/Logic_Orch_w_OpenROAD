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

# Utility rule file for sta_tags.

# Include any custom commands dependencies for this target.
include src/sta/CMakeFiles/sta_tags.dir/compiler_depend.make

# Include the progress variables for this target.
include src/sta/CMakeFiles/sta_tags.dir/progress.make

src/sta/CMakeFiles/sta_tags:
	cd /mnt/raid10/yingjie/OpenROAD/src/sta && etags -o TAGS app/StaMain.cc dcalc/ArcDelayCalc.cc dcalc/ArnoldiDelayCalc.cc dcalc/ArnoldiReduce.cc dcalc/DcalcAnalysisPt.cc dcalc/DelayCalc.cc dcalc/DmpCeff.cc dcalc/DmpDelayCalc.cc dcalc/GraphDelayCalc.cc dcalc/GraphDelayCalc1.cc dcalc/LumpedCapDelayCalc.cc dcalc/NetCaps.cc dcalc/RCDelayCalc.cc dcalc/SimpleRCDelayCalc.cc dcalc/UnitDelayCalc.cc graph/DelayFloat.cc graph/DelayNormal1.cc graph/DelayNormal2.cc graph/Graph.cc graph/GraphCmp.cc liberty/EquivCells.cc liberty/FuncExpr.cc liberty/InternalPower.cc liberty/LeakagePower.cc liberty/Liberty.cc liberty/LibertyBuilder.cc liberty/LibertyExpr.cc liberty/LibertyExprPvt.hh liberty/LibertyParser.cc liberty/LibertyReader.cc liberty/LibertyWriter.cc liberty/LinearModel.cc liberty/Sequential.cc liberty/TableModel.cc liberty/TimingArc.cc liberty/TimingRole.cc liberty/Units.cc liberty/Wireload.cc network/ConcreteLibrary.cc network/ConcreteNetwork.cc network/HpinDrvrLoad.cc network/Network.cc network/NetworkCmp.cc network/ParseBus.cc network/PortDirection.cc network/SdcNetwork.cc network/VerilogNamespace.cc parasitics/ConcreteParasitics.cc parasitics/EstimateParasitics.cc parasitics/NullParasitics.cc parasitics/Parasitics.cc parasitics/ReduceParasitics.cc parasitics/ReportParasiticAnnotation.cc parasitics/SpefNamespace.cc parasitics/SpefReader.cc parasitics/SpefReaderPvt.hh sdc/Clock.cc sdc/ClockGatingCheck.cc sdc/ClockGroups.cc sdc/ClockInsertion.cc sdc/ClockLatency.cc sdc/CycleAccting.cc sdc/DataCheck.cc sdc/DeratingFactors.cc sdc/DisabledPorts.cc sdc/ExceptionPath.cc sdc/InputDrive.cc sdc/PinPair.cc sdc/PortDelay.cc sdc/PortExtCap.cc sdc/Sdc.cc sdc/SdcGraph.cc sdc/SdcCmdComment.cc sdc/WriteSdc.cc sdf/ReportAnnotation.cc sdf/SdfReader.cc sdf/SdfWriter.cc search/Bfs.cc search/CheckMaxSkews.cc search/CheckMinPeriods.cc search/CheckMinPulseWidths.cc search/CheckCapacitanceLimits.cc search/CheckFanoutLimits.cc search/CheckSlewLimits.cc search/CheckTiming.cc search/ClkInfo.cc search/ClkNetwork.cc search/ClkSkew.cc search/Corner.cc search/Crpr.cc search/FindRegister.cc search/GatedClk.cc search/Genclks.cc search/Latches.cc search/Levelize.cc search/MakeTimingModel.cc search/Path.cc search/PathAnalysisPt.cc search/PathEnd.cc search/PathEnum.cc search/PathEnumed.cc search/PathExpanded.cc search/PathGroup.cc search/PathRef.cc search/PathVertex.cc search/PathVertexRep.cc search/Property.cc search/ReportPath.cc search/Search.cc search/SearchPred.cc search/Sim.cc search/Sta.cc search/StaState.cc search/Tag.cc search/TagGroup.cc search/VertexVisitor.cc search/VisitPathEnds.cc search/VisitPathGroupVertices.cc search/WorstSlack.cc search/WritePathSpice.cc power/Power.cc power/ReadVcdActivities.cc power/Vcd.cc power/VcdReader.cc util/Debug.cc util/DispatchQueue.cc util/Error.cc util/Fuzzy.cc util/Hash.cc util/Machine.cc util/MinMax.cc util/PatternMatch.cc util/Report.cc util/ReportStd.cc util/ReportTcl.cc util/RiseFallMinMax.cc util/RiseFallValues.cc util/Stats.cc util/StringSeq.cc util/StringSet.cc util/StringUtil.cc util/TokenParser.cc util/Transition.cc verilog/VerilogReader.cc verilog/VerilogWriter.cc */*.hh include/sta/*.hh tcl/Init.tcl tcl/Util.tcl tcl/Graph.tcl tcl/Liberty.tcl tcl/Link.tcl tcl/Network.tcl tcl/NetworkEdit.tcl tcl/Sdc.tcl tcl/Search.tcl tcl/Cmds.tcl tcl/Variables.tcl tcl/Sta.tcl tcl/Splash.tcl dcalc/DelayCalc.tcl parasitics/Parasitics.tcl power/Power.tcl sdf/Sdf.tcl verilog/Verilog.tcl

sta_tags: src/sta/CMakeFiles/sta_tags
sta_tags: src/sta/CMakeFiles/sta_tags.dir/build.make
.PHONY : sta_tags

# Rule to build all files generated by this target.
src/sta/CMakeFiles/sta_tags.dir/build: sta_tags
.PHONY : src/sta/CMakeFiles/sta_tags.dir/build

src/sta/CMakeFiles/sta_tags.dir/clean:
	cd /mnt/raid10/yingjie/OpenROAD/build/src/sta && $(CMAKE_COMMAND) -P CMakeFiles/sta_tags.dir/cmake_clean.cmake
.PHONY : src/sta/CMakeFiles/sta_tags.dir/clean

src/sta/CMakeFiles/sta_tags.dir/depend:
	cd /mnt/raid10/yingjie/OpenROAD/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/raid10/yingjie/OpenROAD /mnt/raid10/yingjie/OpenROAD/src/sta /mnt/raid10/yingjie/OpenROAD/build /mnt/raid10/yingjie/OpenROAD/build/src/sta /mnt/raid10/yingjie/OpenROAD/build/src/sta/CMakeFiles/sta_tags.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/sta/CMakeFiles/sta_tags.dir/depend

