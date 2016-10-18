# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rqt_py_common/ArrayVal.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import rqt_py_common.msg

class ArrayVal(genpy.Message):
  _md5sum = "e8748d44f2f20aabca0c342b053289ff"
  _type = "rqt_py_common/ArrayVal"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """Val[5] vals

================================================================================
MSG: rqt_py_common/Val
float64[5] floats
"""
  __slots__ = ['vals']
  _slot_types = ['rqt_py_common/Val[5]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       vals

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ArrayVal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.vals is None:
        self.vals = [rqt_py_common.msg.Val(),rqt_py_common.msg.Val(),rqt_py_common.msg.Val(),rqt_py_common.msg.Val(),rqt_py_common.msg.Val()]
    else:
      self.vals = [rqt_py_common.msg.Val(),rqt_py_common.msg.Val(),rqt_py_common.msg.Val(),rqt_py_common.msg.Val(),rqt_py_common.msg.Val()]

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      for val1 in self.vals:
        buff.write(_struct_5d.pack(*val1.floats))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.vals is None:
        self.vals = None
      end = 0
      self.vals = []
      for i in range(0, 5):
        val1 = rqt_py_common.msg.Val()
        start = end
        end += 40
        val1.floats = _struct_5d.unpack(str[start:end])
        self.vals.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      for val1 in self.vals:
        buff.write(val1.floats.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.vals is None:
        self.vals = None
      end = 0
      self.vals = []
      for i in range(0, 5):
        val1 = rqt_py_common.msg.Val()
        start = end
        end += 40
        val1.floats = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=5)
        self.vals.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_5d = struct.Struct("<5d")
