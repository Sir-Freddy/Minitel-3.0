#!/bin/bash

echo -e "\nIP : " $(hostname -I)
echo "Interfaces existantes : " $(ls /sys/class/net)
echo -e "\nVoici un affichage des 5 premiers paquets :"
echo "----------------------------------------"
sudo tcpdump -c 10
echo -e "----------------------------------------\n"
echo "Routes :"
echo "----------------------------------------"
ip route
echo -e "----------------------------------------\n"

var=$(sudo cat /proc/sys/net/ipv4/ip_forward)
if [ $var -eq 1 ]; then
    echo -e "Le forwarding de paquets est activé.\n"
else
    echo -e "Le forwarding de paquets n'est pas activé.\n"
fi

read -p 'Entrez "q" pour quitter : ' choix
if [ choix = "q" ]; then
    exit
fi
