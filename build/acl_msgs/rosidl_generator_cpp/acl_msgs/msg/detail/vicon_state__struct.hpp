// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acl_msgs:msg/ViconState.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__VICON_STATE__STRUCT_HPP_
#define ACL_MSGS__MSG__DETAIL__VICON_STATE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acl_msgs__msg__ViconState __attribute__((deprecated))
#else
# define DEPRECATED__acl_msgs__msg__ViconState __declspec(deprecated)
#endif

namespace acl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ViconState_
{
  using Type = ViconState_<ContainerAllocator>;

  explicit ViconState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    twist(_init),
    accel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_pose = false;
      this->has_twist = false;
      this->has_accel = false;
    }
  }

  explicit ViconState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init),
    accel(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_pose = false;
      this->has_twist = false;
      this->has_accel = false;
    }
  }

  // field types and members
  using _header_type =
    acl_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _accel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accel_type accel;
  using _has_pose_type =
    bool;
  _has_pose_type has_pose;
  using _has_twist_type =
    bool;
  _has_twist_type has_twist;
  using _has_accel_type =
    bool;
  _has_accel_type has_accel;

  // setters for named parameter idiom
  Type & set__header(
    const acl_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__has_pose(
    const bool & _arg)
  {
    this->has_pose = _arg;
    return *this;
  }
  Type & set__has_twist(
    const bool & _arg)
  {
    this->has_twist = _arg;
    return *this;
  }
  Type & set__has_accel(
    const bool & _arg)
  {
    this->has_accel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acl_msgs::msg::ViconState_<ContainerAllocator> *;
  using ConstRawPtr =
    const acl_msgs::msg::ViconState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acl_msgs::msg::ViconState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acl_msgs::msg::ViconState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::ViconState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::ViconState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::ViconState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::ViconState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acl_msgs::msg::ViconState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acl_msgs::msg::ViconState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acl_msgs__msg__ViconState
    std::shared_ptr<acl_msgs::msg::ViconState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acl_msgs__msg__ViconState
    std::shared_ptr<acl_msgs::msg::ViconState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ViconState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->has_pose != other.has_pose) {
      return false;
    }
    if (this->has_twist != other.has_twist) {
      return false;
    }
    if (this->has_accel != other.has_accel) {
      return false;
    }
    return true;
  }
  bool operator!=(const ViconState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ViconState_

// alias to use template instance with default allocator
using ViconState =
  acl_msgs::msg::ViconState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__VICON_STATE__STRUCT_HPP_
