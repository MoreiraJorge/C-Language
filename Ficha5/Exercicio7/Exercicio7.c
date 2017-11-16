/* 
 * File:   Exercicio7.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 16 de Novembro de 2017, 10:29
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"
#define MAX 10

int main(int argc, char** argv) {
    int arrayA[MAX];
    int arrayB[MAX];
    int arrayC[MAX];
    int arrayD[MAX];
    int arrayE[MAX];
    
    askarrayA(arrayA);
    puts("");
    askarrayB(arrayB);
    printarrayA(arrayA);
    puts("");
    printarrayB(arrayB);
    puts("");
    buildarrayC(arrayC,arrayA,arrayB);
    puts("");
    buildarrayD(arrayA,arrayB,arrayD);
    puts("");
    buildarrayE(arrayA,arrayB,arrayE);


    return (EXIT_SUCCESS);
}

