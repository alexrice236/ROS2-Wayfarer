cmake_minimum_required(VERSION 3.5)
project(acl_msgs)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(message_generation REQUIRED)
find_package(std_msgs REQUIRED)
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

rosidl_generate_interfaces(DEPENDENCIES std_msgs geometry_msgs)

ament_export_dependencies(message_runtime std_msgs geometry_msgs)

ament_package()

