/* 
 * File:   Exercicio6.c
 * Author: Jorge Moreira
 * Ficha7 - exercicio6
 * Created on 24 de Novembro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"
#define MAX 10

int linhas, colunas;


int main(int argc, char** argv) {
    
    int matrizA[linhas][colunas];
    int matrizB[linhas][colunas];
   
    pedirtamanho();
    pedirmatrizA(matrizA);
    pedirmatrizB(matrizB);
    printmatrizA(matrizA);
    printmatrizB(matrizB);
    matrizcFINAL(matrizA, matrizB);
    
    return (EXIT_SUCCESS);
}

