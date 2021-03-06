/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Ficha 6 - Exercicio 4
 * Created on 21 de Novembro de 2017, 15:45
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
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