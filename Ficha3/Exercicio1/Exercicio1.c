/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio1.c
 * Author: morei
 *
 * Created on 26 de Outubro de 2017, 13:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int number = 1;

    while (number >= 1 && number <= 100) {
        printf("%d\n", number);
        number++;
    }
    return (EXIT_SUCCESS);
}

