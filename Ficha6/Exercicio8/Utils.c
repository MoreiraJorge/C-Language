/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Ficha6 - Exercicio 8
 * Created on 23 de Novembro de 2017, 10:27
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

int lastindex(char caracter, char frase[], int fimfrase) {
    int i;
    int posicao = -1;

    for (i = 0; i < fimfrase; ++i) {
        if(frase[i] == caracter){
            posicao = i;
        }
    }
    return posicao;
}