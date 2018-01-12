/* 
 * File:   Trabalho2.c
 * Author: Jorge Moreira
 * Trabalho 2
 * Created on 10 de Janeiro de 2018, 18:33
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





int main(int argc, char** argv) {
    
    int table[SIZE][SIZE];
    
    player Player[MAX];
    
    menu(table, Player);

    return (EXIT_SUCCESS);
}

