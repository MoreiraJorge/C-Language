/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio2-VGlobais.c
 * Author: morei
 *
 * Created on 4 de Novembro de 2017, 19:54
 */

#include <stdio.h>
#include <stdlib.h>
#include "Header2Global.h"

/*
 * 
 */
int num1, num2;
double result;
char opc;

int main(int argc, char** argv) {
     puts("Introduza um numero");
    scanf("%d", &num1);
    puts("Introduza outro numero");
    scanf("%d", &num2);
    
    cleanentrybuffer();

    puts("Qual a operação que pretende? + , - , * ou /");
    scanf("%c", &opc);

    switch (opc) {
        case '+': result = sum();
            break;
        case '-': result = subt();
            break;
        case '*': result = multip();
            break;
        case '/': result = divis();
            break;
        default: puts("INPUT INVALIDO");
    }

    printf("O resultado e : %.1lf\n", result);

    return (EXIT_SUCCESS);
}

