// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acl_msgs:msg/QuadMotors.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__TRAITS_HPP_
#define ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acl_msgs/msg/detail/quad_motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "acl_msgs/msg/detail/header__traits.hpp"

namespace acl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadMotors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: m1
  {
    out << "m1: ";
    rosidl_generator_traits::value_to_yaml(msg.m1, out);
    out << ", ";
  }

  // member: m2
  {
    out << "m2: ";
    rosidl_generator_traits::value_to_yaml(msg.m2, out);
    out << ", ";
  }

  // member: m3
  {
    out << "m3: ";
    rosidl_generator_traits::value_to_yaml(msg.m3, out);
    out << ", ";
  }

  // member: m4
  {
    out << "m4: ";
    rosidl_generator_traits::value_to_yaml(msg.m4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadMotors & msg,
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

  // member: m1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m1: ";
    rosidl_generator_traits::value_to_yaml(msg.m1, out);
    out << "\n";
  }

  // member: m2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2: ";
    rosidl_generator_traits::value_to_yaml(msg.m2, out);
    out << "\n";
  }

  // member: m3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m3: ";
    rosidl_generator_traits::value_to_yaml(msg.m3, out);
    out << "\n";
  }

  // member: m4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m4: ";
    rosidl_generator_traits::value_to_yaml(msg.m4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadMotors & msg, bool use_flow_style = false)
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
  const acl_msgs::msg::QuadMotors & msg,
  std::ostream & out, size_t indentation = 0)
{
  acl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acl_msgs::msg::QuadMotors & msg)
{
  return acl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acl_msgs::msg::QuadMotors>()
{
  return "acl_msgs::msg::QuadMotors";
}

template<>
inline const char * name<acl_msgs::msg::QuadMotors>()
{
  return "acl_msgs/msg/QuadMotors";
}

template<>
struct has_fixed_size<acl_msgs::msg::QuadMotors>
  : std::integral_constant<bool, has_fixed_size<acl_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<acl_msgs::msg::QuadMotors>
  : std::integral_constant<bool, has_bounded_size<acl_msgs::msg::Header>::value> {};

template<>
struct is_message<acl_msgs::msg::QuadMotors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACL_MSGS__MSG__DETAIL__QUAD_MOTORS__TRAITS_HPP_
