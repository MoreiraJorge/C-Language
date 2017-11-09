/* 
 * File:   Exercicio1.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 9 de Novembro de 2017, 12:14
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(int argc, char** argv) {

    int i, numbers[SIZE];

    for (; i < SIZE; ++i) {
        numbers[i] = i;
    }

    for (i = 0; i < SIZE; ++i) {
        printf(" %d", numbers[i]);
    }

    return (EXIT_SUCCESS);
}

