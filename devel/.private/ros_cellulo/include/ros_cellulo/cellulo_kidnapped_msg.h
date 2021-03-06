// Generated by gencpp from file ros_cellulo/cellulo_kidnapped_msg.msg
// DO NOT EDIT!


#ifndef ROS_CELLULO_MESSAGE_CELLULO_KIDNAPPED_MSG_H
#define ROS_CELLULO_MESSAGE_CELLULO_KIDNAPPED_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ros_cellulo
{
template <class ContainerAllocator>
struct cellulo_kidnapped_msg_
{
  typedef cellulo_kidnapped_msg_<ContainerAllocator> Type;

  cellulo_kidnapped_msg_()
    : header()
    , Kidnapped(false)  {
    }
  cellulo_kidnapped_msg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , Kidnapped(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _Kidnapped_type;
  _Kidnapped_type Kidnapped;





  typedef boost::shared_ptr< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> const> ConstPtr;

}; // struct cellulo_kidnapped_msg_

typedef ::ros_cellulo::cellulo_kidnapped_msg_<std::allocator<void> > cellulo_kidnapped_msg;

typedef boost::shared_ptr< ::ros_cellulo::cellulo_kidnapped_msg > cellulo_kidnapped_msgPtr;
typedef boost::shared_ptr< ::ros_cellulo::cellulo_kidnapped_msg const> cellulo_kidnapped_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_cellulo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'ros_cellulo': ['/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fd84e6888c9c70c3657abf61d1bb0c9e";
  }

  static const char* value(const ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfd84e6888c9c70c3ULL;
  static const uint64_t static_value2 = 0x657abf61d1bb0c9eULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_cellulo/cellulo_kidnapped_msg";
  }

  static const char* value(const ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool Kidnapped\n\
\n\
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

  static const char* value(const ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.Kidnapped);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cellulo_kidnapped_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_cellulo::cellulo_kidnapped_msg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "Kidnapped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Kidnapped);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CELLULO_MESSAGE_CELLULO_KIDNAPPED_MSG_H
