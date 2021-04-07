#!/bin/bash

echo 'Yo, dossier ?'
echo '1. Data, 2. Unknown'
read value
if $value = '1'
then clear && ./info.sh
else if $value = '2'
then clear && ./res.sh
else if $value = '3'
then clear && ./processus.c
else echo "Choix invalide"
fi