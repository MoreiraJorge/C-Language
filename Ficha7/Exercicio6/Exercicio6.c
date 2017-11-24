/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio6.c
 * Author: Jorge Moreira
 *
 * Created on 24 de Novembro de 2017, 17:42
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char** argv) {
    int i, j, k;
    int LinhasA, LinhasB;
    int ColunasA, ColunasB;
    int matrizA[MAX][MAX];
    int matrizB[MAX][MAX], matrizC[MAX][MAX];

    while (1) {
        puts("Introduza as quantidades de linhas da matriz A");
        scanf("%d", &LinhasA);
        puts("Introduza as quantidades de Colunas da matriz A");
        scanf("%d", &ColunasA);

        puts("Introduza as quantidades de linhas da matriz B");
        scanf("%d", &LinhasB);
        puts("Introduza as quantidades de Colunas da matriz B");
        scanf("%d", &ColunasB);

        if (LinhasA <= MAX && LinhasB <= MAX && ColunasA <= MAX && ColunasB <= MAX) {
            break;
        } else {
            puts("Tamanhos invalidos");
        }
    }

    if (ColunasA == LinhasB) {

        puts("Introduza os valores da matriz A");
        for (i = 0; i < LinhasA; ++i) {
            for (j = 0; j < ColunasA; ++j) {
                scanf("%d", &matrizA[i][j]);
            }
        }

        puts("Introduza os valores da matriz B");
        for (i = 0; i < LinhasB; ++i) {
            for (j = 0; j < ColunasB; ++j) {
                scanf("%d", &matrizB[i][j]);
            }
        }
//Multiplicaçao da matriz, segundo a condicao ColunasA = LinhasB
        for (i = 0; i < LinhasA; ++i) {
            for (j = 0; j < ColunasB; ++j) {
                matrizC[i][j] = 0;
                for (k = 0; k < LinhasB; ++k) {
                    matrizC[i][j] = matrizA[i][k] * matrizB [k][j];
                }

            }
        } /* K significa que a quantidade de colunas da Matriz A é mesma  que as linhas 
da Matriz B */
        
        //Impressao de todas as matrizes
        puts("MATRIZ A");
        for(i = 0; i < LinhasA; ++i){
            for (j = 0; j < ColunasA; ++j){
               printf(" %d", matrizA[i][j]); 
            }
            puts(" ");
        }
        
        puts("");
        
        puts("MATRIZ B");
        for(i = 0; i < LinhasB; ++i){
            for (j = 0; j < ColunasB; ++j){
               printf(" %d", matrizB[i][j]); 
            }
            puts(" ");
        }
        
        puts("");
        
        puts("MATRIZ C");
        for(i = 0; i < LinhasA; ++i){
            for (j = 0; j < ColunasB; ++j){
               printf(" %d", matrizC[i][j]); 
            }
            puts(" ");
        }
        

    } else {
        puts("Multiplicacao impossivel");
    }
    return (EXIT_SUCCESS);
}

