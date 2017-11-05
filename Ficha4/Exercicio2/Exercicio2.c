/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio2.c
 * Author: morei
 *
 * Created on 4 de Novembro de 2017, 18:13
 */

#include <stdio.h>
#include <stdlib.h>
#include "header2.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2;
    double result;
    char opc;

    puts("Introduza um numero");
    scanf("%d", &num1);
    puts("Introduza outro numero");
    scanf("%d", &num2);
    
    cleanentrybuffer();

    puts("Qual a operação que pretende? + , - , * ou /");
    scanf("%c", &opc);

    switch (opc) {
        case '+': result = sum(num1, num2);
            break;
        case '-': result = subt(num1, num2);
            break;
        case '*': result = multip(num1, num2);
            break;
        case '/': result = divis(num1, num2);
            break;
        default: puts("INPUT INVALIDO");
    }

    printf("O resultado e : %.1lf\n", result);

    return (EXIT_SUCCESS);
}

