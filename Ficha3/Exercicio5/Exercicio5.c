/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio5.c
 * Author: morei
 *
 * Created on 26 de Outubro de 2017, 15:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int number, count = 0;
 
    puts("Introduza um numero:");
    scanf("%d", &number);

    for (count = number + 1; count <= number + 5; ++count){
        printf("Sucessores:%d\n", count);
    }
    
    for (count = number - 1; count >= number - 5; --count){
        printf("Antecessores:%d\n", count);
    }
    return (EXIT_SUCCESS);
}

