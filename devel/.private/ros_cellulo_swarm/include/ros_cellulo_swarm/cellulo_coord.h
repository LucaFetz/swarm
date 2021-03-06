// Generated by gencpp from file ros_cellulo_swarm/cellulo_coord.msg
// DO NOT EDIT!


#ifndef ROS_CELLULO_SWARM_MESSAGE_CELLULO_COORD_H
#define ROS_CELLULO_SWARM_MESSAGE_CELLULO_COORD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_cellulo_swarm
{
template <class ContainerAllocator>
struct cellulo_coord_
{
  typedef cellulo_coord_<ContainerAllocator> Type;

  cellulo_coord_()
    : value(0.0)
    , velocity(0.0)  {
    }
  cellulo_coord_(const ContainerAllocator& _alloc)
    : value(0.0)
    , velocity(0.0)  {
  (void)_alloc;
    }



   typedef float _value_type;
  _value_type value;

   typedef float _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> const> ConstPtr;

}; // struct cellulo_coord_

typedef ::ros_cellulo_swarm::cellulo_coord_<std::allocator<void> > cellulo_coord;

typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_coord > cellulo_coordPtr;
typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_coord const> cellulo_coordConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_cellulo_swarm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'ros_cellulo_swarm': ['/home/tprobotics/Documents/PROJECTS/catkin_ws/src/cellulo_swarm_practical_base/ros_cellulo_swarm/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39825886b3f5e61f4aa7ddf0db826301";
  }

  static const char* value(const ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39825886b3f5e61fULL;
  static const uint64_t static_value2 = 0x4aa7ddf0db826301ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_cellulo_swarm/cellulo_coord";
  }

  static const char* value(const ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 value\n\
float32 velocity\n\
";
  }

  static const char* value(const ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cellulo_coord_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_cellulo_swarm::cellulo_coord_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CELLULO_SWARM_MESSAGE_CELLULO_COORD_H
