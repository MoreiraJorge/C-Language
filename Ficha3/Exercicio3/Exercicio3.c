/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio3.c
 * Author: morei
 *
 * Created on 26 de Outubro de 2017, 14:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int min, max, num;

    puts("Introduza o primeiro numero:");
    scanf("%d", &min);
    puts("Introduza o segundo numero:");
    scanf("%d", &max);

    for (num = min + 1 ; num <= max - 1; ++num){
         printf("%d ", num);
    }
    return (EXIT_SUCCESS);
}

