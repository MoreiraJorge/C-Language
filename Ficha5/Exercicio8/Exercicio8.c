/* 
 * File:   Exercicio8.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 15 de Novembro de 2017, 18:17
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main(int argc, char** argv) {
    int numbers[MAX], i, num;

    puts("introduza um numero");
    scanf("%d", &num);

    if (num >= 1000 && num <= 0) {
        for (i = 0; i < num; ++i) {
            numbers[i] = i;
        }

        for (i = 4; i < num; i += 2) {
            numbers[i] = 0;
        }

        for (i = 6; i < num; i += 3) {
            numbers[i] = 0;
        }

        for (i = 10; i < num; i += 5) {
            numbers[i] = 0;
        }

        for (i = 14; i < num; i += 7) {
            numbers[i] = 0;
        }

        for (i = 2; i < MAX; ++i) {
            printf("%d\n ", numbers[i]);
        }
    } else {
        puts("NUMERO FORA DO LIMITE!!");
    }

    return (EXIT_SUCCESS);
}

