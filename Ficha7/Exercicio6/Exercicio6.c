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
    int i, j;
    int LinhasA, LinhasB;
    int ColunasA, ColunasB;
    int matrizA[LinhasA][ColunasA];
    int matrizB[LinhasB][ColunasB], matrizC[LinhasA][ColunasB];

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
    
    if (ColunasA == LinhasB){
        
        puts("Introduza os valore da matriz A");
        for (i = 0; i < LinhasA; ++i){
            for (j = 0; j < ColunasA; ++j){
                scanf("%d", &matrizA[i][j]);
            }
        }
        
        puts("Introduza os valore da matriz B");
        for (i = 0; i < LinhasB; ++i){
            for (j = 0; j < ColunasB; ++j){
                scanf("%d", &matrizB[i][j]);
            }
        }
        
    } else {
        puts("Multiplicacao impossivel");
    }
    return (EXIT_SUCCESS);
}

