/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

void cleanentrybuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void functiondraw(char symb, int col, int line) {
    int i = 0, j = 0;

    for (i = 1; i <= line; i++) {
        for (j = 1; j <= col; j++) {
            if (i > 1 && i < line && j > 1 && j < col) {
                printf(" ");
                continue;
            } else {
                printf("%c", symb);
            }
        }
        puts(" ");
    }
}