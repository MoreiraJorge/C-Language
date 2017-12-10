/* 
 * File:   Exercicio5.c
 * Author: Jorge Moreira
 * Ficha 6
 * Created on 21 de Novembro de 2017, 15:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 25

int main(int argc, char** argv) {
    char frase1[MAX];
    int quantidade;

    puts("Escreva uma frase");
    lerString(frase1, MAX);

    quantidade = strlen(frase1);

    printf("Numero de caracteres: %d\n", quantidade);


    return (EXIT_SUCCESS);
}

