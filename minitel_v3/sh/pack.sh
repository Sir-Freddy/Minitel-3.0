#!/bin/bash

echo "(y/n) - voir les paquets installés"
read  paquets

 echo $paquets 

if [ $paquets = y ]; then
    clear
    dpkg --list
else
    clear
    exit
fi
