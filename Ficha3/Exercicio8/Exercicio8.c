/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio8.c
 * Author: morei
 *
 * Created on 27 de Outubro de 2017, 13:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, number;

    puts("Introduza quantos sao os primeiros numeros pares que deseja:");
    scanf("%d", &n);
    
    for (number = 2; number <= n * 2 ; number += 2){
        printf("%d ",number);
    }
    return (EXIT_SUCCESS);
}

