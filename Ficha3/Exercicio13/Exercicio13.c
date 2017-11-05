/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio13.c
 * Author: morei
 *
 * Created on 27 de Outubro de 2017, 18:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int score;

    while (1) {
        puts("Introduza a cotacao");
        scanf("%d", &score);
        if (score >= 0 && score < 10) {
            puts("O aluno esta reprovado!!!!");
        } else if (score >= 10 && score <= 20) {
            puts("O aluno esta aprovado");
            break;
        } else {
            puts("Introduza uma nota valida (0 - 20)");
        }
    }
    return (EXIT_SUCCESS);
}

