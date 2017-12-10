/* 
 * File:   Exercicio9.c
 * Author: Jorge Moreira
 * Ficha 6 - Exercicio9
 * Created on 22 de Novembro de 2017, 18:26
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 25

int main(int argc, char** argv) {
    char frase1[MAX];
    char frase2[MAX];
    char virgula[1]=",";

    puts("Escreva a primeira frase");
    lerString(frase1, MAX);
    puts("Escreva a segunda frase");
    lerString(frase2, MAX);

    strcat(frase1,virgula);
    
    printf("Resultado: %s", frase1);


    return (EXIT_SUCCESS);
}

