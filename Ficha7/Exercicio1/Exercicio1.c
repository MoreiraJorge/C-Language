/* 
 * File:   Exercicio1.c
 * Author: Jorge Moreira
 * Ficha7 - Exercicio1
 * Created on 23 de Novembro de 2017, 12:10
 */

#include <stdio.h>
#include <stdlib.h>

#define COLUNAS 3
#define LINHAS 3

int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    int maior, menor;

    puts("Coloque numeros na matriz");

    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }

    puts(" ");

    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf(" %d", matriz[i][j]);
        }
        puts(" ");
    }

    maior = matriz[0][0];
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            if (maior < matriz[i][j]) {
                maior = matriz[i][j];
            }
        }
    }

    menor = matriz[0][0];
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            if (menor > matriz[i][j]) {
                menor = matriz[i][j];
            }
        }
    }
    
    printf("maior : %d\n", maior);
    printf("menor : %d\n", menor);
 


    return (EXIT_SUCCESS);
}

