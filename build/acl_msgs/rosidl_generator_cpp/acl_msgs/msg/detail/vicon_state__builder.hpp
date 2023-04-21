// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acl_msgs:msg/ViconState.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__VICON_STATE__BUILDER_HPP_
#define ACL_MSGS__MSG__DETAIL__VICON_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acl_msgs/msg/detail/vicon_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acl_msgs
{

namespace msg
{

namespace builder
{

class Init_ViconState_has_accel
{
public:
  explicit Init_ViconState_has_accel(::acl_msgs::msg::ViconState & msg)
  : msg_(msg)
  {}
  ::acl_msgs::msg::ViconState has_accel(::acl_msgs::msg::ViconState::_has_accel_type arg)
  {
    msg_.has_accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acl_msgs::msg::ViconState msg_;
};

class Init_ViconState_has_twist
{
public:
  explicit Init_ViconState_has_twist(::acl_msgs::msg::ViconState & msg)
  : msg_(msg)
  {}
  Init_ViconState_has_accel has_twist(::acl_msgs::msg::ViconState::_has_twist_type arg)
  {
    msg_.has_twist = std::move(arg);
    return Init_ViconState_has_accel(msg_);
  }

private:
  ::acl_msgs::msg::ViconState msg_;
};

class Init_ViconState_has_pose
{
public:
  explicit Init_ViconState_has_pose(::acl_msgs::msg::ViconState & msg)
  : msg_(msg)
  {}
  Init_ViconState_has_twist has_pose(::acl_msgs::msg::ViconState::_has_pose_type arg)
  {
    msg_.has_pose = std::move(arg);
    return Init_ViconState_has_twist(msg_);
  }

private:
  ::acl_msgs::msg::ViconState msg_;
};

class Init_ViconState_accel
{
public:
  explicit Init_ViconState_accel(::acl_msgs::msg::ViconState & msg)
  : msg_(msg)
  {}
  Init_ViconState_has_pose accel(::acl_msgs::msg::ViconState::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_ViconState_has_pose(msg_);
  }

private:
  ::acl_msgs::msg::ViconState msg_;
};

class Init_ViconState_twist
{
public:
  explicit Init_ViconState_twist(::acl_msgs::msg::ViconState & msg)
  : msg_(msg)
  {}
  Init_ViconState_accel twist(::acl_msgs::msg::ViconState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_ViconState_accel(msg_);
  }

private:
  ::acl_msgs::msg::ViconState msg_;
};

class Init_ViconState_pose
{
public:
  explicit Init_ViconState_pose(::acl_msgs::msg::ViconState & msg)
  : msg_(msg)
  {}
  Init_ViconState_twist pose(::acl_msgs::msg::ViconState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ViconState_twist(msg_);
  }

private:
  ::acl_msgs::msg::ViconState msg_;
};

class Init_ViconState_header
{
public:
  Init_ViconState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ViconState_pose header(::acl_msgs::msg::ViconState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ViconState_pose(msg_);
  }

private:
  ::acl_msgs::msg::ViconState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acl_msgs::msg::ViconState>()
{
  return acl_msgs::msg::builder::Init_ViconState_header();
}

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__VICON_STATE__BUILDER_HPP_
