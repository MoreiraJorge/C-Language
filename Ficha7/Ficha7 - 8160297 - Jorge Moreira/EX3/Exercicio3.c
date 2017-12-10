/* 
 * File:   Exercicio3.c
 * Author: Jorge Moreira
 * ficha7 - Exercicio3 
 * Created on 23 de Novembro de 2017, 14:20
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define LINHAS 4
#define COLUNAS 5

int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    
    pedirmatriz(matriz);
    printmatriz(matriz);
    
    
    return (EXIT_SUCCESS);
}

