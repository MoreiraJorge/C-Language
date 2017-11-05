/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio13.c
 * Author: morei
 *
 * Created on 22 de Outubro de 2017, 17:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

#define second_1 180;
#define second_2 160;

int main(int argc, char** argv) {
    int current_temp, intended_temp, temp_range, time;

    puts("Qual a temperatura atual?");
    scanf("%d", &current_temp);

    puts("Qual a temperatura pretendida?");
    scanf("%d", &intended_temp);

    if (intended_temp > current_temp) {
        temp_range = intended_temp - current_temp;
        time = second_1 * temp_range;
        printf("E preciso %d segundos para atingir os %d graus", time, intended_temp);
    } else {
        temp_range = current_temp - intended_temp;
        time = second_2 * temp_range;
        printf("E preciso %d segundos para atingir os %d graus", time, intended_temp);
    }
    return (EXIT_SUCCESS);
}

