// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acl_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
#define ACL_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acl_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "acl_msgs/msg/detail/header__traits.hpp"
// Member 'imu_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'gyro'
// Member 'accel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace acl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMU & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: imu_stamp
  {
    out << "imu_stamp: ";
    to_flow_style_yaml(msg.imu_stamp, out);
    out << ", ";
  }

  // member: gyro
  {
    out << "gyro: ";
    to_flow_style_yaml(msg.gyro, out);
    out << ", ";
  }

  // member: accel
  {
    out << "accel: ";
    to_flow_style_yaml(msg.accel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: imu_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_stamp:\n";
    to_block_style_yaml(msg.imu_stamp, out, indentation + 2);
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro:\n";
    to_block_style_yaml(msg.gyro, out, indentation + 2);
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel:\n";
    to_block_style_yaml(msg.accel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IMU & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace acl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use acl_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const acl_msgs::msg::IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  acl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acl_msgs::msg::IMU & msg)
{
  return acl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acl_msgs::msg::IMU>()
{
  return "acl_msgs::msg::IMU";
}

template<>
inline const char * name<acl_msgs::msg::IMU>()
{
  return "acl_msgs/msg/IMU";
}

template<>
struct has_fixed_size<acl_msgs::msg::IMU>
  : std::integral_constant<bool, has_fixed_size<acl_msgs::msg::Header>::value && has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<acl_msgs::msg::IMU>
  : std::integral_constant<bool, has_bounded_size<acl_msgs::msg::Header>::value && has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<acl_msgs::msg::IMU>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACL_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
