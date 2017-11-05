/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main9.c
 * Author: morei
 *
 * Created on 13 de Outubro de 2017, 21:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaração de variaveis---------------------------------------------------
    float IMC, alt, peso;
    //Primitivas executaveis----------------------------------------------------
    puts("Insira o seu peso(KG):");
        scanf("%f",&peso);
    puts("Insira a sua altura(m):");
        scanf("%f",&alt);
        IMC = peso/(alt*alt);
    printf("O seu IMC é de %.2f kg/m2\n",IMC);
    
    
    return (EXIT_SUCCESS);
}

