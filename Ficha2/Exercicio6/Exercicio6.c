/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio6.c
 * Author: morei
 *
 * Created on 20 de Outubro de 2017, 18:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hour, min;

    puts("Introduza o horario a converter\nHora: ");
    scanf("%d", &hour);
    puts("Minuto:");
    scanf("%d", &min);

        if (hour > 0 && hour < 12) {
            printf("Sao %dh:%dm AM\n", hour, min);
        } else if (hour > 12 && hour < 23) {
            printf("Sao %dh:%dm PM\n", hour - 12, min);
        } else if (hour == 12) {
            printf("Sao %dh:%dm PM\n", hour, min);
        } else if (hour == 0){
            printf("Sao %dh:%dm AM\n", hour + 12, min);
        }

    return (EXIT_SUCCESS);
}

