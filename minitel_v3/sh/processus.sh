#!/bin/bash

echo "Voici quelques commandes à connaitre pour accéder au menu processus en toute tranquillitée"
echo "-----------------------------------------------------------------------------------------------------------------"
echo "| k : tue le processus. Vous devrez entrez le numéro PID du processus à tuer et appuyer sur Entrée pour valider |"
echo "| q : quitte le menu processus                                                                                  |"
echo "-----------------------------------------------------------------------------------------------------------------"
echo "Accéder aux processus ? (y/n)";
read input
if [ $input = "y" ]; then
    clear && top d 1 n 300 o -PID
else
    exit
fi
