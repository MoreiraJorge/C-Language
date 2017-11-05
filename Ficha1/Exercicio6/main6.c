/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main6.c
 * Author: morei
 *
 * Created on 13 de Outubro de 2017, 0:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    int num, ant, suc;
    //Primitivas executaveis----------------------------------------------------
    puts("Introduza um numero:");
        scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("O antecessor ao numero %d é: %d\n",num,ant);
    printf("O sucessor ao numero %d é: %d\n",num,suc);
    return (EXIT_SUCCESS);
}

