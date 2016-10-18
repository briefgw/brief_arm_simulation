// Generated by gencpp from file schunk_canopen_driver/HomeAllRequest.msg
// DO NOT EDIT!


#ifndef SCHUNK_CANOPEN_DRIVER_MESSAGE_HOMEALLREQUEST_H
#define SCHUNK_CANOPEN_DRIVER_MESSAGE_HOMEALLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace schunk_canopen_driver
{
template <class ContainerAllocator>
struct HomeAllRequest_
{
  typedef HomeAllRequest_<ContainerAllocator> Type;

  HomeAllRequest_()
    {
    }
  HomeAllRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> const> ConstPtr;

}; // struct HomeAllRequest_

typedef ::schunk_canopen_driver::HomeAllRequest_<std::allocator<void> > HomeAllRequest;

typedef boost::shared_ptr< ::schunk_canopen_driver::HomeAllRequest > HomeAllRequestPtr;
typedef boost::shared_ptr< ::schunk_canopen_driver::HomeAllRequest const> HomeAllRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace schunk_canopen_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'control_msgs': ['/opt/ros/kinetic/share/control_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "schunk_canopen_driver/HomeAllRequest";
  }

  static const char* value(const ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct HomeAllRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::schunk_canopen_driver::HomeAllRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SCHUNK_CANOPEN_DRIVER_MESSAGE_HOMEALLREQUEST_H
