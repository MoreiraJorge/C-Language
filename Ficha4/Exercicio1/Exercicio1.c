/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio1.c
 * Author: morei
 *
 * Created on 4 de Novembro de 2017, 17:45
 */

#include <stdio.h>
#include <stdlib.h>
#include "header1.h"
/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    
    puts("Introduza um valor:");
    num = readnumber();
    printsymbol(num);
    
    return (EXIT_SUCCESS);
}

