/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Ficha 6 - Exercicio 6
 * Created on 21 de Novembro de 2017, 16:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 25

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

void countChar(char frase1[], char caracter) {
    int i = 0, contador = 0;

    for (i; i < MAX; ++i) {
        if (frase1[i] == caracter) {
            contador++;
        }
    }
    printf("Nº de letras correspondentes ao caracter %c : %d", caracter, contador);
}
