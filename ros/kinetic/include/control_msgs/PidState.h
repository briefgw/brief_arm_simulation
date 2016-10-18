// Generated by gencpp from file control_msgs/PidState.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_PIDSTATE_H
#define CONTROL_MSGS_MESSAGE_PIDSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct PidState_
{
  typedef PidState_<ContainerAllocator> Type;

  PidState_()
    : header()
    , timestep()
    , error(0.0)
    , error_dot(0.0)
    , p_error(0.0)
    , i_error(0.0)
    , d_error(0.0)
    , p_term(0.0)
    , i_term(0.0)
    , d_term(0.0)
    , i_max(0.0)
    , i_min(0.0)
    , output(0.0)  {
    }
  PidState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , timestep()
    , error(0.0)
    , error_dot(0.0)
    , p_error(0.0)
    , i_error(0.0)
    , d_error(0.0)
    , p_term(0.0)
    , i_term(0.0)
    , d_term(0.0)
    , i_max(0.0)
    , i_min(0.0)
    , output(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Duration _timestep_type;
  _timestep_type timestep;

   typedef double _error_type;
  _error_type error;

   typedef double _error_dot_type;
  _error_dot_type error_dot;

   typedef double _p_error_type;
  _p_error_type p_error;

   typedef double _i_error_type;
  _i_error_type i_error;

   typedef double _d_error_type;
  _d_error_type d_error;

   typedef double _p_term_type;
  _p_term_type p_term;

   typedef double _i_term_type;
  _i_term_type i_term;

   typedef double _d_term_type;
  _d_term_type d_term;

   typedef double _i_max_type;
  _i_max_type i_max;

   typedef double _i_min_type;
  _i_min_type i_min;

   typedef double _output_type;
  _output_type output;




  typedef boost::shared_ptr< ::control_msgs::PidState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::PidState_<ContainerAllocator> const> ConstPtr;

}; // struct PidState_

typedef ::control_msgs::PidState_<std::allocator<void> > PidState;

typedef boost::shared_ptr< ::control_msgs::PidState > PidStatePtr;
typedef boost::shared_ptr< ::control_msgs::PidState const> PidStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::PidState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::PidState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['/tmp/binarydeb/ros-kinetic-control-msgs-1.4.0/obj-x86_64-linux-gnu/devel/share/control_msgs/msg', '/tmp/binarydeb/ros-kinetic-control-msgs-1.4.0/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::PidState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::PidState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::PidState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::PidState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::PidState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::PidState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::PidState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b138ec00e886c10e73f27e8712252ea6";
  }

  static const char* value(const ::control_msgs::PidState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb138ec00e886c10eULL;
  static const uint64_t static_value2 = 0x73f27e8712252ea6ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::PidState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/PidState";
  }

  static const char* value(const ::control_msgs::PidState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::PidState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
duration timestep\n\
float64 error\n\
float64 error_dot\n\
float64 p_error\n\
float64 i_error\n\
float64 d_error\n\
float64 p_term\n\
float64 i_term\n\
float64 d_term\n\
float64 i_max\n\
float64 i_min\n\
float64 output\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::control_msgs::PidState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::PidState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.timestep);
      stream.next(m.error);
      stream.next(m.error_dot);
      stream.next(m.p_error);
      stream.next(m.i_error);
      stream.next(m.d_error);
      stream.next(m.p_term);
      stream.next(m.i_term);
      stream.next(m.d_term);
      stream.next(m.i_max);
      stream.next(m.i_min);
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PidState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::PidState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::PidState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "timestep: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timestep);
    s << indent << "error: ";
    Printer<double>::stream(s, indent + "  ", v.error);
    s << indent << "error_dot: ";
    Printer<double>::stream(s, indent + "  ", v.error_dot);
    s << indent << "p_error: ";
    Printer<double>::stream(s, indent + "  ", v.p_error);
    s << indent << "i_error: ";
    Printer<double>::stream(s, indent + "  ", v.i_error);
    s << indent << "d_error: ";
    Printer<double>::stream(s, indent + "  ", v.d_error);
    s << indent << "p_term: ";
    Printer<double>::stream(s, indent + "  ", v.p_term);
    s << indent << "i_term: ";
    Printer<double>::stream(s, indent + "  ", v.i_term);
    s << indent << "d_term: ";
    Printer<double>::stream(s, indent + "  ", v.d_term);
    s << indent << "i_max: ";
    Printer<double>::stream(s, indent + "  ", v.i_max);
    s << indent << "i_min: ";
    Printer<double>::stream(s, indent + "  ", v.i_min);
    s << indent << "output: ";
    Printer<double>::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_PIDSTATE_H
