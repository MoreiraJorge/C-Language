/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Trabalho pratico 1
 * Created on 27 de Novembro de 2017, 20:39
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

void clean_buffer(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}