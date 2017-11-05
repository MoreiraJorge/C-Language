/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio8.c
 * Author: morei
 *
 * Created on 20 de Outubro de 2017, 19:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hour_entry, hour_exit, min_entry, min_exit;
    int hour, min;

    puts("Indique as horas e os minutos de entrada");
    puts("Hora: ");
    scanf("%d", &hour_entry);
    puts("Minuto:");
    scanf("%d", &min_entry);

    puts("Indique as horas e os minutos de saida");
    puts("Hora: ");
    scanf("%d", &hour_exit);
    puts("Minuto:");
    scanf("%d", &min_exit);

    if (hour_entry > 23 && min_entry > 59 && hour_exit > 23 && min_entry > 59) {
        puts("INPUT INVALIDO");
    }

    if (hour_entry < hour_exit) {//calculo das horas
        hour = hour_exit - hour_entry;
    } else {
        hour = (hour_exit + 24) - hour_entry;
    }

    if (min_entry > min_exit) {
        hour = hour - 1; //retirar hora contada a mais
    } //p.e das 22:30 as 23:00 dar 30 min e nao 1h:30m 

    if (min_entry < min_exit) { //calculo dos minutos
        min = min_exit - min_entry;
    } else {
        min = (min_exit + 60) - min_entry;
    }

    if (min == 60) {
        min = min - 60; // corrigir quando p.e em vez de 1h:00m aparece 1h:60m 
    }

    if (hour_entry <= 23 && min_entry < 59 && hour_exit <= 23 && min_exit < 59){
        printf("Tempo de trabalho %dh:%dm", hour, min);
    }
    return (EXIT_SUCCESS);
}

