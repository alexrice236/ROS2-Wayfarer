from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_computer_goal',
            namespace='namespace',
            executable='goal_pub_node',
            name='goal'
        ),
        Node(
            package='my_computer_mocap',
            namespace='namespace',
            executable='mocap_pub_node',
            name='mocap'
        ),
        Node(
            package='my_computer_plot',
            namespace='namespace',
            executable='plot_sub_node',
            name='plot'
        )
    ])