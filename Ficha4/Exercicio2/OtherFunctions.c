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

