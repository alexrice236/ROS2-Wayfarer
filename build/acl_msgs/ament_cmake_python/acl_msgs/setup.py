from setuptools import find_packages
from setuptools import setup

setup(
    name='acl_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('acl_msgs', 'acl_msgs.*')),
)
