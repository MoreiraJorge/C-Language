/* 
 * File:   Functions.c
 * Author: Jorge Moreira
 * Trabalho 2 - CONNECT4
 * Created on 13 de Janeiro de 2018, 15:56
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"
//------------------------------Usefull Functions-------------------------------

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
//------------------------------------------------------------------------------
//----------------------------CREATE BASIC TABLE FUNCTION-----------------------

void init(int table[][SIZE]) {
    int i, j;

    //por tudo com -1 
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            table[i][j] = BLANK;
        }
    }
}
//------------------------------------------------------------------------------
//--------------------------SHOW FINAL TABLE FUNCTION---------------------------

void showtable(int table[][SIZE], Player player[]) {
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
                printf("%c", player[0].token);
            }////preenche as podiçoes do jogador 2 pra mostrar o token
            else if (table[i][j] == 1) {
                printf("%c", player[1].token);
            }
            printf("|");
        }
        puts(" ");
    }
}
//------------------------------------------------------------------------------

int search(Player player, int plyrcount) {
    int i = 0;

    Player new_player[plyrcount];

    readfile(new_player);
    for (; i < plyrcount; ++i) {

        if (strcmp(player.name, new_player[i].name) == 0) {
            return 1;
        }
    }
    return 0;
}
//-------------------------------READ NEW PLAYER INFO---------------------------

void read(Player player[], int *equalPlayers, int plyrcount) {
    int i = 0;

    Player new_player;
    for (i = 0; i < MAX_PLYR; ++i) {

        clean_buffer();
        puts("Insira o nome do jogador:");
        readString(new_player.name, NAME_CHAR);
        *equalPlayers = search(new_player, plyrcount);
        puts("Insira o token:");
        scanf("%c", &new_player.token);
        new_player.games = 0;
        new_player.points = 0;

        player[i] = new_player;
    }
}
//------------------------------------------------------------------------------
//-------------------------INSERT PLAYER INFO IN ARRAY--------------------------

int insert(Player player[], int plyrcount) {
    int equalPlayers = 0;
    if (plyrcount < MAX_PLYR) {
        read(player, &equalPlayers, plyrcount);
        if (equalPlayers == 0) {
            plyrcount++;
        }
    } else {
        puts("Nao e possivel colocar mais jogadores");
    }
    return plyrcount;
}
//------------------------------------------------------------------------------
//--------------------------------VERIFY WINNER---------------------------------

int verify(int table[][SIZE], Player player[MAX_PLYR], int totalcount, int i, int exit) {
    int exit2 = 0, exit3 = 0;
    int k, j;


    //ciclo para 4 em linha na horizontal
    for (k = 0; k < SIZE; ++k) {
        for (j = 0; j < SIZE - 3; ++j) {
            if (table[k][j] != BLANK &&
                    table[k][j] == table[k][j + 1] &&
                    table[k][j] == table[k][j + 2] &&
                    table[k][j] == table[k][j + 3]) {
                showtable(table, player);
                printf("%s GANHOU!!\n", player[i].name);
                player[i].points = player[i].points + 3;
                printf("JOGADAS : %d\n", totalcount);
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
    for (k = 0; k < SIZE - 3; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k][j] != BLANK &&
                    table[k][j] == table[k + 1][j] &&
                    table[k][j] == table[k + 2][j] &&
                    table[k][j] == table[k + 3][j]) {
                showtable(table, player);
                printf("%s GANHOU!!\n", player[i].name);
                player[i].points = player[i].points + 3;
                printf("JOGADAS : %d\n", totalcount);
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
    for (k = 0; k < SIZE - 3; ++k) {
        for (j = 0; j < SIZE - 3; ++j) {
            if (table[k][j] != BLANK &&
                    table[k][j] == table[k + 1][j + 1] &&
                    table[k][j] == table[k + 2][j + 2] &&
                    table[k][j] == table[k + 3][j + 3]) {
                showtable(table, player);
                printf("%s GANHOU!!\n", player[i].name);
                player[i].points = player[i].points + 3;
                printf("JOGADAS : %d\n", totalcount);
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
     *                        x     
     */
    for (k = 0; k < SIZE - 3; ++k) {
        for (j = 0; j < SIZE - 3; ++j) {
            if (table[k][j + 3] != BLANK &&
                    table[k][j + 3] == table[k + 1][j + 2] &&
                    table[k][j + 3] == table[k + 2][j + 1] &&
                    table[k][j + 3] == table[k + 3][j]) {
                showtable(table, player);
                printf("%s GANHOU!!\n", player[i].name);
                player[i].points = player[i].points + 3;
                printf("JOGADAS : %d\n", totalcount);
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
    //quando verificar o 4 em linha fecha o ciclo dos jogadores e o while na função filltable
    //retornando o valor de saida

    if (exit2 > 0) {

        exit++;
    }

    return exit;
}

//------------------------------------------------------------------------------
//---------------------------------FILL TABLE-----------------------------------

int filltable(int table[][SIZE], Player player[MAX_PLYR], int gamecount) {
    int i, j, k, posi = 0, totalcount = 1;
    char posj;
    int exit = 0;
    int exit2 = 0;

    while (totalcount < (SIZE * SIZE)) {


        for (i = 0; i < MAX_PLYR; ++i) {
            printf("%s Escolha uma posicao:\n", player[i].name);
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

            exit2 = verify(table, player, totalcount, i, exit2);

            if (exit2 > 0) {
                exit++;
                break;
            }

            //Posição de desistir

            if (posi == 0 && posj == 90) {
                if (i == 0) {
                    printf("%s desistiu!!!", player[0].name);
                    printf("Vitoria de %s!!!", player[1].name);
                    player[1].points = player[1].points + 3;
                    printf("Jogadas: %d\n", totalcount);
                    gamecount++;
                    exit++;
                    break;
                } else {
                    printf("%s desistiu!!!", player[1].name);
                    printf("Vitoria de %s!!!", player[0].name);
                    player[0].points = player[0].points + 3;
                    printf("Jogadas: %d\n", totalcount);
                    gamecount++;
                    exit++;
                    break;
                }
            }

            showtable(table, player);

        }
        totalcount++;
        if (exit > 0) {

            break;
        }
    }
    return gamecount;
}
//------------------------------------------------------------------------------

void AI(int table[][SIZE], Player player[MAX_PLYR]) {
    int k, j, x, z;
  
    //Horizontal ( a frente )
    for (k = 0; k < SIZE; ++k) {
        for (j = 0; j < SIZE - 2; ++j) {
            if (table[k][j + 2] == BLANK &&
                    table[k][j] == 0 &&
                    table[k][j] == table[k][j + 1]) {
                table[k][j + 2] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
                return;
            }
        }
    }

    //Horizontal ( atras )
    for (k = 0; k < SIZE; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k][j - 3] == BLANK &&
                    table[k][j] == 0 &&
                    table[k][j] == table[k][j - 1] &&
                    table[k][j] == table[k][j - 2]) {
                table[k][j - 3] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
                return;
            }
        }
    }


    //Vertical (em baixo)
    for (k = 0; k < SIZE - 2; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k + 2][j] == BLANK &&
                    table[k][j] == 0 &&
                    table[k][j] == table[k + 1][j]) {
                table[k + 2][j] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
                return;
            }
        }
    }

    //Vertical (em cima)
    for (k = 0; k < SIZE; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k - 3][j] == BLANK &&
                    table[k][j] == 0 &&
                    table[k][j] == table[k - 1][j] &&
                    table[k][j] == table[k - 2][j]) {
                table[k - 3][j] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
                return;
            }
        }
    }

    //diagonais esquerda -> direita com token em baixo
    //poe o token na 3ª posicao
    
    for (k = 0; k < SIZE - 2; ++k) {
        for (j = 0; j < SIZE - 2; ++j) {
            if (table[k + 2][j + 2] == BLANK &&
                    table[k][j] == 0 &&
                    table[k][j] == table[k + 1][j + 1]) {
                table[k + 2][j + 2] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
                return;
            }
        }
    }
    
    //diagonais esquerda -> direita com token em cima
    //poe o token na segunda posicao pois conta a partir do token da ponta
    //em cima.
    /*
    for (k = 0; k < SIZE - 3; ++k) {
        for (j = 0; j < SIZE - 3; ++j) {
            if (table[k - 1][j - 1] == BLANK &&
                    table[k][j] == 0) {
                table[k - 1][j - 1] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
                return;
            }
        }
    }
    */
    /* posto isto, nas diagonais, se houver 3 tokens na diagonal
     o token do AI sera colocado na posicao em baixo que conta como
     se fosse a terceira posicao de um 4 em linha, e o token de cima
     conta como se fosse a segunda posicao
     ou seja coloca o token AI em baixo quando estao dois tokens de joga-
     dor seguidos na diagonal, e coloca o token AI em cima quando estao
     3 seguidos, mas conta a partir do token da ponta*/
    /**
    //diagonais direita -> esquerda com token em baixo
    for (k = 0; k < SIZE - 2; ++k) {
        for (j = 0; j < SIZE - 2; ++j) {
            if (table[k][j + 2] == 0 &&
                    table[k][j + 2] == table[k + 1][j + 1] &&
                    table[k + 2][j] == BLANK) {
                table[k + 2][j] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
                return;
            }
        }
    }
    */
    /*
    //diagonais direita -> esquerda com token em cima
    for (k = 0; k < SIZE; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k][j + 2] == 0 &&    
                table[k][j + 2] == table[k - 2][j + 2] &&
                table[k - 3][j + 3] == BLANK) {
                table[k - 3][j + 3] = 1;
                printf("JOGADA AI\n");
                showtable(table, player);
            }
        }
    }
    */


    //random
    
    for(k=0; k< SIZE; ++k){
      for(j=0; j< SIZE; ++j){
         if(table[k][j] == BLANK){
            table[k][j] = 1;
            printf("JOGADA AI\n");
            showtable(table, player);
            return;
         }
      }
    }
   
    
    /*
    for (k = 0; k < SIZE; ++k) {
        for (j = 0; j < SIZE; ++j) {
            if (table[k][j] == BLANK) {
                srand(time(NULL));
                x = rand() % 9;
                z = rand() % 9;
                table[x][z] = 1;
                return;
            }
        }

    }
    */
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

int filltableVSAI(int table[][SIZE], Player player[MAX_PLYR], int gamecount) {
    int i, j, k, posi = 0, m, n, x, z;
    int totalcount = 1;
    char posj;
    int exit = 0;
    int exit2 = 0;

    while (1) {
        for (i = 0; i < MAX_PLYR; ++i) {
            if (i == 0) {
                printf("%s Escolha uma posicao:\n", player[i].name);
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

                exit2 = verify(table, player, totalcount, i, exit2);

                if (exit2 > 0) {
                    exit++;
                    break;
                }

                showtable(table, player);

                //Posição de desistir

                if (posi == 0 && posj == 90) {
                    if (i == 0) {
                        printf("%s desistiu!!!\n", player[0].name);
                        printf("Vitoria de %s!!!\n", player[1].name);
                        player[1].points = player[1].points + 3;
                        printf("Jogadas: %d\n", totalcount);
                        gamecount++;
                        exit++;
                        break;
                    } else {
                        printf("%s desistiu!!!\n", player[1].name);
                        printf("Vitoria de %s!!!\n", player[0].name);
                        player[0].points = player[0].points + 3;
                        printf("Jogadas: %d\n", totalcount);
                        gamecount++;
                        exit++;
                        break;
                    }
                }

                // AI --------------------------------------------------------------    
            } else if (i == 1) {

                AI(table, player);
                exit2 = verify(table, player, gamecount, 1, exit2);

                if (exit2 > 0) {
                    exit++;
                    break;
                }

            }
        }

        totalcount++;
        if (exit > 0) {

            break;
        }
    }
    return gamecount;
}
//------------------------------------------------------------------------------
//----------------------------------SAVE FILE-----------------------------------

void savefile(Player player[], int gamecount) {

    int i;
    for (i = 0; i < MAX_PLYR; ++i) {
        player[i].games = gamecount;
    }

    FILE *file = fopen("game.dat", "wb");

    for (i = 0; i < MAX_PLYR; ++i) {

        fwrite(&player[i], sizeof (Player), 1, file);
    }

    fclose(file);
    puts(" ");
    printf("FILE SAVED!!");
    puts(" ");

}
//------------------------------------------------------------------------------
//------------------------------------LOADS FILE--------------------------------

void readfile(Player player[]) {

    int i = 0;
    FILE *file = fopen("game.dat", "rb");

    for (i = 0; i < MAX_PLYR; ++i) {

        fread(&player[i], sizeof (Player), 1, file);
    }

    fclose(file);
}
//------------------------------------------------------------------------------
//-------------------------------SHOW SCOREBOARD--------------------------------

void Showscore(Player player[]) {

    int i;

    puts("");
    printf("*\tNome\t*\tJogos\t*\tPontos\t*\n");
    puts("");
    for (i = 0; i < MAX_PLYR; ++i) {

        printf("\t%s\t", player[i].name);
        printf("\t%d\t", player[i].games);
        printf("\t%d\t", player[i].points);
        puts("");

    }
}
//------------------------------------------------------------------------------
//---------------------------------GAME MAIN MENU-------------------------------

void menu(int table[][SIZE], Player player[]) {
    int opc;
    int gamecount = 0;
    int plyrcount = 0;

    do {
        printf("Bem Vindo ao 4 em linha!!\n");
        printf("       MAIN MENU\n");
        printf("1. Jogador V Jogador\n");
        printf("2. Jogador V Computador\n");
        printf("3. Consultar ScoreBoard\n");
        printf("0. Sair\n");

        printf("Opcao Escolhida:");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                init(table);
                showtable(table, player);
                plyrcount = insert(player, plyrcount);
                gamecount = filltable(table, player, gamecount);
                savefile(player, gamecount);
                break;
            case 2:
                init(table);
                showtable(table, player);
                plyrcount = insert(player, plyrcount);
                gamecount = filltableVSAI(table, player, gamecount);
                savefile(player, gamecount);
                break;
            case 3:
                readfile(player);
                Showscore(player);
                break;
            case 0: break;
            default: puts("Opcao incorreta");
        }

    } while (opc != 0);


}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------