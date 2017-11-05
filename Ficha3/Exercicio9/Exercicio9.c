/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio9.c
 * Author: morei
 *
 * Created on 27 de Outubro de 2017, 14:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n = 1, number;

    puts("Introduza qual a tabuada que pretende");
    scanf("%d", &number);

    while (n <= 10) {
        printf("%d * %d = %d\n", number, n, number * n);
        n += 1;
    }
    return (EXIT_SUCCESS);
}

