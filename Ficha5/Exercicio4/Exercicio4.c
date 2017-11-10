
/* 
 * File:   Exercicio4.c
 * Author: Jorge Moreira
 * Ficha 5
 * Created on 10 de Novembro de 2017, 19:23
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(int argc, char** argv) {
    
    float numbers[MAX], sum = 0;
    int count = 0, i;
    
    for (i = 0; i < MAX; i++){
       puts("Introduza um valor");
       scanf("%f", &numbers[i]);
       
       if (numbers[i] == -1){
           break;
       } else {
           count++;
       }
       sum += numbers[i];
    }
    
    printf("numeros: %d\n", count);
    printf("Somatorio: %.1f\n", sum);
    printf("Media: %.2f", sum/count);
    
    return (EXIT_SUCCESS);
}

