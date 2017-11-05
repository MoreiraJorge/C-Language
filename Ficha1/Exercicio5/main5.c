/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main5.c
 * Author: morei
 *
 * Created on 13 de Outubro de 2017, 0:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float base, alt, area;
    //Primitivas executaveis----------------------------------------------------
    puts("Insira os valores para calcular a area do triangulo");
    puts("base:");
        scanf("%f",&base);
    puts("altura:");
        scanf("%f",&alt);
    area = (base*alt) / 2;
    printf("a área é %.2f\n",area);    
    return (EXIT_SUCCESS);
}

