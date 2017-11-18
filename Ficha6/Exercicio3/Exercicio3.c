/* 
 * File:   Exercicio3.c
 * Author: Jorge Moreira
 * Ficha6 - Exercicio3
 * Created on 18 de Novembro de 2017, 15:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 25

int main(int argc, char** argv) {
    char frase1[MAX];
    char frase2[MAX];
    int ordem;

    puts("introduza a primeira frase:");
    lerString(frase1, MAX);
    puts("introduza a segunda frase:");
    lerString(frase2, MAX);

    ordem = strcmp(frase1, frase2);
    
    if (ordem < 0){
        puts("Frases Ordenadas:");
        printf("Primeira frase: %s\n", frase1);
        printf("Segunda frase: %s\n", frase2);
    } else {
        puts("Frases Ordenadas:");
        printf("Primeira Frase: %s\n", frase2);
        printf("Segunda Frase: %s\n", frase1);
    }
    return (EXIT_SUCCESS);
}

