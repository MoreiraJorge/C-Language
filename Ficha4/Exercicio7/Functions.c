/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

#define SYMBOL "*"

int readinteger(int min, int max) {
    int value;

    while (1) {
        puts("Introduza a quantidade de asteriscos");
        scanf("%d", &value);

        if (value >= min && value <= max) {
            break;
        } else {
            puts("Introduziu uma quantia fora do limite");
        }

    }
}

void printsymbol(int num1) {
    int i = 0;
    for (i; i < num1; ++i) {
        printf(SYMBOL);
    }
}