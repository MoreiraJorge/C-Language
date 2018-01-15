/* 
 * File:   Functions.c
 * Author: Jorge Moreira
 * Trabalho 2
 * Created on 10 de Janeiro de 2018, 18:34
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

#define SIZE 10
#define MAX 3
#define BLANK -1
#define MAX_NAME 30
#define MAXPVP 2

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int readString(char *string, int max) {
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

//Mostra a tabela de jogo

void showtable(int table[][SIZE], player Player[]) {
    int i, j;
    int A = 65;

    //colocar letras
    printf(" ");
    printf(" |");
    for (j = 0; j < SIZE; ++j) {
        printf("%c", A);
        printf("|");
        ++A;
    }
    puts(" ");

    //introduz numeros na primeira coluna
    for (i = 0; i < SIZE; ++i) {
        printf("%2d|", i + 1);
        //imprime a matriz e
        for (j = 0; j < SIZE; ++j) {
            //Imprime as posições vazias
            if (table[i][j] == BLANK) {
                printf(" ");
            }//preenche as podiçoes do jogador 1 pra mostrar o token
            else if (table[i][j] == 0) {
                printf("%c", Player[0].token);
            }////preenche as podiçoes do jogador 2 pra mostrar o token
            else if (table[i][j] == 1) {
                printf("%c", Player[1].token);
            }
            printf("|");
        }
        puts(" ");
    }
}

//Cria / inicia a tabela de jogo

void init(int table[][SIZE]) {
    int i, j;

    //por tudo com -1 
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            table[i][j] = BLANK;
        }
    }
}

//Pede nome de jogador e tokens

void read(player Player[MAX], int i) {

    player new_player;

    for (i = 0; i < MAXPVP; ++i) {
        clean_buffer();
        printf("Insira o nome do %dº jogador:", i + 1);
        readString(new_player.name, MAX_NAME);
        printf("Insira o %dº token:", i + 1);
        scanf("%c", &new_player.token);

        Player[i] = new_player;
    }
}

//adiciona os jogadores Lidos

int insert(player Player[MAX], int i) {

    if (i < MAX && Player[i].name != Player[i].name) {
        read(Player, i);
        i++;
    } else {
        puts("Nao e possivel colocar mais jogadores OU Existem nomes repetidos");
    }
    return i++;
}
//inicia o jogo PVP

void score(player Player[]) {
    int i;

    printf("******************************************\n");
    printf("*    Nome    *    Jogos    *    Pontos    *\n");
    for (i = 0; i < MAX; ++i) {
        printf("*    %s    *          *          *\n", Player[i].name);
    }

}

//verifica as jogadas

int verify(int table[][SIZE], player Player[MAX], int counter, int i, int exit) {
    int exit2 = 0, exit3 = 0;
    int k, j;

    //ciclo para 4 em linha na horizontal
    for (k = 0; k < SIZE; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k][j] != BLANK &&
                    table[k][j] == table[k][j + 1] &&
                    table[k][j] == table[k][j + 2] &&
                    table[k][j] == table[k][j + 3]) {
                showtable(table, Player);
                printf("O JOGADOR %d GANHOU!!\n", i + 1);
                printf("JOGADAS : %d\n", counter);
                score(Player);
                exit3++;
                break;
            }
        }
        if (exit3 > 0) {
            exit2++;
            break;
        }
    }

    //ciclo para 4 em linha na vertical
    for (k = 0; k < SIZE - 2; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k][j] != BLANK &&
                    table[k][j] == table[k + 1][j] &&
                    table[k][j] == table[k + 2][j] &&
                    table[k][j] == table[k + 3][j]) {
                showtable(table, Player);
                printf("O JOGADOR %d GANHOU!!\n", i + 1);
                printf("JOGADAS : %d\n", counter);
                exit3++;
                break;
            }
        }
        if (exit3 > 0) {
            exit2++;
            break;
        }
    }

    //diagonais de esquerda para direita
    for (k = 0; k < SIZE - 2; ++k) {
        for (j = 0; j < SIZE - 2; ++j) {
            if (table[k][j] != BLANK &&
                    table[k][j] == table[k + 1][j + 1] &&
                    table[k][j] == table[k + 2][j + 2] &&
                    table[k][j] == table[k + 3][j + 3]) {
                showtable(table, Player);
                printf("O JOGADOR %d GANHOU!!\n", i + 1);
                printf("JOGADAS : %d\n", counter);
                exit3++;
                break;
            }
        }
        if (exit3 > 0) {
            exit2++;
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
    for (k = 0; k < SIZE - 2; ++k) {
        for (j = 0; j < SIZE - 2; ++j) {
            if (table[k][j + 3] != BLANK &&
                    table[k][j + 3] == table[k + 1][j + 2] &&
                    table[k][j + 3] == table[k + 2][j + 1] &&
                    table[k][j + 3] == table[k + 3][j]) {
                showtable(table, Player);
                printf("O JOGADOR %d GANHOU!!\n", i + 1);
                printf("JOGADAS : %d\n", counter);
                exit3++;
                break;
            }
        }
        if (exit3 > 0) {
            exit2++;
            break;
        }
    }

    // n e preciso ler as ultimas duas posicoes em linha e coluna
    //Os ciclos vao sempre ao token da esquerda em linhas!!!!  e em colunas vao ao de cima 
    //quando verificar o 3 em linha fecha o ciclo dos jogadores e o while na função filltable
    //retornando o valor de saida

    if (exit2 > 0) {
        exit++;
    }

    return exit;
}

//Preenche tabela e verifica

void filltable(int table[][SIZE], player Player[MAX], int counter) {
    int i, j, k, posi = 0;
    char posj;
    int exit = 0;
    int exit2 = 0;

    while (counter <= (SIZE * SIZE)) {


        for (i = 0; i < MAX; ++i) {
            printf("Escolha uma posicao:\n");
            printf("LINHA:");
            scanf("%d", &posi);
            clean_buffer();
            printf("COLUNA:");
            scanf("%c", &posj);
            clean_buffer();

            //verifica as colunas se sao validas e se estao ocupadas e preenche
            for (k = 0; k <= SIZE; ++k) {
                if (posj == (64 + k) && posi >= 0 && posi <= SIZE || posj == 90) {
                    if (table[posi - 1][((64 + k) - 65)] == BLANK || posj == 90) {
                        table[posi - 1][((64 + k) - 65)] = i;
                        break;
                    } else {
                        --i;
                        puts("POSICAO OCUPADA ESCOLHA OUTRA!!!!");
                        break;
                    }
                } else if (posj > 74 || posj == (64 + k)) {
                    --i;
                    puts("POSICAO INEXISTENTE ESCOLHA OUTRA!!!!");
                    break;
                }
            }

            exit2 = verify(table, Player, counter, i, exit2);

            if (exit2 > 0) {
                exit++;
                break;
            }

            //posicao para desistir

            if (posi == 0 && posj == 90) {
                if (i == 0) {
                    puts("O jogador 1 desistiu!!!");
                    puts("Vitoria do jogador 2!!!");
                    printf("Jogadas: %d\n", counter);
                    score(Player);
                    exit++;
                    break;
                } else {
                    puts("O jogador 2 desistiu!!!");
                    puts("Vitoria do jogador 1!!!");
                    printf("Jogadas: %d\n", counter);
                    score(Player);
                    exit++;
                    break;
                }
            }

            showtable(table, Player);

        }
        counter++;
        if (exit > 0) {
            break;
        }
    }
}

void PVP(int table[][SIZE], player Player[], int counter, int playercounter) {

    init(table);
    showtable(table, Player);
    playercounter = insert(Player, playercounter);
    filltable(table, Player, counter);

}

//Main Menu

void menu(int table[][SIZE], player Player[]) {
    int opc;
    int counter = 1;
    int playercounter = 0;

    printf("Bem Vindo ao 4 em linha!!\n");
    printf("       MAIN MENU\n");
    printf("1. Jogador V Jogador\n");
    printf("2. Jogador V Computador\n");
    printf("3. Sair\n");

    do {
        printf("Opcao Escolhida:");
        scanf("%d", &opc);
        switch (opc) {
            case 1: PVP(table, Player, counter, playercounter);
                break;
            case 2: printf("IN DEVELOPMENT!!!");
                break;
            case 3: break;
            default: puts("Opcao incorreta");
        }

    } while (opc != 3);


}