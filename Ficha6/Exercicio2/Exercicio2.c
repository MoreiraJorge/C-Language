/* 
 * File:   Exercicio2.c
 * Author: Jorge Moreira
 * Ficha6
 * Created on 18 de Novembro de 2017, 14:48
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "Utils.h"
#define MAX 30

int main(int argc, char** argv) {
    
    char word[MAX];

    puts("Escreva uma palavra / frase:");

    lerString(word, MAX);

    printf("Resultado: %s", word);
    
    return (EXIT_SUCCESS);
}

