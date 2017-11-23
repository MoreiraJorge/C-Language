/* 
 * File:   Exercicio2.c
 * Author: Jorge Moreira
 * Ficha7 - Exercicio 2
 * Created on 23 de Novembro de 2017, 13:49
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
   lervalor(matriz);
    
    return (EXIT_SUCCESS);
}

