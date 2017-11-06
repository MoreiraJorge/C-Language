/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio6.c
 * Author: Jorge Moreira
 *
 * Created on 6 de Novembro de 2017, 22:01
 */

#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"
/*
 * 
 */
int main(int argc, char** argv) {
    char symbol;
    int column, line;
    
    puts("Introduza um caracter pra desenhar o retangulo");
    scanf("%c", &symbol);
    
    void cleanentrybuffer();
    
    puts("Introduza o numero de linhas");
    scanf("%d", &line);
    puts("Introduza o numero de colunas");
    scanf("%d", &column);
    
    functiondraw(symbol, column, line);
    
    
    return (EXIT_SUCCESS);
}

