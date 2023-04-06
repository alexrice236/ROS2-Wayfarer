from setuptools import setup

package_name = 'my_computer_goal'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='alex',
    maintainer_email='alexrice826@gmail.com',
    description='Computer executable for sending destination to robot',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'goal_pub_node = my_computer_goal.goal_pub_node:main'
        ],
    },
)
