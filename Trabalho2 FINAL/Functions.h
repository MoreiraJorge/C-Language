/* 
 * File:   Functions.h
 * Author: Jorge Moreira
 * Trabalho 2 - CONNECT4
 * Created on 13 de Janeiro de 2018, 15:56
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define SIZE 10
#define BLANK -1
#define NAME_CHAR 30
#define MAX_PLYR 2
#define CORNER 9

//-----------------------------PLAYER DATA STRUCTURE----------------------------

struct REG {
    char name[NAME_CHAR];
    char token;
    int points;
    int games;
};

typedef struct REG Player;
//------------------------------------------------------------------------------
//-------------------------------FUNCTIONS--------------------------------------
void clean_buffer();
int readString(char *string, int max);
void init(int table[][SIZE]);
void showtable(int table[][SIZE], Player player[]);
int verify(int table[][SIZE], Player player[MAX_PLYR], int totalcount, int i, int exit);
int filltable(int table[][SIZE], Player player[MAX_PLYR], int gamecount);
void AI(int table[][SIZE], Player player[MAX_PLYR]);
int filltableVSAI(int table[][SIZE], Player player[MAX_PLYR], int gamecount);
int search(Player player, int plyrcount);
void read(Player player[],int *equalPlayers, int plyrcount); 
int insert(Player player[], int plyrcount); 
void savefile(Player player[], int gamecount);
void readfile(Player player[]);
void Showscore(Player player[]);
void menu(int table[][SIZE], Player player[]);
//------------------------------------------------------------------------------
#endif /* FUNCTIONS_H */

