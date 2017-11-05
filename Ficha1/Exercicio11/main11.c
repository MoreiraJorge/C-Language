/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main11.c
 * Author: morei
 *
 * Created on 15 de Outubro de 2017, 14:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float Nota1, Nota2, Nota3, Media;
    //Primitivas executaveis----------------------------------------------------
    puts("Introduza a primeira Nota:");
        scanf("%f",&Nota1);
    puts("Introduza a segunda Nota:");
        scanf("%f",&Nota2);
    puts("Introduza a terceira Nota:");
        scanf("%f",&Nota3);         
        Media = (Nota1*0.25 + Nota2*0.35 + Nota3*0.40) / (0.25+0.35+0.40);
    printf("A sua media é de %.1f\n", Media);
    return (EXIT_SUCCESS);
}

