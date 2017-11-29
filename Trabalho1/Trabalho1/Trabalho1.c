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
    int saida;

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
            clean_buffer();

            if (posj == 'A' && tabela[posi][1] == ESPACO) {
                tabela[posi][1] = token[i];
            } else if (posj == 'B' && tabela[posi][2] == ESPACO) {
                tabela[posi][2] = token[i];
            } else if (posj == 'C' && tabela[posi][3] == ESPACO) {
                tabela[posi][3] = token[i];
            } else if (posj == 'D' && tabela[posi][4] == ESPACO) {
                tabela[posi][4] = token[i];
            } else if (posj == 'E' && tabela[posi][5] == ESPACO) {
                tabela[posi][5] = token[i];
            } else if (posj == 'F' && tabela[posi][6] == ESPACO) {
                tabela[posi][6] = token[i];
            } else if (posj == 'G' && tabela[posi][7] == ESPACO) {
                tabela[posi][7] = token[i];
            } else if (posj == 'H' && tabela[posi][8] == ESPACO) {
                tabela[posi][8] = token[i];
            } else if (posj == 'I' && tabela[posi][9] == ESPACO) {
                tabela[posi][9] = token[i];
            } else if (posi == 0 && posj == 'Z') {
                if (i = 0) {
                    puts("O jogador 1 desistiu!!!");
                    puts("Vitoria do jogador 2!!!");
                    saida++;
                    break;
                } else {
                    puts("O jogador 2 desistiu!!!");
                    puts("Vitoria do jogador 1!!!");
                    saida++;
                    break;
                }
            } else {
                --i;
                puts("posicao ocpada, jogue novamente!");
                continue;
            }

            contarjogadas++;
            mostra(tabela);
            
        }
        if (saida > 0) {
            break;
        }
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

