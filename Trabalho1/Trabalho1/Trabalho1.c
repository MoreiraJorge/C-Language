/* 
 * File:   Trabalho1.c
 * Author: Jorge Moreira
 * Trabalho pratico 
 * Created on 27 de Novembro de 2017, 20:38
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define TAM 10
#define MAX 2
#define ESPACO ' '

int contarjogadas = 1;


//preencher tabela utilizando coordenadas e tokens
//impressao da matriz

void mostra(char tabela[][TAM]) {
    int i, j;
    for (i = 0; i < TAM; ++i) {
        for (j = 0; j < TAM; ++j) {
            printf("%c", tabela[i][j]);
            printf("|");
        }
        puts(" ");
    }
}

void preenchertabela(char tabela[][TAM], char token[MAX]) {
    int posi, i, j, k;
    char posj;

    while (1) {
        puts("");
        printf("JOGADA NUMERO %d\n", contarjogadas);
        for (i = 0; i < MAX; ++i) {
            printf("Jogador %d - Introduza a Posicao de jogo Linha Coluna: \n", i + 1);
            puts("LINHA:");
            scanf("%d", &posi);
            clean_buffer();
            puts("COLUNA (coloque letras maiusculas!!):");
            scanf("%c", &posj);

            if (posj == 'A' && tabela[posi][posj] == ESPACO) {
                tabela[posi][1] = token[i];
            } else if (posj == 'B' && tabela[posi][posj] == ESPACO) {
                tabela[posi][2] = token[i];
            } else if (posj == 'C' && tabela[posi][posj] == ESPACO) {
                tabela[posi][3] = token[i];
            } else if (posj == 'D' && tabela[posi][posj] == ESPACO) {
                tabela[posi][4] = token[i];
            } else if (posj == 'E' && tabela[posi][posj] == ESPACO) {
                tabela[posi][5] = token[i];
            } else if (posj == 'F' && tabela[posi][posj] == ESPACO) {
                tabela[posi][6] = token[i];
            } else if (posj == 'G' && tabela[posi][posj] == ESPACO) {
                tabela[posi][7] = token[i];
            } else if (posj == 'H' && tabela[posi][posj] == ESPACO) {
                tabela[posi][8] = token[i];
            } else if (posj == 'I' && tabela[posi][posj] == ESPACO) {
                tabela[posi][9] = token[i];
            } else {
                --i;
                puts("posicao ocpada, jogue novamente!");
                continue;
            }
            
            mostra(tabela);
            /*else {
            --i;
            puts("posicao ocupada, jogue novamente!");
            continue;
        }
             */
            /*
            if (posj == tabela[0][j] && tabela[posi][posj] == ESPACO) {
                tabela[posi][j] = token[i];
                mostra(tabela);
            } else {
                --i;
                puts("posicao ocpada, jogue novamente!");
                continue;
            }
             */
            /*if (posj == 'B' && tabela[posi][posj] == ESPACO){
                tabela[posi][2]=token[i];    
                mostra(tabela);
            }*/



            /*if (tabela[posi][posj] == ESPACO) { //posicao livre
                tabela[posi][posj] = token[i];
                mostra(tabela);
            } else {
                --i;
                puts("posicao ocpada, jogue novamente!");
                continue;
            }
             */
        }
        contarjogadas++;
    }
}
//pedir tokens aos jogadores

void pedirtoken(char token[MAX]) {
    int i;

    for (i = 0; i < MAX; ++i) {
        printf("Jogador %d introduza o token:", i + 1);
        scanf("%c", &token[i]);
        if (token[0] == token[1]) {
            --i;
            puts("Tokens iguais, escolha outro!");
            clean_buffer();
            continue;
        }
        clean_buffer();
    }
}

//cria a tabela inicial

void initabela(char tabela[][TAM]) {
    int i, j;
    char linha0 = 'A';

    //por tudo vazio 
    for (i = 0; i < TAM; ++i) {
        for (j = 0; j < TAM; ++j) {
            tabela[i][j] = ESPACO;
        }
    }

    tabela[0][0] = '+'; //posicao [0][0] ocupada

    //primeira coluna com numeros
    for (i = 1; i < TAM; ++i) {
        tabela[i][0] = '0' + i;
    }

    //primeira linha letras
    for (j = 1; j < TAM; ++j) {
        tabela[0][j] = linha0;
        linha0++;
    }

}

//Bloco principal

int main(int argc, char** argv) {
    int posi, posj;
    char token[MAX];
    char tabela[TAM][TAM];
    int n_jogadas = 0;

    initabela(tabela);
    puts("TABELA DE JOGO INICIAL");
    mostra(tabela);
    pedirtoken(token);
    preenchertabela(tabela, token);



    return (EXIT_SUCCESS);
}
