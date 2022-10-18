#! /bin/bash


GREEN_="32"

BOLDGREEN="\e[1;${GREEN_}m"

GREEN="\e[32m"
ENDCOLOR="\e[0m"
RED="\e[31m"

echo -e "${BOLDGREEN}Welcome to Peritia installer${ENDCOLOR}"

echo -e "Peritia installer for $USER on ${RED}$(date)${ENDCOLOR}"
