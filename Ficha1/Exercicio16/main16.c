/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main16.c
 * Author: morei
 *
 * Created on 15 de Outubro de 2017, 23:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    double saldo, deposito, valorjuros, saldoconta;
    float taxa;
    //Primitivas executaveis----------------------------------------------------
    puts("Insira o saldo da sua conta:");
    scanf("%lf",&saldoconta);
    
    puts("Insira uma taxa de juro(%):");
    scanf("%f", &taxa);
    taxa = taxa / 100;
    
    puts("Deposito primeiro Trimestre(€):");
    scanf("%lf", &deposito);
    valorjuros = (deposito + saldoconta) * taxa;
    saldoconta += deposito + valorjuros;
    printf("Deposito 1º trimestre: %.2lf\n",deposito);
    printf("Valor dos juros: %.2lf\n",valorjuros);
    printf("Saldo na sua conta: %.2lf\n",saldoconta);
    
    
    puts("Deposito segundo Trimestre(€):");
    scanf("%lf", &deposito);
    valorjuros = (deposito + saldoconta) * taxa;
    saldoconta += deposito + valorjuros;
    printf("Deposito 2º trimestre: %.2lf\n",deposito);
    printf("Valor dos juros: %.2lf\n",valorjuros);
    printf("Saldo na sua conta: %.2lf\n",saldoconta);
    
    puts("Deposito terceiro Trimestre(€):");
    scanf("%lf", &deposito);
    valorjuros = (deposito + saldoconta) * taxa;
    saldoconta += deposito + valorjuros;
    printf("Deposito 3º trimestre: %.2lf\n",deposito);
    printf("Valor dos juros: %.2lf\n",valorjuros);
    printf("Saldo na sua conta: %.2lf\n",saldoconta);
    
    puts("Deposito quarto Trimestre(€):");
    scanf("%lf", &deposito);
    valorjuros = (deposito + saldoconta) * taxa;
    saldoconta += deposito + valorjuros;
    printf("Deposito 3º trimestre: %.2lf\n",deposito);
    printf("Valor dos juros: %.2lf",valorjuros);
    printf("Saldo na sua conta: %.2lf\n",saldoconta);
    return (EXIT_SUCCESS);
}

