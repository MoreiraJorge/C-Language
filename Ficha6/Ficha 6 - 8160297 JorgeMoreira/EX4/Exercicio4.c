/* 
 * File:   Exercicio4.c
 * Author: Jorge Moreira
 * Ficha 6
 * Created on 21 de Novembro de 2017, 15:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 25

int main(int argc, char** argv) {
    char frase1[MAX];
    char frase2[MAX];

    puts("Escreva a frase original:");
    lerString(frase1, MAX);

    strcpy(frase2, frase1);
    
    puts("Frase copiada:");
    printf("%s", frase2);

    return (EXIT_SUCCESS);
}

