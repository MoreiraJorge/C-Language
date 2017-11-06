/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int functionfactorial(int n){
    int i = 0;
    for (i = 1; n > 1 ; n--){
        i = n*i;
    }
    return i;
}