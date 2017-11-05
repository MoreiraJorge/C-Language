/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio4.c
 * Author: morei
 *
 * Created on 26 de Outubro de 2017, 14:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int number, sum = 0;
    
    for (number = 1; number <= 100; ++number){
        printf("%d\n", number);
        sum += number;
    }
    printf("Somatorio: %d", sum);
    return (EXIT_SUCCESS);
}

