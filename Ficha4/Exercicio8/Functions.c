/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

void readgrade() {
    int grade;

    while (1) {
        puts("Introduza o valor da sua nota:");
        scanf("%d", &grade);

        if (grade >= 1 && grade <= 20) {
            break;
        } else {
            puts("Introduziu um valor fora do limite");
        }

    }
}


void graderepeat(int max){
    int i = 0;
    
    for (i = 1; i < max; i++){
      printf("Aluno %d\n", i);
      readgrade();  
    }
}