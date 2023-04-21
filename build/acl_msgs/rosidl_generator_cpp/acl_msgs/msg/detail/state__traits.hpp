// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acl_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define ACL_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acl_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "acl_msgs/msg/detail/header__traits.hpp"
// Member 'state_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'pos'
// Member 'vel'
// Member 'w'
// Member 'abias'
// Member 'gbias'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'quat'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace acl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state_stamp
  {
    out << "state_stamp: ";
    to_flow_style_yaml(msg.state_stamp, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    to_flow_style_yaml(msg.vel, out);
    out << ", ";
  }

  // member: quat
  {
    out << "quat: ";
    to_flow_style_yaml(msg.quat, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    to_flow_style_yaml(msg.w, out);
    out << ", ";
  }

  // member: abias
  {
    out << "abias: ";
    to_flow_style_yaml(msg.abias, out);
    out << ", ";
  }

  // member: gbias
  {
    out << "gbias: ";
    to_flow_style_yaml(msg.gbias, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State & msg,
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

  // member: state_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_stamp:\n";
    to_block_style_yaml(msg.state_stamp, out, indentation + 2);
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel:\n";
    to_block_style_yaml(msg.vel, out, indentation + 2);
  }

  // member: quat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quat:\n";
    to_block_style_yaml(msg.quat, out, indentation + 2);
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w:\n";
    to_block_style_yaml(msg.w, out, indentation + 2);
  }

  // member: abias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abias:\n";
    to_block_style_yaml(msg.abias, out, indentation + 2);
  }

  // member: gbias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gbias:\n";
    to_block_style_yaml(msg.gbias, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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
  const acl_msgs::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  acl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acl_msgs::msg::State & msg)
{
  return acl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acl_msgs::msg::State>()
{
  return "acl_msgs::msg::State";
}

template<>
inline const char * name<acl_msgs::msg::State>()
{
  return "acl_msgs/msg/State";
}

template<>
struct has_fixed_size<acl_msgs::msg::State>
  : std::integral_constant<bool, has_fixed_size<acl_msgs::msg::Header>::value && has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<acl_msgs::msg::State>
  : std::integral_constant<bool, has_bounded_size<acl_msgs::msg::Header>::value && has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<acl_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACL_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
