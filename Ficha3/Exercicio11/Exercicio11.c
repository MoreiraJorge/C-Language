/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio11.c
 * Author: morei
 *
 * Created on 27 de Outubro de 2017, 14:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 1, num, rest, count_rest;

    puts("Introduza um numero");
    scanf("%d", &num);

    while (n <= num) {
        rest = num % n;
        n++;
        if (rest == 0) {
            count_rest += 1; // contar o numero de restos iguais a 0
        }
    }

    if (count_rest == 2) {
        puts("O numero é primo");
    } else {
        puts("O numero nao é primo");
    }
    return (EXIT_SUCCESS);
}

