cmake_minimum_required(VERSION 3.5)

project(acl_msgs)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclpy REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)


add_message_files(
  DIRECTORY msg
  FILES
  IMU.msg
  QuadAttCmd.msg
  QuadMotors.msg
  State.msg
  SMCData.msg
  ViconState.msg
  )

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg}
  DEPENDENCIES std_msgs geometry_msgs)

ament_export_dependencies(message_runtime std_msgs geometry_msgs)

ament_package()

