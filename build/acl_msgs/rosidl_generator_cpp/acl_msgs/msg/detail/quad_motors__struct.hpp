// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acl_msgs:msg/QuadMotors.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__STRUCT_HPP_
#define ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__acl_msgs__msg__QuadMotors __attribute__((deprecated))
#else
# define DEPRECATED__acl_msgs__msg__QuadMotors __declspec(deprecated)
#endif

namespace acl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadMotors_
{
  using Type = QuadMotors_<ContainerAllocator>;

  explicit QuadMotors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0;
      this->m2 = 0.0;
      this->m3 = 0.0;
      this->m4 = 0.0;
    }
  }

  explicit QuadMotors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0;
      this->m2 = 0.0;
      this->m3 = 0.0;
      this->m4 = 0.0;
    }
  }

  // field types and members
  using _header_type =
    acl_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _m1_type =
    double;
  _m1_type m1;
  using _m2_type =
    double;
  _m2_type m2;
  using _m3_type =
    double;
  _m3_type m3;
  using _m4_type =
    double;
  _m4_type m4;

  // setters for named parameter idiom
  Type & set__header(
    const acl_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__m1(
    const double & _arg)
  {
    this->m1 = _arg;
    return *this;
  }
  Type & set__m2(
    const double & _arg)
  {
    this->m2 = _arg;
    return *this;
  }
  Type & set__m3(
    const double & _arg)
  {
    this->m3 = _arg;
    return *this;
  }
  Type & set__m4(
    const double & _arg)
  {
    this->m4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acl_msgs::msg::QuadMotors_<ContainerAllocator> *;
  using ConstRawPtr =
    const acl_msgs::msg::QuadMotors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::QuadMotors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::QuadMotors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acl_msgs__msg__QuadMotors
    std::shared_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acl_msgs__msg__QuadMotors
    std::shared_ptr<acl_msgs::msg::QuadMotors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadMotors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->m1 != other.m1) {
      return false;
    }
    if (this->m2 != other.m2) {
      return false;
    }
    if (this->m3 != other.m3) {
      return false;
    }
    if (this->m4 != other.m4) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadMotors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadMotors_

// alias to use template instance with default allocator
using QuadMotors =
  acl_msgs::msg::QuadMotors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__STRUCT_HPP_
