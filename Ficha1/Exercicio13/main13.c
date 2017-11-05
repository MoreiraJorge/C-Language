/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main13.c
 * Author: morei
 *
 * Created on 15 de Outubro de 2017, 15:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    int hora, seg, min, total;
    int min_musica, seg_musica;
    //Primitivas executaveis----------------------------------------------------
    puts("Tempo da musica 1");
    printf("Minutos:");
    scanf("%d", &min_musica);
    total += min_musica * 60;
    printf("Segundos:");
    scanf("%d", &seg_musica);
    total += seg_musica;

    puts("Tempo da musica 2");
    printf("Minutos:");
    scanf("%d", &min_musica);
    total += min_musica * 60;
    printf("Segundos:");
    scanf("%d", &seg_musica);
    total += seg_musica;

    puts("Tempo da musica 3");
    printf("Minutos:");
    scanf("%d", &min_musica);
    total += min_musica * 60;
    printf("Segundos:");
    scanf("%d", &seg_musica);
    total += seg_musica;

    puts("Tempo da musica 4");
    printf("Minutos:");
    scanf("%d", &min_musica);
    total += min_musica * 60;
    printf("Segundos:");
    scanf("%d", &seg_musica);
    total += seg_musica;

    puts("Tempo da musica 5");
    printf("Minutos:");
    scanf("%d", &min_musica);
    total += min_musica * 60;
    printf("Segundos:");
    scanf("%d", &seg_musica);
    total += seg_musica;

    hora = total / 3600;
    min = total % (3600 / 60);
    seg = total - (hora + min) * 60;

    printf("A duração do album é %dh:%dm:%ds\n", hora, min, seg);
    return (EXIT_SUCCESS);
}

