// Generated by gencpp from file schunk_canopen_driver/HomeWithIDsRequest.msg
// DO NOT EDIT!


#ifndef SCHUNK_CANOPEN_DRIVER_MESSAGE_HOMEWITHIDSREQUEST_H
#define SCHUNK_CANOPEN_DRIVER_MESSAGE_HOMEWITHIDSREQUEST_H


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
struct HomeWithIDsRequest_
{
  typedef HomeWithIDsRequest_<ContainerAllocator> Type;

  HomeWithIDsRequest_()
    : node_ids()  {
    }
  HomeWithIDsRequest_(const ContainerAllocator& _alloc)
    : node_ids(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _node_ids_type;
  _node_ids_type node_ids;




  typedef boost::shared_ptr< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct HomeWithIDsRequest_

typedef ::schunk_canopen_driver::HomeWithIDsRequest_<std::allocator<void> > HomeWithIDsRequest;

typedef boost::shared_ptr< ::schunk_canopen_driver::HomeWithIDsRequest > HomeWithIDsRequestPtr;
typedef boost::shared_ptr< ::schunk_canopen_driver::HomeWithIDsRequest const> HomeWithIDsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace schunk_canopen_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'control_msgs': ['/opt/ros/kinetic/share/control_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36ef7d6b0fc32d5581b8c1de00e0e4a4";
  }

  static const char* value(const ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36ef7d6b0fc32d55ULL;
  static const uint64_t static_value2 = 0x81b8c1de00e0e4a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "schunk_canopen_driver/HomeWithIDsRequest";
  }

  static const char* value(const ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8[] node_ids\n\
";
  }

  static const char* value(const ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct HomeWithIDsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::schunk_canopen_driver::HomeWithIDsRequest_<ContainerAllocator>& v)
  {
    s << indent << "node_ids[]" << std::endl;
    for (size_t i = 0; i < v.node_ids.size(); ++i)
    {
      s << indent << "  node_ids[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.node_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHUNK_CANOPEN_DRIVER_MESSAGE_HOMEWITHIDSREQUEST_H
