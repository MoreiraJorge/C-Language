/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio3.c
 * Author: morei
 *
 * Created on 19 de Outubro de 2017, 22:09
 */

#include <stdio.h>
#include <stdlib.h>

#define weight1 0.25
#define weight2 0.35
#define weight3 0.40
/*
 * 
 */
int main(int argc, char** argv) {
    float grade1, grade2, grade3, Final_Grade;

        puts("Insira a 1ª classificação:");
        scanf("%f", &grade1);

        puts("Insira a 2ª classificação:");
        scanf("%f", &grade2);

        puts("Insira a 3ª classificação:");
        scanf("%f", &grade3);

    Final_Grade = (grade1 * weight1) + (grade2 * weight2) + (grade3 * weight3);
    if (Final_Grade > 9.5) {
        printf("A classificação final é: %.1f\n", Final_Grade);
        puts("O aluno Passou!!!!");
    } else {
        printf("A classificação final é: %.1f\n", Final_Grade);
        puts("O aluno Reprovou :(");
    }
    return (EXIT_SUCCESS);
}

