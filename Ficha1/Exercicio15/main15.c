/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main15.c
 * Author: morei
 *
 * Created on 15 de Outubro de 2017, 17:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float comb, dist, Vmedia, Cmedio, litrosC;
    int hora1, hora2, min1, min2, hora, min, tempo1, tempo2, total;
    //Primitivas executaveis----------------------------------------------------
    puts("Introduza a hora de partida");
    printf("Horas:");
    scanf("%d", &hora1);
    tempo1 += hora1 * 3600;
    printf("Minutos:");
    scanf("%d", &min1);
    tempo1 += min1 * 60;
    
    puts("Introduza a hora de chegada");
    printf("Horas:");
    scanf("%d", &hora2);
    tempo2 += hora2 * 3600;
    printf("Minutos:");
    scanf("%d", &min2);
    tempo2 += min2 * 60;
    
    puts("Insira uma distancia(KM)");
    scanf("%f",&dist);
    
    puts("Insira a quantidade de Combustivel(L)");
    scanf("%f",&litrosC);
    
    total = tempo2 - tempo1;
    
    hora = total / 3600;
    min =(total % 3600) / 60;
    
    dist = dist * 1000;
    Vmedia = dist/total;
    Vmedia = (Vmedia / 1000) * 3600;
    
    Cmedio = litrosC / dist;
    Cmedio = Cmedio * 1000;

    printf("A duração da viagem foi de %dh:%dm\n",hora,min);
    printf("A velocidade media e de %.2f KM/H\n",Vmedia);
    printf("O consumo medio e de %.2f L/KM\n",Cmedio);
    return (EXIT_SUCCESS);
}