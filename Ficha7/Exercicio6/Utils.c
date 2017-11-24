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

int pedirtamanho() {
    while (1) {
        puts("Introduza o tamanho da matriz (maximo: 10x10)");
        puts("LINHAS:");
        scanf("%d", &linhas);
        puts("COLUNAS:");
        scanf("%d", &colunas);

        if (linhas > MAX && colunas > MAX) {
            puts("Tamanho fora do limite");
        } else {
            break;
        }
    }
    return linhas, colunas;
}

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

void matrizcFINAL(int matrizA[][colunas], int matrizB[][colunas]) {
    int i, j;
    int matrizC[linhas][colunas];

    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }

    puts("Matriz C");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf(" %d", matrizC[i][j]);
        }
        puts(" ");
    }
}