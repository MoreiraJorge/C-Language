/* 
 * File:   Functions.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 12 de Novembro de 2017, 23:55
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void printarray(float numbers[]) {
    int i = 0;

    puts("Numeros no array:");
    for (i; i < MAX; ++i) {
        printf(" || %.1f", numbers[i]);
    }
    puts("");
}

void prindouble(float numbers[]) {
    int i = 0;

    puts("Dobro dos numeros do array:");
    for (i; i < MAX; ++i) {
        printf(" || %.1f", 2 * numbers[i]);
    }
    puts("");
}

void printsum(float numbers[]) {
    int i = 0;
    float sum = 0;

    puts("somatorio dos numeros do array:");

    for (i; i < MAX; ++i) {
        sum += numbers[i];
    }
    printf(" || %.1f", sum);
    puts("");
}

void printaverage(float numbers[]) {
    int i = 0, count = 0;
    float sum = 0;

    puts("Media dos numeros do array:");

    for (i; i < MAX; ++i) {
        sum += numbers[i];
        ++count;
    }
    printf(" || %.1f", sum / count);
    puts("");
}

void printgreaternum(float numbers[]) {
    int i;
    float num = 0;

    puts("O maior numero do array:");

    for (i = 0; i < MAX; ++i) {
        if (numbers[i] > num) {
            num = numbers[i];
        }
    }
    printf(" || %.1f", num);
    puts("");

}

void printsmallernum(float numbers[]) {
    int i;
    float num = numbers[0];

    puts("O menor numero do array:");

    for (i = 0; i < MAX; ++i) {
        if (numbers[i] < num) {
            num = numbers[i];
        }
    }
    printf(" || %.1f", num);
    puts("");

}