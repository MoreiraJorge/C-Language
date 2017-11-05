/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio1.c
 * Author: morei
 *
 * Created on 19 de Outubro de 2017, 16:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2;

    puts("Insira o 1º numero:");
    scanf("%d", &num1);

    puts("Insira o 2º numero:");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Numero maior: %d", num1);
    } else {
        printf("Numero maior: %d", num2);
    }
    return (EXIT_SUCCESS);
}

