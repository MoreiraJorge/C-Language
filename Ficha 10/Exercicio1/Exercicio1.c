/* 
 * File:   Exercicio1.c
 * Author: Jorge Moreira
 * Ficha10
 * Created on 4 de Janeiro de 2018, 10:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"

#define MAX_CHAR 30
#define MAX_PLAYER 2

typedef struct {
    char name[MAX_CHAR];
    char tokens[MAX_PLAYER];
} Players;

Players player[MAX_PLAYER];

void read(Players player[], int i) {

    Players new_player;

    clean_buffer();
    puts("Insira o nome do jogador:");
    readstring(new_player.name, MAX_CHAR);
    puts("Insira o token:");
    scanf("%c", &new_player.tokens);
    clean_buffer();

    player[i] = new_player;
}

int insert(Players player[], int counter) {

    if (counter < MAX_PLAYER) {
        read(player, counter);
        counter++;
    } else {
        puts("Nao e possivel colocar mais jogadores");
    }
    return counter++;
}

void printall(Players player[], int counter) {
    int i;

    for (i = 0; i < counter; ++i) {
        puts("");
        printf("Jogador: %s\n", player[i].name);
        printf("Token: %s\n", player[i].tokens);
    }
}

void readfile(Players player[]) {

    int i = 0;

    FILE *f = fopen("players.dat", "rb");

    for (i = 0; i < MAX_PLAYER; ++i) {
        fread(&player[i], sizeof (Players), 1, f);
    }

    fclose(f);

    puts(" ");
    printf("Ficheiro Lido com sucesso!!");
    puts(" ");
}

void binary_file_insert(Players player[], char *file) {
    int i;

    FILE *f = fopen(file, "wb");

    for (i = 0; i < MAX_PLAYER; ++i) {
        fwrite(&player[i], sizeof (Players), 1, f);
    }
    fclose(f);
}

void binary_file_list(Players player[], char *file) {

    int i;

    FILE *f = fopen(file, "rb");

    for (i = 0; i < MAX_PLAYER; ++i) {
        fread(&player[i], sizeof (Players), 1, f);
        printf("Nome: %s | Token: %s\n", player[i].name, player[i].tokens);

    }
    fclose(f);

    puts("");
}

void filecopy(char *file) {
    int ch;
    FILE *f = fopen(file, "rb");
    FILE *file_backup = fopen("player_backup.dat", "wb");
    if (f != NULL && file_backup != NULL) {
        while ((ch = getc(f)) != EOF) {
            putc(ch, file_backup);
        }
        fclose(f);
        fclose(file_backup);
        printf("players.dat was copied to player_backup.dat\n");
    }
}

void binaryfile(Players player[]) {
    char *file = "players.dat";

    binary_file_insert(player, file);
    binary_file_list(player, file);
    filecopy(file);

}

void menu(Players player[]){
  int counter = 0;
  int opc;
  
  printf("1. inserir jogador\n");
        printf("2. listar jogadores\n");
        printf("3. Ficheiro .dat\n");
        printf("4. copiar ficheiro\n");
        printf("0. sair\n");

        do {
            printf("Opcao Escolhida:");
            scanf("%d", &opc);
            switch (opc) {
                case 1: counter = insert(player, counter);
                    break;
                case 2: printall(player, counter);
                    break;
                case 3: binaryfile(player);
                    break;
                case 0: break;
                default: puts("Opcao incorreta");
            }

        } while (opc != 0);
    
}

int main(int argc, char** argv) {
    

    FILE *f = fopen("players.dat", "rb");

    if (f != NULL) {
        readfile(player);
        menu(player);
    } else {
        menu(player);
    }
    
    fclose(f);
    return (EXIT_SUCCESS);
}

