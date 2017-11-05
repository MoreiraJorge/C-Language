/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio12.c
 * Author: morei
 *
 * Created on 27 de Outubro de 2017, 16:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    float sum, number;

    while (number != -1.0) {
        puts("Insira um numero:");
        scanf("%f", &number);
        if (number == -1.0) {
            printf("A media e de %.1f\n", sum / n);
        } else {
            sum += number;
            n++;
        }
    }
    return (EXIT_SUCCESS);
}

