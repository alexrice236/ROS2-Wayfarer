// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acl_msgs:msg/QuadAttCmd.idl
// generated code does not contain a copyright notice

#ifndef ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__TRAITS_HPP_
#define ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acl_msgs/msg/detail/quad_att_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "acl_msgs/msg/detail/header__traits.hpp"
// Member 'att'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'rate'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace acl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadAttCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: att
  {
    out << "att: ";
    to_flow_style_yaml(msg.att, out);
    out << ", ";
  }

  // member: rate
  {
    out << "rate: ";
    to_flow_style_yaml(msg.rate, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: att_status
  {
    out << "att_status: ";
    rosidl_generator_traits::value_to_yaml(msg.att_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadAttCmd & msg,
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

  // member: att
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "att:\n";
    to_block_style_yaml(msg.att, out, indentation + 2);
  }

  // member: rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate:\n";
    to_block_style_yaml(msg.rate, out, indentation + 2);
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: att_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "att_status: ";
    rosidl_generator_traits::value_to_yaml(msg.att_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadAttCmd & msg, bool use_flow_style = false)
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
  const acl_msgs::msg::QuadAttCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  acl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acl_msgs::msg::QuadAttCmd & msg)
{
  return acl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acl_msgs::msg::QuadAttCmd>()
{
  return "acl_msgs::msg::QuadAttCmd";
}

template<>
inline const char * name<acl_msgs::msg::QuadAttCmd>()
{
  return "acl_msgs/msg/QuadAttCmd";
}

template<>
struct has_fixed_size<acl_msgs::msg::QuadAttCmd>
  : std::integral_constant<bool, has_fixed_size<acl_msgs::msg::Header>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<acl_msgs::msg::QuadAttCmd>
  : std::integral_constant<bool, has_bounded_size<acl_msgs::msg::Header>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<acl_msgs::msg::QuadAttCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACL_MSGS__MSG__DETAIL__QUAD_ATT_CMD__TRAITS_HPP_
