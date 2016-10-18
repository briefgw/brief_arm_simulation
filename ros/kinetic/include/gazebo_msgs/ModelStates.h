// Generated by gencpp from file gazebo_msgs/ModelStates.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_MODELSTATES_H
#define GAZEBO_MSGS_MESSAGE_MODELSTATES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>

namespace gazebo_msgs
{
template <class ContainerAllocator>
struct ModelStates_
{
  typedef ModelStates_<ContainerAllocator> Type;

  ModelStates_()
    : name()
    , pose()
    , twist()  {
    }
  ModelStates_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , pose(_alloc)
    , twist(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _pose_type;
  _pose_type pose;

   typedef std::vector< ::geometry_msgs::Twist_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Twist_<ContainerAllocator> >::other >  _twist_type;
  _twist_type twist;




  typedef boost::shared_ptr< ::gazebo_msgs::ModelStates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::ModelStates_<ContainerAllocator> const> ConstPtr;

}; // struct ModelStates_

typedef ::gazebo_msgs::ModelStates_<std::allocator<void> > ModelStates;

typedef boost::shared_ptr< ::gazebo_msgs::ModelStates > ModelStatesPtr;
typedef boost::shared_ptr< ::gazebo_msgs::ModelStates const> ModelStatesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::ModelStates_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::ModelStates_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/tmp/binarydeb/ros-kinetic-gazebo-msgs-2.5.6/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ModelStates_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ModelStates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ModelStates_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48c080191eb15c41858319b4d8a609c2";
  }

  static const char* value(const ::gazebo_msgs::ModelStates_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48c080191eb15c41ULL;
  static const uint64_t static_value2 = 0x858319b4d8a609c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/ModelStates";
  }

  static const char* value(const ::gazebo_msgs::ModelStates_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# broadcast all model states in world frame\n\
string[] name                 # model names\n\
geometry_msgs/Pose[] pose     # desired pose in world frame\n\
geometry_msgs/Twist[] twist   # desired twist in world frame\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::gazebo_msgs::ModelStates_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.pose);
      stream.next(m.twist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ModelStates_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::ModelStates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::ModelStates_<ContainerAllocator>& v)
  {
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "pose[]" << std::endl;
    for (size_t i = 0; i < v.pose.size(); ++i)
    {
      s << indent << "  pose[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose[i]);
    }
    s << indent << "twist[]" << std::endl;
    for (size_t i = 0; i < v.twist.size(); ++i)
    {
      s << indent << "  twist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "    ", v.twist[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_MODELSTATES_H
