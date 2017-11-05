/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio3.c
 * Author: morei
 *
 * Created on 4 de Novembro de 2017, 20:17
 */

#include <stdio.h>
#include <stdlib.h>
#include "Header3.h"

/*
 * 
 */
int main(int argc, char** argv) {
    double value, result;
    char type;

    value = readDouble();
    type = readChar();
    result = convert(value, type);

    printf("O resultado da conversão e %.2lf", result);

    return (EXIT_SUCCESS);
}

