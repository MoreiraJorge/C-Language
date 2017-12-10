/* 
 * File:   utils.c
 * Author: Jorge Moreira
 * Trabalho1 - versao2
 * Created on 1 de Dezembro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void clean_buffer(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}