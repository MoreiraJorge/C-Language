/* 
 * File:   Exercicio6.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 13 de Novembro de 2017, 0:26
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

#define MAX 10

int main(int argc, char** argv) {
    int numbers[MAX], i;
    char opc;

    for (i = 0; i < MAX; ++i) {
        puts("Introduza um numero");
        scanf("%d", &numbers[i]);
    }

    while (1) {

        CleanEntryBuffer();
        puts(" Quer numeros Pares (P/p) ou Impares(I/i)");
        scanf("%c", &opc);

        if (opc == 'P' || opc == 'p') {
            evennumber(numbers);
            break;
        } else if (opc == 'I' || opc == 'i') {
            oddnumber(numbers);
            break;
        } else {
            puts("INPUT INVALIDO!!!");
        }
    }


    return (EXIT_SUCCESS);
}

