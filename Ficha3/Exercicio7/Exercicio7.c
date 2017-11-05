/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio7.c
 * Author: morei
 *
 * Created on 26 de Outubro de 2017, 16:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int number;

    puts("Introduza um numero:");
    scanf("%d", &number);

    if (number <= 0) {
        puts("ERRO!!!! Introduza valores maiores que 0");
    } else {
        number = number - 1;
        while (number >= 0) {
            printf("%d ", number);
            number -= 2;
        }
    }
    return (EXIT_SUCCESS);
}

