/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   7.c
 * Author: morei
 *
 * Created on 13 de Outubro de 2017, 18:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float VLuz = 3.0E5, dist, tempo; //VLus está em km/s, em m/s seria 3.0E8
    //Primitivas Executaveis----------------------------------------------------
    printf("Insira uma Distancia(KM):\n");
        scanf("%f", &dist);
    tempo = dist / VLuz;
    printf("Uma viagem de %.2f KM a velocidade da luz, demora %e segundos\n",dist,tempo);
    return (EXIT_SUCCESS);
}

