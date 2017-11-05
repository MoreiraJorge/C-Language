/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio4.c
 * Author: morei
 *
 * Created on 19 de Outubro de 2017, 22:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2, num3;

    puts("Insira o 1º numero:");
    scanf("%d", &num1);

    puts("Insira o 2º numero");
    scanf("%d", &num2);

    puts("Insira o 3º numero:");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3) {
        printf("O menor numero é : %d", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("O menor numero é : %d", num2);
    } else if (num3 < num1 && num3 < num2) {
        printf("O menor numero é : %d", num3);
    }
    return (EXIT_SUCCESS);
}

