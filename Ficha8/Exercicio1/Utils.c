/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Ficha8 - Exercicio1
 * Created on 21 de Dezembro de 2017, 11:57
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"

int clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    return 1;
}

int readstring(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

