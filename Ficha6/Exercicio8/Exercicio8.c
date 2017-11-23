/* 
 * File:   Exercicio8.c
 * Author: Jorge Moreira
 * Ficha6 - Exercicio 8
 * Created on 23 de Novembro de 2017, 10:26
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 100


int main(int argc, char** argv) {
    
    char frase[MAX];
    int i, posicao, posfinal;
    
    puts("Escreva o nome completo");
    lerString(frase, MAX);
    
    posicao = lastindex(' ',frase,MAX);
    posfinal = strlen(frase);
    
    puts("Apelido, nome sem apelido:");
    for (i = posicao; i < posfinal; ++i){
        printf("%c", frase[i]);
    }
    
    printf(",");
    
    
    for(i = 0; i < posicao; ++i){
        printf("%c", frase[i]);
    }
    
    return (EXIT_SUCCESS);
}

