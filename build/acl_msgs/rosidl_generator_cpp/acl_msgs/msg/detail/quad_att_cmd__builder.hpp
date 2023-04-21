// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acl_msgs:msg/QuadAttCmd.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__BUILDER_HPP_
#define ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acl_msgs/msg/detail/quad_att_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acl_msgs
{

namespace msg
{

namespace builder
{

class Init_QuadAttCmd_att_status
{
public:
  explicit Init_QuadAttCmd_att_status(::acl_msgs::msg::QuadAttCmd & msg)
  : msg_(msg)
  {}
  ::acl_msgs::msg::QuadAttCmd att_status(::acl_msgs::msg::QuadAttCmd::_att_status_type arg)
  {
    msg_.att_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acl_msgs::msg::QuadAttCmd msg_;
};

class Init_QuadAttCmd_throttle
{
public:
  explicit Init_QuadAttCmd_throttle(::acl_msgs::msg::QuadAttCmd & msg)
  : msg_(msg)
  {}
  Init_QuadAttCmd_att_status throttle(::acl_msgs::msg::QuadAttCmd::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_QuadAttCmd_att_status(msg_);
  }

private:
  ::acl_msgs::msg::QuadAttCmd msg_;
};

class Init_QuadAttCmd_rate
{
public:
  explicit Init_QuadAttCmd_rate(::acl_msgs::msg::QuadAttCmd & msg)
  : msg_(msg)
  {}
  Init_QuadAttCmd_throttle rate(::acl_msgs::msg::QuadAttCmd::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return Init_QuadAttCmd_throttle(msg_);
  }

private:
  ::acl_msgs::msg::QuadAttCmd msg_;
};

class Init_QuadAttCmd_att
{
public:
  explicit Init_QuadAttCmd_att(::acl_msgs::msg::QuadAttCmd & msg)
  : msg_(msg)
  {}
  Init_QuadAttCmd_rate att(::acl_msgs::msg::QuadAttCmd::_att_type arg)
  {
    msg_.att = std::move(arg);
    return Init_QuadAttCmd_rate(msg_);
  }

private:
  ::acl_msgs::msg::QuadAttCmd msg_;
};

class Init_QuadAttCmd_header
{
public:
  Init_QuadAttCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadAttCmd_att header(::acl_msgs::msg::QuadAttCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QuadAttCmd_att(msg_);
  }

private:
  ::acl_msgs::msg::QuadAttCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acl_msgs::msg::QuadAttCmd>()
{
  return acl_msgs::msg::builder::Init_QuadAttCmd_header();
}

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__BUILDER_HPP_
