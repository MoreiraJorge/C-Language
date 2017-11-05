/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#define SYMBOL "*"

int readnumber() {
    int num1;
    scanf("%d", &num1);
    return num1;
}

void printsymbol(int num1) {
    int i = 0;
    for (i; i < num1; ++i) {
        printf(SYMBOL);
    }
}