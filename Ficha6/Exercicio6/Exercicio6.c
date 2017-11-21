/* 
 * File:   Exercicio6.c
 * Author: Jorge Moreira
 * Ficha 6
 * Created on 21 de Novembro de 2017, 16:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 25

int main(int argc, char** argv) {
    char frase1[MAX];
    char caracter;

    puts("Escreva uma frase:");
    lerString(frase1, MAX);

    puts("Introduza um caracter:");
    scanf("%c", &caracter);
    clean_buffer();

    countChar(frase1, caracter);

    return (EXIT_SUCCESS);
}

