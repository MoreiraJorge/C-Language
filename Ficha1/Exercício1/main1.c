/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main1.c
 * Author: morei
 *
 * Created on 12 de Outubro de 2017, 22:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de Variáveis---------------------------------------------------
    int num1, num2, res;
    //Primitivas Executáveis---------------------------------------------------- 
    puts("Introduza um numero:");
        scanf("%d", &num1);
    puts("Introduza outro numero:");
        scanf("%d", &num2);
    res = num1 + num2;
    printf("A soma é %d + %d = %d\n",num1,num2,res);
    return (EXIT_SUCCESS);
}

