/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main4.c
 * Author: morei
 *
 * Created on 13 de Outubro de 2017, 0:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Daclaração de variaveis---------------------------------------------------
    double PI = 3.1415927;
    float r, perim, area;
    //Primitivas executaveis----------------------------------------------------
    puts("Introduza o valor do raio:");
        scanf("%f", &r);
    area = PI * r*r;
    perim = 2*PI*r;
    printf("O perimetro é %.2f\n",perim);
    printf("A área é %.2f\n",area);
    return (EXIT_SUCCESS);
}

