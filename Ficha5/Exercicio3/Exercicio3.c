/* 
 * File:   Exercicio3.c
 * Author: Jorge Moreira
 * Ficha5
 * Created on 9 de Novembro de 2017, 14:03
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void CleanEntryBuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {

    int i;
    int count = 0;
    char symbol, array_char[MAX];

    for (i = 0; i <= MAX; ++i) {
        puts("Introduza um caracter: ");
        scanf("%c", &array_char[i]);
        CleanEntryBuffer();
    }

    puts("Indique o caracter a procurar: ");
    scanf("%c", &symbol);
    CleanEntryBuffer();

    for (i = 0; i < MAX; ++i) {
        if (symbol == array_char[i]) {
            ++count;
        }
    }

    for (i = 0; i < MAX; ++i) {
        if (symbol == array_char[i]) {
            printf("posicoes: %d\n", i);
        }
    }

    printf("O carctaer existe %d vezes\n", count);
    return (EXIT_SUCCESS);
}


