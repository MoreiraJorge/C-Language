/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio2.c
 * Author: morei
 *
 * Created on 26 de Outubro de 2017, 14:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int number = 2;

    while (number >= 1 && number <= 300) {
        printf("%d\n", number);
        number += 2;
    }
    return (EXIT_SUCCESS);
}

