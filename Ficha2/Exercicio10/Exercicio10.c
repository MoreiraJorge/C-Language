/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio10.c
 * Author: morei
 *
 * Created on 20 de Outubro de 2017, 21:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    
    puts("Insira um numero");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 5 == 0) {
        puts("O numero é divisivel por 3 e por 5");
    } else {
        puts("O numero nao é divisivel por 3 nem por 5");
    }    
    return (EXIT_SUCCESS);
}

