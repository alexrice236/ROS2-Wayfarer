// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acl_msgs:msg/QuadMotors.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__BUILDER_HPP_
#define ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acl_msgs/msg/detail/quad_motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acl_msgs
{

namespace msg
{

namespace builder
{

class Init_QuadMotors_m4
{
public:
  explicit Init_QuadMotors_m4(::acl_msgs::msg::QuadMotors & msg)
  : msg_(msg)
  {}
  ::acl_msgs::msg::QuadMotors m4(::acl_msgs::msg::QuadMotors::_m4_type arg)
  {
    msg_.m4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acl_msgs::msg::QuadMotors msg_;
};

class Init_QuadMotors_m3
{
public:
  explicit Init_QuadMotors_m3(::acl_msgs::msg::QuadMotors & msg)
  : msg_(msg)
  {}
  Init_QuadMotors_m4 m3(::acl_msgs::msg::QuadMotors::_m3_type arg)
  {
    msg_.m3 = std::move(arg);
    return Init_QuadMotors_m4(msg_);
  }

private:
  ::acl_msgs::msg::QuadMotors msg_;
};

class Init_QuadMotors_m2
{
public:
  explicit Init_QuadMotors_m2(::acl_msgs::msg::QuadMotors & msg)
  : msg_(msg)
  {}
  Init_QuadMotors_m3 m2(::acl_msgs::msg::QuadMotors::_m2_type arg)
  {
    msg_.m2 = std::move(arg);
    return Init_QuadMotors_m3(msg_);
  }

private:
  ::acl_msgs::msg::QuadMotors msg_;
};

class Init_QuadMotors_m1
{
public:
  explicit Init_QuadMotors_m1(::acl_msgs::msg::QuadMotors & msg)
  : msg_(msg)
  {}
  Init_QuadMotors_m2 m1(::acl_msgs::msg::QuadMotors::_m1_type arg)
  {
    msg_.m1 = std::move(arg);
    return Init_QuadMotors_m2(msg_);
  }

private:
  ::acl_msgs::msg::QuadMotors msg_;
};

class Init_QuadMotors_header
{
public:
  Init_QuadMotors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadMotors_m1 header(::acl_msgs::msg::QuadMotors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QuadMotors_m1(msg_);
  }

private:
  ::acl_msgs::msg::QuadMotors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acl_msgs::msg::QuadMotors>()
{
  return acl_msgs::msg::builder::Init_QuadMotors_header();
}

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__BUILDER_HPP_
