/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio5.c
 * Author: Jorge Moreira
 *
 * Created on 6 de Novembro de 2017, 21:52
 */

#include <stdio.h>
#include <stdlib.h>
#include    "Factorial.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    int number, factorial;
    
    puts("Introduza o numero para calcular o fatorial");
    scanf("%d", &number);
    
    factorial = functionfactorial(number);
    
    printf("O fatorial de %d é %d", number, factorial);
    
    return (EXIT_SUCCESS);
}

