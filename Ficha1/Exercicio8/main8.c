/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main8.c
 * Author: morei
 *
 * Created on 13 de Outubro de 2017, 21:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float C, F;
    //Primitivas executaveis----------------------------------------------------
    puts("Introduza a temperatura em Fahrenheit:");
        scanf("%f",&F);
    C = (F-32)*5/9;
    printf("A temperatura em celsius e %.2f graus\n",C);
    return (EXIT_SUCCESS);
}

