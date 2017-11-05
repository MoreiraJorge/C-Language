/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main2.c
 * Author: morei
 *
 * Created on 12 de Outubro de 2017, 22:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variáveis---------------------------------------------------
    int num1, num2, Pres, Sres;
    //Primitivas Executáveis----------------------------------------------------
    puts("Introduza um valor:");
        scanf("%d", &num1);
    puts("Introduza outro valor");
        scanf("%d", &num2);
    Pres = num1 - num2;
    Sres = Pres * num1;
    printf("A subtração é %d - %d = %d\n",num1,num2,Pres);
    printf("A multiplicação é %d * %d = %d\n",Pres,num1,Sres);
    return (EXIT_SUCCESS);
}

