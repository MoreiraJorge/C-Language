/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main12.c
 * Author: morei
 *
 * Created on 15 de Outubro de 2017, 15:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    long int n_segundos;
    //Primitivas executaveis----------------------------------------------------
    puts("Introduza o numero de segundos:");
        scanf("%d",&n_segundos);
    printf("Horas : %d\n",n_segundos/3600);//conversao segundos a horas completas
    printf("Minutos : %d\n",n_segundos%3600/60);//conversao de segundos a minutos completos
    printf("Segundos : %d\n",n_segundos % 60);//resto dos segundos
    return (EXIT_SUCCESS);
}

