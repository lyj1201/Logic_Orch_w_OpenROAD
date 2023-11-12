# This file was automatically generated by SWIG (https://www.swig.org).
# Version 4.2.0
#
# Do not make changes to this file unless you know what you are doing - modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
# Import the low-level C/C++ module
if __package__ or "." in __name__:
    from . import _utl_py
else:
    import _utl_py

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)


def _swig_setattr_nondynamic_instance_variable(set):
    def set_instance_attr(self, name, value):
        if name == "this":
            set(self, name, value)
        elif name == "thisown":
            self.this.own(value)
        elif hasattr(self, name) and isinstance(getattr(type(self), name), property):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add instance attributes to %s" % self)
    return set_instance_attr


def _swig_setattr_nondynamic_class_variable(set):
    def set_class_attr(cls, name, value):
        if hasattr(cls, name) and not isinstance(getattr(cls, name), property):
            set(cls, name, value)
        else:
            raise AttributeError("You cannot add class attributes to %s" % cls)
    return set_class_attr


def _swig_add_metaclass(metaclass):
    """Class decorator for adding a metaclass to a SWIG wrapped class - a slimmed down version of six.add_metaclass"""
    def wrapper(cls):
        return metaclass(cls.__name__, cls.__bases__, cls.__dict__.copy())
    return wrapper


class _SwigNonDynamicMeta(type):
    """Meta class to enforce nondynamic attributes (no new attributes) for a class"""
    __setattr__ = _swig_setattr_nondynamic_class_variable(type.__setattr__)


ANT = _utl_py.ANT
CTS = _utl_py.CTS
DPL = _utl_py.DPL
DPO = _utl_py.DPO
DRT = _utl_py.DRT
DST = _utl_py.DST
FIN = _utl_py.FIN
FLW = _utl_py.FLW
GPL = _utl_py.GPL
GRT = _utl_py.GRT
GUI = _utl_py.GUI
PAD = _utl_py.PAD
IFP = _utl_py.IFP
MPL = _utl_py.MPL
ODB = _utl_py.ODB
ORD = _utl_py.ORD
PAR = _utl_py.PAR
PDN = _utl_py.PDN
PDR = _utl_py.PDR
PPL = _utl_py.PPL
PSM = _utl_py.PSM
PSN = _utl_py.PSN
RCX = _utl_py.RCX
RMP = _utl_py.RMP
RSZ = _utl_py.RSZ
STA = _utl_py.STA
STT = _utl_py.STT
TAP = _utl_py.TAP
UKN = _utl_py.UKN
SIZE = _utl_py.SIZE
class Logger(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def __init__(self, filename=None, metrics_filename=None):
        _utl_py.Logger_swiginit(self, _utl_py.new_Logger(filename, metrics_filename))
    __swig_destroy__ = _utl_py.delete_Logger

    @staticmethod
    def findToolId(tool_name):
        return _utl_py.Logger_findToolId(tool_name)

    def metric(self, metric, value):
        return _utl_py.Logger_metric(self, metric, value)

    def setDebugLevel(self, tool, group, level):
        return _utl_py.Logger_setDebugLevel(self, tool, group, level)

    def debugCheck(self, tool, group, level):
        return _utl_py.Logger_debugCheck(self, tool, group, level)

    def suppressMessage(self, tool, id):
        return _utl_py.Logger_suppressMessage(self, tool, id)

    def addSink(self, sink):
        return _utl_py.Logger_addSink(self, sink)

    def removeSink(self, sink):
        return _utl_py.Logger_removeSink(self, sink)

    def addMetricsSink(self, metrics_filename):
        return _utl_py.Logger_addMetricsSink(self, metrics_filename)

    def setMetricsStage(self, format):
        return _utl_py.Logger_setMetricsStage(self, format)

    def clearMetricsStage(self):
        return _utl_py.Logger_clearMetricsStage(self)

    def pushMetricsStage(self, format):
        return _utl_py.Logger_pushMetricsStage(self, format)

    def popMetricsStage(self):
        return _utl_py.Logger_popMetricsStage(self)

# Register Logger in _utl_py:
_utl_py.Logger_swigregister(Logger)

def Logger_findToolId(tool_name):
    return _utl_py.Logger_findToolId(tool_name)


def report(msg):
    return _utl_py.report(msg)

def info(tool, id, msg):
    return _utl_py.info(tool, id, msg)

def warn(tool, id, msg):
    return _utl_py.warn(tool, id, msg)

def error(tool, id, msg):
    return _utl_py.error(tool, id, msg)

def critical(tool, id, msg):
    return _utl_py.critical(tool, id, msg)

def open_metrics(metrics_filename):
    return _utl_py.open_metrics(metrics_filename)

def metric(metric, value):
    return _utl_py.metric(metric, value)

def metric_integer(metric, value):
    return _utl_py.metric_integer(metric, value)

def metric_float(metric, value):
    return _utl_py.metric_float(metric, value)

def set_metrics_stage(fmt):
    return _utl_py.set_metrics_stage(fmt)

def clear_metrics_stage():
    return _utl_py.clear_metrics_stage()

def push_metrics_stage(fmt):
    return _utl_py.push_metrics_stage(fmt)

def pop_metrics_stage():
    return _utl_py.pop_metrics_stage()

def suppress_message(tool, id):
    return _utl_py.suppress_message(tool, id)
