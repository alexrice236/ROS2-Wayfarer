from setuptools import setup

package_name = 'my_computer_plot'

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
    description='Live plotter executable on host computer',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'plot_sub_node = my_computer_plot.plot_sub_node:main'
        ],
    },
)
