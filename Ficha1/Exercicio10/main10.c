/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main10.c
 * Author: morei
 *
 * Created on 13 de Outubro de 2017, 22:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float a, b, c, d, e;
    float media;
    //Primitivas executaveis----------------------------------------------------
    puts("Introduza o primeiro numero:");
        scanf("%f", &a);
    puts("Introduza o segundo numero:");
        scanf("%f", &b);
    puts("Introduza o terceiro numero:");
        scanf("%f", &c);
    puts("Introduza o quarto numero");
        scanf("%f", &d);
    puts("Introduza o quinto numero");
        scanf("%f", &e);
    media = (a + b + c + d + e) / 5;
    printf("A media é de %.1f\n", media);
    return (EXIT_SUCCESS);
}

