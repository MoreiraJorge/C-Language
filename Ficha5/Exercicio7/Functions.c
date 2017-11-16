/* 
 * File:   Functions.c
 * Author: Jorge Moreira
 * Fucha 5
 * Created on 16 de Novembro de 2017, 12:15
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//Pedir valores do array A

int askarrayA(int arrayA[]) {
    int i;
    for (i = 0; i < MAX; ++i) {
        puts("Introduza um numero array A:");
        scanf("%d", &arrayA[i]);
    }
    return arrayA[i];
}

//Pedir valores do array B

int askarrayB(int arrayB[]) {
    int i;
    for (i = 0; i < MAX; ++i) {
        puts("Introduza um numero array B:");
        scanf("%d", &arrayB[i]);
    }
    return arrayB[i];
}

//Imprimir Array A

void printarrayA(int arrayA[]) {
    int i;
    for (i = 0; i < MAX; i++) {
        printf("%d ", arrayA[i]);
    }
}

//Imprimir Array B

void printarrayB(int arrayB[]) {
    int i;
    for (i = 0; i < MAX; i++) {
        printf("%d ", arrayB[i]);
    }
}

//ARRAY C

void buildarrayC(int arrayC[], int arrayA[], int arrayB[]) {
    int i;
    for (i = 0; i < MAX; i++) {
        arrayC[i] = arrayA[i] + arrayB[i];
        printf("%d ", arrayC[i]);
    }
}

//Array D

void buildarrayD(int arrayA[], int arrayB[], int arrayD[]) {
    int i, j;
    int count = 0;
    int countarray = 0;
    for (i = 0; i < MAX; ++i) {
        for (j = 0; j < MAX; ++j) {
            if (arrayA[i] == arrayB[j]) {
                break;
            } else {
                count += 1;
            }
        }
        if (count == 10) {
            arrayD[countarray] = arrayA[i];
            countarray += 1;
        }
        count = 0;
    }

    for (i = 0; i < countarray; ++i) {
        printf("%d ", arrayD[i]);
    }
}

//Array E

void buildarrayE(int arrayA[], int arrayB[], double arrayE[]) {
    int i, j, k;
    int count = 0;
    int verify = 0;

    for (i = 0; i < MAX; ++i) {
        arrayE[i] = 0.5;
    }

    for (i = 0; i < MAX; ++i) {
        for (j = 0; j < MAX; ++j) {
            if (arrayA[i] == arrayB[j]) {
                verify = 0;
                for (k = j; k < MAX; ++k) {
                    if (arrayA[i] == arrayA[k]) {
                        verify += 1;
                    }
                }
                if (verify == 1) {
                    arrayE[count] = arrayA[i];
                    count += 1;
                }
            }
        }
    }
    for (i = 0; i < MAX; ++i) {
        if (arrayE[i] == 0.5) {
            continue;
        } else {
            printf("%.0lf ", arrayE[i]);
        }
    }
}
