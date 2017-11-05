/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio2.c
 * Author: morei
 *
 * Created on 19 de Outubro de 2017, 22:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2;
    
    puts("Insira o primeiro valor:");
    scanf("%d",&num1);
    
    puts("Insira o segundo valor:");
    scanf("%d",&num2);
    
    if(num1 > num2){
        printf("Ordem: %d > %d",num1,num2);
    } else {
        printf("Ordem: %d > %d",num2,num1);
    }
    return (EXIT_SUCCESS);
}

