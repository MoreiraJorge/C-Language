/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Ficha 7 - Exercicio 5
 * Created on 24 de Novembro de 2017, 16:02
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define MAX 3

void FillMatrix(int matrix[][MAX]) {

    int i = 0, j = 0;
    for (i = 0; i < MAX; ++i) {
        for (j = 0; j < MAX; ++j) {
            printf("Introduza os valores para a matriz:\n");
            scanf("%d", &matrix[i][j]);
        }
        puts(" ");
    }

}

void writeMatrix(int matrix[][MAX]) {

    int i = 0, j = 0;
    puts("Matriz Normal");
    for (i = 0; i < MAX; ++i) {
        for (j = 0; j < MAX; ++j) {
            printf(" %d", matrix[i][j]);
        }
        puts(" ");
    }
    puts(" ");
}

void printreversedmatrix(int matrix[][MAX]) {

    int i, j;

    puts("Matriz B");
    for (i = 0; i < MAX; ++i) {
        for (j = (MAX - 1); j >= 0; --j) {
            printf(" %d", matrix[j][i]);
        }
        puts(" ");
    }
}