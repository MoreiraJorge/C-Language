/* 
 * File:   Exercicio2.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 9 de Novembro de 2017, 12:34
 */

#include <stdio.h>
#include <stdlib.h>
#define BEGIN 5
#define END 21

int main(int argc, char** argv) {
    int i, numbers[END];
    
    for (; i < END; ++i) {
        numbers[i] = i + BEGIN;
    }
    
    for (i = 0; i < END; ++i) {
        printf(" %d", numbers[i]);
    }
    return (EXIT_SUCCESS);
}

