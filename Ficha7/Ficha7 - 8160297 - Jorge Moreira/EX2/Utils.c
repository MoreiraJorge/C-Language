/* 
 * File:   Utils.h
 * Author: Jorge Moreira
 * ficha7 - Exercicio 2
 * Created on 23 de Novembro de 2017, 13:55
 */
#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

void pedirmatriz(int matriz[][COLUNAS]) {
    int i, j;
    puts("Introduza os valores da matriz");
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void printmatriz(int matriz[][COLUNAS]) {
    int i, j;
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf(" %d", matriz[i][j]);
        }
        puts(" ");
    }
}

void lervalor(int matriz[][COLUNAS]) {
    int i, j;
    int contador = 0;
    int valor;

    puts("Introduza um valor");
    scanf("%d", &valor);

    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            if (matriz[i][j] == valor) {
               ++contador;
            }
        }
    }

    printf("o valor %d aparece %d vezes!", valor, contador);
}
