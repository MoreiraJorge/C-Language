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

//preencher tabela utilizando coordenadas e tokens

void preenchertabela(char tabela[][TAM], char token[MAX]) {
    int posi, i, k;
    char posj;
    int saida = 0;

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

            //verifica as colunas todas num so IF 

            for (k = 0; k < TAM; ++k) {
                if (posj == (65 + k) && posi > 0 && posi <= TAM) {
                    if (tabela[posi][((65 + k) - 65)] == ESPACO) {
                        tabela[posi][((65 + k) - 65)];
                    }
                }
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
    char linha0 = 65;

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

