/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio4.c
 * Author: morei
 *
 * Created on 5 de Novembro de 2017, 15:34
 */

#include <stdio.h>
#include <stdlib.h>
#include "Header4.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    float average, sum;

    puts("Introduza o numero de notas");
    scanf("%d", &n);

    sum = askgrade(n);
    average = functionaverage(sum, n);

    printf("A Media das notas e %.2f", average);

    return (EXIT_SUCCESS);
}

