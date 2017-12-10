/* 
 * File:   Exercicio5.c
 * Author: Jorge Moreira
 * Ficha 7 - Exercicio 5
 * Created on 24 de Novembro de 2017, 15:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define MAX 3


int main(int argc, char** argv) {
    int i, j;
    int matrix[MAX][MAX];
    
    FillMatrix(matrix);
    writeMatrix(matrix);
    printreversedmatrix(matrix);
    
    return (EXIT_SUCCESS);
}

