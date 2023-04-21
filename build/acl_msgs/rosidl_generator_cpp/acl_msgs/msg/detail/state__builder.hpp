// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acl_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
#define ACL_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acl_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acl_msgs
{

namespace msg
{

namespace builder
{

class Init_State_gbias
{
public:
  explicit Init_State_gbias(::acl_msgs::msg::State & msg)
  : msg_(msg)
  {}
  ::acl_msgs::msg::State gbias(::acl_msgs::msg::State::_gbias_type arg)
  {
    msg_.gbias = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

class Init_State_abias
{
public:
  explicit Init_State_abias(::acl_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_gbias abias(::acl_msgs::msg::State::_abias_type arg)
  {
    msg_.abias = std::move(arg);
    return Init_State_gbias(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

class Init_State_w
{
public:
  explicit Init_State_w(::acl_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_abias w(::acl_msgs::msg::State::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_State_abias(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

class Init_State_quat
{
public:
  explicit Init_State_quat(::acl_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_w quat(::acl_msgs::msg::State::_quat_type arg)
  {
    msg_.quat = std::move(arg);
    return Init_State_w(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

class Init_State_vel
{
public:
  explicit Init_State_vel(::acl_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_quat vel(::acl_msgs::msg::State::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_State_quat(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

class Init_State_pos
{
public:
  explicit Init_State_pos(::acl_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_vel pos(::acl_msgs::msg::State::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_State_vel(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

class Init_State_state_stamp
{
public:
  explicit Init_State_state_stamp(::acl_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_pos state_stamp(::acl_msgs::msg::State::_state_stamp_type arg)
  {
    msg_.state_stamp = std::move(arg);
    return Init_State_pos(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

class Init_State_header
{
public:
  Init_State_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_state_stamp header(::acl_msgs::msg::State::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_State_state_stamp(msg_);
  }

private:
  ::acl_msgs::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acl_msgs::msg::State>()
{
  return acl_msgs::msg::builder::Init_State_header();
}

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
