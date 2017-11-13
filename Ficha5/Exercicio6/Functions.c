/* 
 * File:   Functions.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 13 de Novembro de 2017, 0:26
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void CleanEntryBuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void evennumber(int numbers[]) {
    int i = 0;

    puts("Numeros Pares:");
    for (i; i < MAX; ++i) {
        if (numbers[i] % 2 == 0) {
            printf(" || %d", numbers[i]);
        }
    }
}

void oddnumber(int numbers[]) {
    int i = 0;

    puts("Numeros ímpares:");
    for (i; i < MAX; ++i) {
        if (numbers[i] % 2 != 0) {
            printf(" || %d", numbers[i]);
        }
    }
}
