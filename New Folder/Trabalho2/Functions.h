/* 
 * File:   Functions.h
 * Author: Jorge Moreira
 * Trabalho 2
 * Created on 10 de Janeiro de 2018, 18:34
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define SIZE 10
#define MAX 3
#define BLANK -1
#define MAX_NAME 30
#define MAXPVP 2


struct Game {
    char name[MAX_NAME];
    char token;
};

typedef struct Game player;



void clean_buffer();
int readString(char *string, int max);
void showtable(int table[][SIZE],player Player[]);
void init(int table[][SIZE]);
void read(player Player[MAX], int i);
int insert(player Player[MAX], int counter);
void score(player Player[]);
int verify(int table[][SIZE], player Player[MAX], int counter, int i, int exit);
void filltable(int table[][SIZE], player Player[MAX], int counter);
void PVP(int table[][SIZE],player Player[], int counter, int playercounter);
void menu(int table[][SIZE],player Player[]);

#endif /* FUNCTIONS_H */

