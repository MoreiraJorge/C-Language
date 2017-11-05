/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio6.c
 * Author: morei
 *
 * Created on 26 de Outubro de 2017, 15:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int max, jump, value;
    
    puts("Introduza um valor limite");
    scanf("%d", &max);
    puts("Introduza um valor para o salto");
    scanf("%d", &jump);
    
    while (max >= value){
    printf("%d\n", value);
    value += jump;
    }
    return (EXIT_SUCCESS);
}

