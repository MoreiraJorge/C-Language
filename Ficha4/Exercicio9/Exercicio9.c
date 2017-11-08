/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio9.c
 * Author: Jorge Moreira
 *
 * Created on 8 de Novembro de 2017, 19:07
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n;
    
    puts("Introduza um limite de numeros");
    scanf("%d", &n);
    
    printnumbers(n);
    
    
    return (EXIT_SUCCESS);
}

