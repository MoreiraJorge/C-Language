/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio11.c
 * Author: morei
 *
 * Created on 22 de Outubro de 2017, 17:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float X, Y;

    puts("Escreva um valor para X");
    scanf("%f", &X);

    if (X < 1) {
        Y = X;
        printf("O valor de Y é : %.1f", Y);
    } else if (X == 1) {
        Y = 0;
        printf("O valor de Y é : %.f", Y);
    } else if (X > 1) {
        Y = 2 * X;
        printf("O valor de Y é : %.1f", Y);
    }
    return (EXIT_SUCCESS);
}

