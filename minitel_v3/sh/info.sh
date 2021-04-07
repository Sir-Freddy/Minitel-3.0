#!/bin/bash

echo -e "\n Le nom de la machine est :" $(cat /etc/hostname)
echo " Version du Kernel : "  $(cat /proc/version)
echo " RAM : " $(free -h)
echo " La version est : " $(arch) "BITS"
echo " Uptime : " $(uptime)
echo " Limite de fichiers ouverts : " $(ulimit -a | grep 'open files')
echo " Limite de processus ouverts : " $(ulimit -a | grep 'max user processes')
echo " La machine possède : " $(cat /proc/cpuinfo | grep processor | wc -l) "coeur(s)"
echo " Le modèle est : " $(cat /proc/cpuinfo | grep 'model name')
echo ""

read -p 'Entrez "q" pour quitter : ' choix
if [ choix = "q" ]; then
    exit
fi
