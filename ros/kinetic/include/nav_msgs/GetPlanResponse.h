// Generated by gencpp from file nav_msgs/GetPlanResponse.msg
// DO NOT EDIT!


#ifndef NAV_MSGS_MESSAGE_GETPLANRESPONSE_H
#define NAV_MSGS_MESSAGE_GETPLANRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/Path.h>

namespace nav_msgs
{
template <class ContainerAllocator>
struct GetPlanResponse_
{
  typedef GetPlanResponse_<ContainerAllocator> Type;

  GetPlanResponse_()
    : plan()  {
    }
  GetPlanResponse_(const ContainerAllocator& _alloc)
    : plan(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::Path_<ContainerAllocator>  _plan_type;
  _plan_type plan;




  typedef boost::shared_ptr< ::nav_msgs::GetPlanResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_msgs::GetPlanResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPlanResponse_

typedef ::nav_msgs::GetPlanResponse_<std::allocator<void> > GetPlanResponse;

typedef boost::shared_ptr< ::nav_msgs::GetPlanResponse > GetPlanResponsePtr;
typedef boost::shared_ptr< ::nav_msgs::GetPlanResponse const> GetPlanResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_msgs::GetPlanResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nav_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/tmp/binarydeb/ros-kinetic-nav-msgs-1.12.4/msg', '/tmp/binarydeb/ros-kinetic-nav-msgs-1.12.4/obj-x86_64-linux-gnu/devel/share/nav_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetPlanResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetPlanResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetPlanResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0002bc113c0259d71f6cf8cbc9430e18";
  }

  static const char* value(const ::nav_msgs::GetPlanResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0002bc113c0259d7ULL;
  static const uint64_t static_value2 = 0x1f6cf8cbc9430e18ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/GetPlanResponse";
  }

  static const char* value(const ::nav_msgs::GetPlanResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/Path plan\n\
\n\
\n\
================================================================================\n\
MSG: nav_msgs/Path\n\
#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
geometry_msgs/PoseStamped[] poses\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::nav_msgs::GetPlanResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.plan);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetPlanResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_msgs::GetPlanResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_msgs::GetPlanResponse_<ContainerAllocator>& v)
  {
    s << indent << "plan: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.plan);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_MSGS_MESSAGE_GETPLANRESPONSE_H
