// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acl_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
#define ACL_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_

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
// Member 'state_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'pos'
// Member 'vel'
// Member 'w'
// Member 'abias'
// Member 'gbias'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'quat'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acl_msgs__msg__State __attribute__((deprecated))
#else
# define DEPRECATED__acl_msgs__msg__State __declspec(deprecated)
#endif

namespace acl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  explicit State_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state_stamp(_init),
    pos(_init),
    vel(_init),
    quat(_init),
    w(_init),
    abias(_init),
    gbias(_init)
  {
    (void)_init;
  }

  explicit State_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state_stamp(_alloc, _init),
    pos(_alloc, _init),
    vel(_alloc, _init),
    quat(_alloc, _init),
    w(_alloc, _init),
    abias(_alloc, _init),
    gbias(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    acl_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _state_stamp_type state_stamp;
  using _pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _pos_type pos;
  using _vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_type vel;
  using _quat_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quat_type quat;
  using _w_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _w_type w;
  using _abias_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _abias_type abias;
  using _gbias_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gbias_type gbias;

  // setters for named parameter idiom
  Type & set__header(
    const acl_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->state_stamp = _arg;
    return *this;
  }
  Type & set__pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__quat(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quat = _arg;
    return *this;
  }
  Type & set__w(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__abias(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->abias = _arg;
    return *this;
  }
  Type & set__gbias(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gbias = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acl_msgs::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
    const acl_msgs::msg::State_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acl_msgs::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acl_msgs::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acl_msgs::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acl_msgs::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acl_msgs__msg__State
    std::shared_ptr<acl_msgs::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acl_msgs__msg__State
    std::shared_ptr<acl_msgs::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state_stamp != other.state_stamp) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->quat != other.quat) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->abias != other.abias) {
      return false;
    }
    if (this->gbias != other.gbias) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
  acl_msgs::msg::State_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
