// Generated by gencpp from file work_pkg/CustomMsg.msg
// DO NOT EDIT!


#ifndef WORK_PKG_MESSAGE_CUSTOMMSG_H
#define WORK_PKG_MESSAGE_CUSTOMMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace work_pkg
{
template <class ContainerAllocator>
struct CustomMsg_
{
  typedef CustomMsg_<ContainerAllocator> Type;

  CustomMsg_()
    : id(0)
    , value(0.0)
    , name()  {
    }
  CustomMsg_(const ContainerAllocator& _alloc)
    : id(0)
    , value(0.0)
    , name(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef double _value_type;
  _value_type value;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;





  typedef boost::shared_ptr< ::work_pkg::CustomMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::work_pkg::CustomMsg_<ContainerAllocator> const> ConstPtr;

}; // struct CustomMsg_

typedef ::work_pkg::CustomMsg_<std::allocator<void> > CustomMsg;

typedef boost::shared_ptr< ::work_pkg::CustomMsg > CustomMsgPtr;
typedef boost::shared_ptr< ::work_pkg::CustomMsg const> CustomMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::work_pkg::CustomMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::work_pkg::CustomMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::work_pkg::CustomMsg_<ContainerAllocator1> & lhs, const ::work_pkg::CustomMsg_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.value == rhs.value &&
    lhs.name == rhs.name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::work_pkg::CustomMsg_<ContainerAllocator1> & lhs, const ::work_pkg::CustomMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace work_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::work_pkg::CustomMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::work_pkg::CustomMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::work_pkg::CustomMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::work_pkg::CustomMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::work_pkg::CustomMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::work_pkg::CustomMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::work_pkg::CustomMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "050f1d767b31899d38d360e2a43a147f";
  }

  static const char* value(const ::work_pkg::CustomMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x050f1d767b31899dULL;
  static const uint64_t static_value2 = 0x38d360e2a43a147fULL;
};

template<class ContainerAllocator>
struct DataType< ::work_pkg::CustomMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "work_pkg/CustomMsg";
  }

  static const char* value(const ::work_pkg::CustomMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::work_pkg::CustomMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"float64 value\n"
"string name\n"
;
  }

  static const char* value(const ::work_pkg::CustomMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::work_pkg::CustomMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.value);
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CustomMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::work_pkg::CustomMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::work_pkg::CustomMsg_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "value: ";
    Printer<double>::stream(s, indent + "  ", v.value);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WORK_PKG_MESSAGE_CUSTOMMSG_H
