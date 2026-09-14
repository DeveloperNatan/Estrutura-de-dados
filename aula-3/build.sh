#!/bin/bash

echo "Digite o nome do arquivo C (ex: Questao01.c):"
read arquivo

if [ ! -f "$arquivo" ]; then
    echo "Arquivo não encontrado."
    exit 1
fi

saida="${arquivo%.c}"

gcc -std=c99 -Wall -Wextra -pedantic "$arquivo" -o "$saida" -lm

if [ $? -eq 0 ]; then
    ./"$saida"
else
    echo "Erro na compilação."
    exit 1
fi