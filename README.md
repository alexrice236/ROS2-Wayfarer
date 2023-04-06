# ROS2-Wayfarer

ROS2 communication framework for low-power autonomous testbeds.

# Getting the right OS

## Host computer

For both the Raspberry Pi Zero 2 and the host computer virtual machine, we will be running Ubuntu Jammy Jellyfish (22.04).

You may use a virtualization software of your choice (VMware, VirtualBox). Set up the virtual machine with the desktop image from this link: https://releases.ubuntu.com/jammy/

IMPORTANT: make sure that the network adapter type is set to bridged for your VM. 

## Raspberry Pi

Install the Raspberry Pi Imager from this link: https://www.raspberrypi.com/software/ 

Open the imager, and choose Ubuntu Server 22.04.2 LTS (64-bit) under "Other general-purpose OS" as your operating system. Open the advanced options by pressing the gear at the bottom right and enable SSH, setting a personal username and password. Then configure wireless LAN to the following - SSID: LEAN, Password: wayfarer - and save the options. Flash your microSD card and wait for it to complete.

You can now boot up and SSH into your Pi.

# Getting ROS2

For the most part, the installation for the host computer and the Pi is the same, they will differ in the final installed product, however. 

## Set locale

'
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings
'

## Setup sources

You will need to add the ROS2 repository to your system.

'
sudo apt install software-properties-common
sudo add-apt-repository universe
'
