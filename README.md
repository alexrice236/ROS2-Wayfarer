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

