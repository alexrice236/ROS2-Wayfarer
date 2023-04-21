// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acl_msgs:msg/SMCData.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__SMC_DATA__STRUCT_HPP_
#define ACL_MSGS__MSG__DETAIL__SMC_DATA__STRUCT_HPP_

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
// Member 'q_des'
// Member 'q_act'
// Member 'q_err'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'w_des'
// Member 'w_act'
// Member 'w_err'
// Member 's'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acl_msgs__msg__SMCData __attribute__((deprecated))
#else
# define DEPRECATED__acl_msgs__msg__SMCData __declspec(deprecated)
#endif

namespace acl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SMCData_
{
  using Type = SMCData_<ContainerAllocator>;

  explicit SMCData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    q_des(_init),
    q_act(_init),
    q_err(_init),
    w_des(_init),
    w_act(_init),
    w_err(_init),
    s(_init)
  {
    (void)_init;
  }

  explicit SMCData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    q_des(_alloc, _init),
    q_act(_alloc, _init),
    q_err(_alloc, _init),
    w_des(_alloc, _init),
    w_act(_alloc, _init),
    w_err(_alloc, _init),
    s(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    acl_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _q_des_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _q_des_type q_des;
  using _q_act_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _q_act_type q_act;
  using _q_err_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _q_err_type q_err;
  using _w_des_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _w_des_type w_des;
  using _w_act_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _w_act_type w_act;
  using _w_err_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _w_err_type w_err;
  using _s_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _s_type s;

  // setters for named parameter idiom
  Type & set__header(
    const acl_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__q_des(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->q_des = _arg;
    return *this;
  }
  Type & set__q_act(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->q_act = _arg;
    return *this;
  }
  Type & set__q_err(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->q_err = _arg;
    return *this;
  }
  Type & set__w_des(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w_des = _arg;
    return *this;
  }
  Type & set__w_act(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w_act = _arg;
    return *this;
  }
  Type & set__w_err(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w_err = _arg;
    return *this;
  }
  Type & set__s(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acl_msgs::msg::SMCData_<ContainerAllocator> *;
  using ConstRawPtr =
    const acl_msgs::msg::SMCData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acl_msgs::msg::SMCData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acl_msgs::msg::SMCData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::SMCData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::SMCData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acl_msgs::msg::SMCData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acl_msgs::msg::SMCData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acl_msgs::msg::SMCData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acl_msgs::msg::SMCData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acl_msgs__msg__SMCData
    std::shared_ptr<acl_msgs::msg::SMCData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acl_msgs__msg__SMCData
    std::shared_ptr<acl_msgs::msg::SMCData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SMCData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->q_des != other.q_des) {
      return false;
    }
    if (this->q_act != other.q_act) {
      return false;
    }
    if (this->q_err != other.q_err) {
      return false;
    }
    if (this->w_des != other.w_des) {
      return false;
    }
    if (this->w_act != other.w_act) {
      return false;
    }
    if (this->w_err != other.w_err) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    return true;
  }
  bool operator!=(const SMCData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SMCData_

// alias to use template instance with default allocator
using SMCData =
  acl_msgs::msg::SMCData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__SMC_DATA__STRUCT_HPP_
