/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Ficha7 - Exercicio 3
 * Created on 23 de Novembro de 2017, 14:24
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define LINHAS 4
#define COLUNAS 3

void pedirmatriz(int matriz[][COLUNAS]) {
    int i, j;
    puts("Introduza os Codigos, e notas");
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf("linha[%d] - Codigo | nota1 | nota2: ", i + 1);
            scanf("%d", &matriz[i][j]);
        }
        puts("");
    }
}

void printmatriz(int matriz[][COLUNAS]) {
    int i, j;
    printf("Codigo nota1 nota2 media\n");
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {

            printf("%6d", matriz[i][j]);
        }
        printf(" %.2f", (float)(matriz[i][1] + matriz[i][2]) / 2);
        puts(" ");
    }
}