// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acl_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
#define ACL_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acl_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acl_msgs
{

namespace msg
{

namespace builder
{

class Init_IMU_accel
{
public:
  explicit Init_IMU_accel(::acl_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  ::acl_msgs::msg::IMU accel(::acl_msgs::msg::IMU::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acl_msgs::msg::IMU msg_;
};

class Init_IMU_gyro
{
public:
  explicit Init_IMU_gyro(::acl_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accel gyro(::acl_msgs::msg::IMU::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_IMU_accel(msg_);
  }

private:
  ::acl_msgs::msg::IMU msg_;
};

class Init_IMU_imu_stamp
{
public:
  explicit Init_IMU_imu_stamp(::acl_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_gyro imu_stamp(::acl_msgs::msg::IMU::_imu_stamp_type arg)
  {
    msg_.imu_stamp = std::move(arg);
    return Init_IMU_gyro(msg_);
  }

private:
  ::acl_msgs::msg::IMU msg_;
};

class Init_IMU_header
{
public:
  Init_IMU_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_imu_stamp header(::acl_msgs::msg::IMU::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IMU_imu_stamp(msg_);
  }

private:
  ::acl_msgs::msg::IMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acl_msgs::msg::IMU>()
{
  return acl_msgs::msg::builder::Init_IMU_header();
}

}  // namespace acl_msgs

#endif  // ACL_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
