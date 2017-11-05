/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio7.c
 * Author: morei
 *
 * Created on 20 de Outubro de 2017, 20:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2, num3;

    puts("Insira o primeiro valor:");
    scanf("%d", &num1);

    puts("Insira o segundo valor:");
    scanf("%d", &num2);

    puts("Insira o terceiro valor:");
    scanf("%d", &num3);

    if (num1 > num2 && num2 > num3) {
        printf("Ordem: %d < %d < %d", num3, num2, num1);
    } else if (num1 > num3 && num3 > num2) {
        printf("Ordem: %d < %d < %d", num2, num3, num1);
    }

    if (num2 > num1 && num1 > num3) {
        printf("Ordem: %d < %d < %d", num3, num1, num2);
    } else if (num2 > num3 && num3 > num1) {
        printf("Ordem: %d < %d < %d", num1, num3, num2);
    }

    if (num3 > num2 && num2 > num1) {
        printf("Ordem: %d < %d < %d", num1, num2, num3);
    } else if (num3 > num1 && num1 > num2) {
        printf("Ordem: %d < %d < %d", num2, num1, num3);
    }
    return (EXIT_SUCCESS);
}

