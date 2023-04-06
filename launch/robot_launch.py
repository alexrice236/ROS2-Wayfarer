from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_robot_controller',
            namespace='namespace',
            executable='controller_node',
            name='controller'
        ),
        Node(
            package='my_robot_data',
            namespace='namespace',
            executable='data_pub_node',
            name='data'
        )
    ])