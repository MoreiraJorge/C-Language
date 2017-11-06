/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio7.c
 * Author: Jorge Moreira
 *
 * Created on 6 de Novembro de 2017, 22:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int value, min = 1, max = 100;
    
    value = readinteger(min, max);
    
    printsymbol(value);
    
    return (EXIT_SUCCESS);
}

