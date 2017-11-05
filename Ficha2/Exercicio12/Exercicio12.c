/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio12.c
 * Author: morei
 *
 * Created on 22 de Outubro de 2017, 17:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int X, Y;

    puts("Insira a coordenada X");
    scanf("%d", &X);

    puts("Insira a coordenada Y");
    scanf("%d", &Y);

    if (X > 0 && Y > 0) {
        puts("O ponto esta no 1º Quadrante");
    } else if (X < 0 && Y > 0) {
        puts("O ponto esta no 2º Quadrante");
    } else if (X < 0 && Y < 0) {
        puts("O ponto esta no 3º Quadrante");
    } else if (X > 0 && Y < 0) {
        puts("O ponto esta no 4º Quadrante");
    } else if (X == 0 && Y > 0) {
        puts("O ponto situa-se no eixo YY na parte positiva");
    } else if (X == 0 && Y < 0) {
        puts("O ponto situa-se no eixo YY na parte negativa");
    } else if (X > 0 && Y == 0) {
        puts("O ponto situa-se no eixo XX na parte positiva");
    } else if (X < 0 && Y == 0) {
        puts("O ponto situa-se no eixo XX na parte negativa");
    }
    return (EXIT_SUCCESS);
}

