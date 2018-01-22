/* 
 * File:   Trabalho1.c
 * Author: Jorge Moreira
 * Trabalho pratico 
 * Created on 27 de Novembro de 2017, 20:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"


int main(int argc, char** argv) {
    char token[MAX];
    char tabela[TAM][TAM];
    
    puts("TABELA DE JOGO INICIAL");
    initabela(tabela);
    mostra(tabela);
    pedirtoken(token);
    preenchertabela(tabela, token);

    return (EXIT_SUCCESS);
}

/*       Nota!!!! - Numeros e letras tabela ASCII
 * 
 * 48 - 0          65 - A       75 - K      85 - U      ************
 * 49 - 1          66 - B       76 - L      86 - V      *  64 - @  *
 * 50 - 2          67 - C       77 - M      87 - W      ************
 * 51 - 3          68 - D       78 - N      88 - X
 * 52 - 4          69 - E       79 - O      89 - Y
 * 53 - 5          70 - F       80 - P      90 - Z
 * 54 - 6          71 - G       81 - Q
 * 55 - 7          72 - H       82 - R
 * 56 - 8          73 - I       83 - S
 * 57 - 9          74 - J       84 - T
 * 
 */

