/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#define E2D 1.17
#define D2E 0.85

char type;
double value;

double convert(double value, char type) {
    return value * (type == 'D' || type == 'd' ? E2D : D2E);
}

double readDouble() {
    puts("Insira o seu valor a converter:");
    scanf("%lf", &value);
    return value;
}

char readChar() {
    puts("Qual a conversao que pretende? D/d - Dolar ou E/e - Euro");
    scanf(" %c", &type);
    return type;
}