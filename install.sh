#!/bin/bash

echo "This will set up DWM."
pacman -S ttf-font-awesome ttf-fira-code ttf-terminus-nerd ttf-joypixels
sleep 2s
mkdir /usr/share/xsessions/
mv dwm.desktop /usr/share/xsessions/
mv dwm ..
mv dmenu ..
mv st ..
cd ../dwm && make clean install && cd ..
cd dmenu && make clean install && cd ..
cd st && make clean install && cd ..

pacman -S nitrogen

echo "What is your username"
read USERNAME

echo "exec dwm &
nitrogen --restore " > /home/$USERNAME/.profile

echo "DWM successfully installed!"