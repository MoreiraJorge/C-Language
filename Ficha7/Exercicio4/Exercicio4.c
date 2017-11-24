/* 
 * File:   Exercicio4.c
 * Author: Jorge Moreira
 * ficha7 - exercicio4
 * Created on 24 de Novembro de 2017, 14:36
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define LINHAS 3
#define COLUNAS 3

int main(int argc, char** argv) {
    
    int matriz[LINHAS][COLUNAS];
    
    pedirmatriz(matriz);//matriz normal
    printmatriz(matriz);
    printmatrizB(matriz);//transposta
    
    return (EXIT_SUCCESS);
}

