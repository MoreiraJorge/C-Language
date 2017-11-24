/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * ficha7 - exercicio4
 * Created on 24 de Novembro de 2017, 14:37
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define LINHAS 3
#define COLUNAS 3

void pedirmatriz(int matriz[][COLUNAS]) {
    int i, j;
    puts("Introduza os numeros na matriz");
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void printmatriz(int matriz[][COLUNAS]) {
    int i, j;
    printf("matriz A\n");
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf(" %d", matriz[i][j]);
        }
        puts(" ");
    }
    puts("");
}

void printmatrizB(int matrizA[][COLUNAS]){
    int i, j;
    int matrizB[LINHAS][COLUNAS];
    puts("Matriz B");
    for (i = 0; i < LINHAS; ++i){
        for (j = 0; j < COLUNAS; ++j){
            matrizB[j][i] = matrizA[i][j];
        }
    }
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            printf(" %d", matrizB[i][j]);   
        }
        puts(" ");
    } 

}