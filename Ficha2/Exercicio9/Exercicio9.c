/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio7.c
 * Author: morei
 *
 * Created on 20 de Outubro de 2017, 18:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;

    puts("Insira um numero");
    scanf("%d", &num);

    if (num % 2 == 0) {
        puts("O numero é par\n");
    } else {
        puts("O numero é impar\n");
    }

    return (EXIT_SUCCESS);
}

