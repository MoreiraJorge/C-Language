/* 
 * File:   Trabalho1V2.c
 * Author: Jorge Moreira
 * Trabalho1 - versao2
 * Created on 1 de Dezembro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define LIN 10
#define COL 10
#define MAX 2

void pedirtokens(char tokens[MAX]) {
    int i;

    for (i = 0; i < MAX; ++i) {
        printf("Jogador %d introduza o token:", i + 1);
        scanf("%c", &tokens[i]);
        if (tokens[0] == tokens[1]) {
            --i;
            puts("Tokens iguais, escolha outro!");
            clean_buffer();
            continue;
        }
        clean_buffer();
    }


}

//construir matriz

void fazermatriz(int tabela[][COL]) {
    int i, j;
    char letras = 65;

    for (i = 0; i < LIN; ++i) {
        for (j = 0; j < COL; ++j) {
            tabela[i][j] = 0;
        }
    }

    for (i = 1; i < LIN; ++i) {
        tabela[i][0] = i;
    }

    /*for (j = 1; j < DIM; ++j){
        tabela[0][j] = letras;
        letras++;
    }
     */
    tabela[0][0] = 0;

}

void mostra(int tabela[][COL]) {
    int i, j;

    printf(" |A|B|C|D|E|F|G|H|I|\n");
    for (i = 1; i < LIN; ++i) {
        for (j = 0; j < COL; ++j) {
            printf("%d", tabela[i][j]);
            printf("|");
        }
        puts(" ");
    }
}

int main(int argc, char** argv) {
    int tabela[LIN][COL];
    char tokens[MAX];

    fazermatriz(tabela);
    mostra(tabela);
    puts("");
    pedirtokens(tokens);
    
    return (EXIT_SUCCESS);
}

