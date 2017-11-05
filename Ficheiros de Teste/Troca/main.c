/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: morei
 *
 * Created on 2 de Novembro de 2017, 13:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int troca(int a){
    a = 10;
}

int troca2(int *a){
    *a = 10;
}

int main(int argc, char** argv) {
    int a = 5;
    troca(a);
    printf("\n%d", a);
    
    troca2(&a);
    printf("\n%d", a);
    
    return (EXIT_SUCCESS);
}

