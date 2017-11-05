/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main3.c
 * Author: morei
 *
 * Created on 12 de Outubro de 2017, 23:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//------------------------------------------------------------------------------
int main(int argc, char** argv) {
    //Declaração de Variaveis---------------------------------------------------
    int comp, larg, area, perim;
    //Primitivas executaveis----------------------------------------------------
    puts("Insira os valores pra calcular a área e o perímetro");
    puts("Comprimento:");
        scanf("%d", &comp);
    puts("Largura:");
        scanf("%d", &larg);
    area = comp * larg;
    perim = (larg * 2) + (comp * 2);
    printf("A área é: %d\n",area);
    printf("O perimetro é: %d\n",perim);
    return (EXIT_SUCCESS);
}

