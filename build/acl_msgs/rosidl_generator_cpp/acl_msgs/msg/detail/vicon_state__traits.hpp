// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acl_msgs:msg/ViconState.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__VICON_STATE__TRAITS_HPP_
#define ACL_MSGS__MSG__DETAIL__VICON_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acl_msgs/msg/detail/vicon_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "acl_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace acl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ViconState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: accel
  {
    out << "accel: ";
    to_flow_style_yaml(msg.accel, out);
    out << ", ";
  }

  // member: has_pose
  {
    out << "has_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.has_pose, out);
    out << ", ";
  }

  // member: has_twist
  {
    out << "has_twist: ";
    rosidl_generator_traits::value_to_yaml(msg.has_twist, out);
    out << ", ";
  }

  // member: has_accel
  {
    out << "has_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.has_accel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ViconState & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel:\n";
    to_block_style_yaml(msg.accel, out, indentation + 2);
  }

  // member: has_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.has_pose, out);
    out << "\n";
  }

  // member: has_twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_twist: ";
    rosidl_generator_traits::value_to_yaml(msg.has_twist, out);
    out << "\n";
  }

  // member: has_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.has_accel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ViconState & msg, bool use_flow_style = false)
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
  const acl_msgs::msg::ViconState & msg,
  std::ostream & out, size_t indentation = 0)
{
  acl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acl_msgs::msg::ViconState & msg)
{
  return acl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acl_msgs::msg::ViconState>()
{
  return "acl_msgs::msg::ViconState";
}

template<>
inline const char * name<acl_msgs::msg::ViconState>()
{
  return "acl_msgs/msg/ViconState";
}

template<>
struct has_fixed_size<acl_msgs::msg::ViconState>
  : std::integral_constant<bool, has_fixed_size<acl_msgs::msg::Header>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<acl_msgs::msg::ViconState>
  : std::integral_constant<bool, has_bounded_size<acl_msgs::msg::Header>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<acl_msgs::msg::ViconState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACL_MSGS__MSG__DETAIL__VICON_STATE__TRAITS_HPP_
