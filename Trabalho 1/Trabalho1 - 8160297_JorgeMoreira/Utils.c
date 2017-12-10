/* 
 * File:   Utils.c
 * Author: Jorge Moreira
 * Trabalho pratico 1
 * Created on 27 de Novembro de 2017, 20:39
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"

#define TAM 10
#define MAX 2
#define ESPACO ' '

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

//Imprime a tabela

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
    int posi, i, k, j;
    char posj;
    int contarjogadas = 1;
    int saida = 0;
    int saida2 = 0;
    int saida3 = 0;

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

            //------------------------------------------------------------------
            //verifica as colunas se sao validas e se estao ocupadas e preenche
            for (k = 1; k < TAM; ++k) {
                if (posj == (64 + k) && posi >= 1 && posi < TAM) {
                    if (tabela[posi][((65 + k) - 65)] == ESPACO) {
                        tabela[posi][((65 + k) - 65)] = token[i];
                        break;
                    } else {
                        --i;
                        puts("POSICAO OCUPADA ESCOLHA OUTRA!!!!");
                        break;
                    }
                } else if (posj > 73 || posj == (64 + k)) {
                    --i;
                    puts("POSICAO INEXISTENTE ESCOLHA OUTRA!!!!");
                    break;
                }
            }
            //------------------------------------------------------------------

            //------------------------Verificar 3 em linha----------------------
            //ciclo para 3 em linha na horizontal
            for (k = 1; k < TAM; ++k) {
                for (j = 1; j < TAM - 2; ++j) {
                    if (tabela[k][j] != ESPACO &&
                            tabela[k][j] == tabela[k][j + 1] &&
                            tabela[k][j] == tabela[k][j + 2]) {
                        mostra(tabela);
                        printf("O JOGADOR %d GANHOU!!\n", i + 1);
                        printf("JOGADAS : %d\n", contarjogadas);
                        saida3++;
                        break;
                    }
                }
                if (saida3 > 0) {
                    saida2++;
                    break;
                }
            }

            //ciclo para 3 em linha na vertical
            for (k = 1; k < TAM - 2; ++k) {
                for (j = 1; j < TAM; ++j) {
                    if (tabela[k][j] != ESPACO &&
                            tabela[k][j] == tabela[k + 1][j] &&
                            tabela[k][j] == tabela[k + 2][j]) {
                        mostra(tabela);
                        printf("O JOGADOR %d GANHOU!!\n", i + 1);
                        printf("JOGADAS : %d\n", contarjogadas);
                        saida3++;
                        break;
                    }
                }
                if (saida3 > 0) {
                    saida2++;
                    break;
                }
            }

            //diagonais de esquerda para direita
            for (k = 1; k < TAM - 2; ++k) {
                for (j = 1; j < TAM - 2; ++j) {
                    if (tabela[k][j] != ESPACO &&
                            tabela[k][j] == tabela[k + 1][j + 1] &&
                            tabela[k][j] == tabela[k + 2][j + 2]) {
                        mostra(tabela);
                        printf("O JOGADOR %d GANHOU!!\n", i + 1);
                        printf("JOGADAS : %d\n", contarjogadas);
                        saida3++;
                        break;
                    }
                }
                if (saida3 > 0) {
                    saida2++;
                    break;
                }
            }

            //diagonais de direira para esquerda
            /*
             * quando k e j incrementam, a tabela vai ter sempre a posicao da direita
             * de uma diagonal, eé lida da direita para a esquerda, e ao para baixo
             * 
             *         exemplo:       -> x 
             *                          x
             *                         x     
             */
            for (k = 1; k < TAM - 2; ++k) {
                for (j = 1; j < TAM - 2; ++j) {
                    if (tabela[k][j + 2] != ESPACO &&
                            tabela[k][j + 2] == tabela[k + 1][j + 1] &&
                            tabela[k][j + 2] == tabela[k + 2][j]) {
                        mostra(tabela);
                        printf("O JOGADOR %d GANHOU!!\n", i + 1);
                        printf("JOGADAS : %d\n", contarjogadas);
                        saida3++;
                        break;
                    }
                }
                if (saida3 > 0) {
                    saida2++;
                    break;
                }
            }
            
            // n e preciso ler as ultimas duas posicoes em linha e coluna
            //Os ciclos vao sempre ao token da esquerda em linhas!!!!  e em colunas vao ao de cima 
            //quando verificar o 3 em linha fecha o ciclo dos jogadores e o while
            
            /* 
             * 
             * Ajudas na parte de verificaçao do 3 em linha:
             * https://stackoverflow.com/questions/15457796/four-in-a-row-logic
             * https://forum.zwame.pt/threads/ajuda-no-jogo-4-em-linha-liguagem-c.698965/
             * https://www.portugal-a-programar.pt/forums/topic/49616-ajuda-no-jogo-4-em-linha/
             * 
             */
            if (saida2 > 0) {
                saida++;
                break;
            }
            //------------------------------------------------------------------
            //posicao para desistir
            if (posi == 0 && posj == 'Z') {
                if (i == 0) {
                    puts("O jogador 1 desistiu!!!");
                    puts("Vitoria do jogador 2!!!");
                    printf("Jogadas: %d\n", contarjogadas);
                    saida++;
                    break;
                } else {
                    puts("O jogador 2 desistiu!!!");
                    puts("Vitoria do jogador 1!!!");
                    printf("Jogadas: %d\n", contarjogadas);
                    saida++;
                    break;
                }
            }

            //-----
            //atencao!! para 1 jogador, os dois juntos preenchem quase a matriz toda
            if (contarjogadas == 39) {
                puts("EMPATE!!");
                saida++;
                break;
            }
            //-----

            mostra(tabela);
        }
        contarjogadas++;
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