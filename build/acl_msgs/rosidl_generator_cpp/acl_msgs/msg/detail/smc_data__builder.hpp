// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acl_msgs:msg/SMCData.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__SMC_DATA__BUILDER_HPP_
#define ACL_MSGS__MSG__DETAIL__SMC_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acl_msgs/msg/detail/smc_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acl_msgs
{

namespace msg
{

namespace builder
{

class Init_SMCData_s
{
public:
  explicit Init_SMCData_s(::acl_msgs::msg::SMCData & msg)
  : msg_(msg)
  {}
  ::acl_msgs::msg::SMCData s(::acl_msgs::msg::SMCData::_s_type arg)
  {
    msg_.s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

class Init_SMCData_w_err
{
public:
  explicit Init_SMCData_w_err(::acl_msgs::msg::SMCData & msg)
  : msg_(msg)
  {}
  Init_SMCData_s w_err(::acl_msgs::msg::SMCData::_w_err_type arg)
  {
    msg_.w_err = std::move(arg);
    return Init_SMCData_s(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

class Init_SMCData_w_act
{
public:
  explicit Init_SMCData_w_act(::acl_msgs::msg::SMCData & msg)
  : msg_(msg)
  {}
  Init_SMCData_w_err w_act(::acl_msgs::msg::SMCData::_w_act_type arg)
  {
    msg_.w_act = std::move(arg);
    return Init_SMCData_w_err(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

class Init_SMCData_w_des
{
public:
  explicit Init_SMCData_w_des(::acl_msgs::msg::SMCData & msg)
  : msg_(msg)
  {}
  Init_SMCData_w_act w_des(::acl_msgs::msg::SMCData::_w_des_type arg)
  {
    msg_.w_des = std::move(arg);
    return Init_SMCData_w_act(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

class Init_SMCData_q_err
{
public:
  explicit Init_SMCData_q_err(::acl_msgs::msg::SMCData & msg)
  : msg_(msg)
  {}
  Init_SMCData_w_des q_err(::acl_msgs::msg::SMCData::_q_err_type arg)
  {
    msg_.q_err = std::move(arg);
    return Init_SMCData_w_des(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

class Init_SMCData_q_act
{
public:
  explicit Init_SMCData_q_act(::acl_msgs::msg::SMCData & msg)
  : msg_(msg)
  {}
  Init_SMCData_q_err q_act(::acl_msgs::msg::SMCData::_q_act_type arg)
  {
    msg_.q_act = std::move(arg);
    return Init_SMCData_q_err(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

class Init_SMCData_q_des
{
public:
  explicit Init_SMCData_q_des(::acl_msgs::msg::SMCData & msg)
  : msg_(msg)
  {}
  Init_SMCData_q_act q_des(::acl_msgs::msg::SMCData::_q_des_type arg)
  {
    msg_.q_des = std::move(arg);
    return Init_SMCData_q_act(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

class Init_SMCData_header
{
public:
  Init_SMCData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SMCData_q_des header(::acl_msgs::msg::SMCData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SMCData_q_des(msg_);
  }

private:
  ::acl_msgs::msg::SMCData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acl_msgs::msg::SMCData>()
{
  return acl_msgs::msg::builder::Init_SMCData_header();
}

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__SMC_DATA__BUILDER_HPP_
