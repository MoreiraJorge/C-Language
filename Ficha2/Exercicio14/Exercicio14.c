/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio14.c
 * Author: morei
 *
 * Created on 22 de Outubro de 2017, 18:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void limparBuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {
    double current_balance, ammount, final_balance;
    char opc;

    puts("Introduza o seu saldo");
    scanf("%lf", &current_balance);

    limparBuffer();

    puts("introduza D ou d para debitar ou entao C ou c para creditar");
    scanf("%c", &opc);

    if (opc == 'D' || opc == 'd') {
        puts("Introduza uma quantia");
        scanf("%lf", &ammount);
        if (ammount < current_balance) {
            final_balance = current_balance - ammount;
            puts("Debito realizado com successo!!!");
            printf("Debitou %.1lf euros da sua conta\n o seu saldo final é %.1lf Euros\n", ammount, final_balance);
        } else {
            puts("Operação invalida por saldo insuficiente");
        }
    } else if (opc == 'C' || opc == 'c') {
        puts("Introduza uma quantia");
        scanf("%lf", &ammount);
        final_balance = current_balance + ammount;
        puts("Credito realizado com successo!!");
        printf("Creditou %.1lf euros da sua conta\n o seu saldo final é %.1lf Euros\n", ammount, final_balance);
    }
    return (EXIT_SUCCESS);
}

