/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Ficha7 - exercicio6
 * Created on 24 de Novembro de 2017, 15:05
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define MAX 10



void pedirmatrizA(int matriz[][colunas]) {
    int i, j;

    puts("Introduza numeros na matriz A");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void pedirmatrizB(int matriz[][colunas]) {
    int i, j;

    puts("Introduza numeros na matriz B");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void printmatrizA(int matriz[][colunas]) {
    int i, j;

    puts("Matriz A");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf(" %d", matriz[i][j]);
        }
        puts(" ");
    }
}

void printmatrizB(int matriz[][colunas]) {
    int i, j;

    puts("Matriz B");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf(" %d", matriz[i][j]);
        }
        puts(" ");
    }
}
