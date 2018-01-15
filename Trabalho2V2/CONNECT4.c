/* 
 * File:   CONNECT4.c
 * Author: Jorge Moreira
 * Trabalho 2 - CONNECT4
 * Created on 13 de Janeiro de 2018, 15:56
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

//------------------------------MAIN CODE---------------------------------------

int main(int argc, char** argv) {
    int table[SIZE][SIZE];
    Player player[MAX_PLYR];

    FILE *file = fopen("game.dat", "rb");
    if(file != NULL){
        readfile(player);
        menu(table, player);
    } else {
        menu(table, player);
    }
    fclose(file);

    return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------
