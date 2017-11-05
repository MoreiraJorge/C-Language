/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio5.c
 * Author: morei
 *
 * Created on 19 de Outubro de 2017, 23:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void limparBufferEntrada(){ char ch; while ((ch = getchar()) != '\n' && ch != EOF); }

int main(int argc, char** argv) {
    float num1, num2;
    char opc;

    puts("Insira o primeiro numero");
    scanf("%f", &num1);

    puts("Insira o segundo numero");
    scanf("%f", &num2);
    
    limparBufferEntrada();

    puts("Qual a Operação que deseja efetuar?(+ , - , * , /)");
    scanf("%c",&opc);

    switch (opc) {
        case '+': printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-': printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*': printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/': printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
        default: printf("INPUT INVALIDO!!");
    }
    return (EXIT_SUCCESS);
}

