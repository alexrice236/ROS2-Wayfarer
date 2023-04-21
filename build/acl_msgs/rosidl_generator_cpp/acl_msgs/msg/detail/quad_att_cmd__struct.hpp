// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acl_msgs:msg/QuadAttCmd.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__STRUCT_HPP_
#define ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "acl_msgs/msg/detail/header__struct.hpp"
// Member 'att'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'rate'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acl_msgs__msg__QuadAttCmd __attribute__((deprecated))
#else
# define DEPRECATED__acl_msgs__msg__QuadAttCmd __declspec(deprecated)
#endif

namespace acl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadAttCmd_
{
  using Type = QuadAttCmd_<ContainerAllocator>;

  explicit QuadAttCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    att(_init),
    rate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->att_status = 0;
    }
  }

  explicit QuadAttCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    att(_alloc, _init),
    rate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->att_status = 0;
    }
  }

  // field types and members
  using _header_type =
    acl_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _att_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _att_type att;
  using _rate_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rate_type rate;
  using _throttle_type =
    double;
  _throttle_type throttle;
  using _att_status_type =
    int16_t;
  _att_status_type att_status;

  // setters for named parameter idiom
  Type & set__header(
    const acl_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__att(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->att = _arg;
    return *this;
  }
  Type & set__rate(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rate = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__att_status(
    const int16_t & _arg)
  {
    this->att_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acl_msgs::msg::QuadAttCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const acl_msgs::msg::QuadAttCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::QuadAttCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::QuadAttCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acl_msgs__msg__QuadAttCmd
    std::shared_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acl_msgs__msg__QuadAttCmd
    std::shared_ptr<acl_msgs::msg::QuadAttCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadAttCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->att != other.att) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->att_status != other.att_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadAttCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadAttCmd_

// alias to use template instance with default allocator
using QuadAttCmd =
  acl_msgs::msg::QuadAttCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__STRUCT_HPP_
