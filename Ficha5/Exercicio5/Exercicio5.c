/* 
 * File:   Exercicio5.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 12 de Novembro de 2017, 23:53
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

#define MAX 10

int main(int argc, char** argv) {

    float numbers[MAX];
    int i;

    for (i = 0; i < MAX; ++i) {
        puts("Introduza um valor:");
        scanf("%f", &numbers[i]);
    }

    printarray(numbers);
    prindouble(numbers);
    printsum(numbers);
    printaverage(numbers);
    printgreaternum(numbers);
    printsmallernum(numbers);

    return (EXIT_SUCCESS);
}

