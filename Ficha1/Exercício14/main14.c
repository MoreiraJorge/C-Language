/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main14.c
 * Author: morei
 *
 * Created on 15 de Outubro de 2017, 17:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float voto1, voto2, voto3, voto4, voto5, totalvotos;
    //primitivas executaveis----------------------------------------------------
    puts("Votos do primeiro candidato:");
        scanf("%f",&voto1);
    puts("Votos do segundo candidato:");
        scanf("%f",&voto2);
    puts("Votos do terceiro candidato:");
        scanf("%f",&voto3);
    puts("Votos do quarto candidato:");
        scanf("%f",&voto4);
    puts("Votos do quinto candidato:");
        scanf("%f",&voto5);    
        totalvotos = voto1 + voto2 + voto3 + voto4 + voto5;
printf("A percentagem do primeiro candidato e %.2f%%\n",(voto1/totalvotos)*100);
printf("A percentagem do segundo candidato e %.2f%%\n",(voto2/totalvotos)*100);
printf("A percentagem do terceiro candidato e %.2f%%\n",(voto3/totalvotos)*100);
printf("A percentagem do quarto candidato e %.2f%%\n",(voto4/totalvotos)*100);
printf("A percentagem do quinto candidato e %.2f%%\n",(voto5/totalvotos)*100);   
    return (EXIT_SUCCESS);
}

