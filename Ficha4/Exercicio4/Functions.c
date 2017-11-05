/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>


float askgrade(int n) {
    int i;
    float sum = 0, a;
    for (i = 1; i <= n; ++i) {
        printf("Introduza o valor da nota %d\n", i);
        scanf("%f", &a);
        sum += a;
    }
    return sum;
}

float functionaverage(float sum, int n){
    float average;
    average = sum / n;
    return average;
}
