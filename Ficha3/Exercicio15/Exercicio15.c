/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio15.c
 * Author: morei
 *
 * Created on 1 de Novembro de 2017, 15:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
#define nacional_sal 557

void CleanEntryBuffer() {

    char ch;

    while ((ch = getchar()) != '\n' && ch != EOF);

}

int main(int argc, char** argv) {
    int age, count_age, count = 1, count_Fem, count_Masc, count_m_married = 0;
    int count_salary = 0, fem_salary = 0;
    int min_age = 150, max_age = 0;
    char sex, civil_state;
    double salary, sum_salary;

    while (1) {
        printf("Questionario nº %d \n", count);
        //Pedir idades
        puts("Introduza a sua idade");
        scanf("%d", &age);

        if (age >= 16 && age <= 150) {
            if (age < min_age) {
                min_age = age;
            } else if (age > max_age) {
                max_age = age;
            }
        } else if (age < 0) {
            puts("Introduziu uma idade negativa, o programa ira encerrar");
            break;
        } else
            puts("INPUT INVALIDO");


        //Pedir o sexo
        CleanEntryBuffer();

        puts("Introduza o seu sexo M-Masculino ou F-Feminino");
        scanf("%c", &sex);


        if (sex == 'M') {
            ++count_Masc;
        } else if (sex == 'F') {
            ++count_Fem;
        } else {
            puts("INPUT INVALIDO");
        }

        //Pedir o estado civil
        CleanEntryBuffer();

        puts("Introduza o seu estado civil 1-solteiro | 2-casado | 3-divorciado | 4-viuvo");
        scanf("%c", &civil_state);

        if (civil_state == '1') {

        } else if (civil_state == '2') {

        } else if (civil_state == '3') {

        } else if (civil_state == '4') {

        } else {
            puts("INPUT INVALIDO");
        }

        //Pedir o salario 
        CleanEntryBuffer();
        puts("Introduza o seu salario se maior que o salario minimo nacional:");
        scanf("%lf", &salary);

        if (salary > nacional_sal) {
            ++count_salary;
            sum_salary += salary;
        } else {
            puts("O seu salario e menor que o minimo permitido!!!!");
        }

        //mulheres com salarios ate 1500
        if (sex == 'F' && salary <= 1500) {
            fem_salary++;
        }
        //homens casados com idades 18-35
        if (sex == 'M' && civil_state == '2' && age >= 18 && age <= 35) {
            count_m_married++;
        }

        CleanEntryBuffer();
        ++count;
    }

    printf("Idade menor: %d\n", min_age);
    printf("Idade maior: %d\n", max_age);
    printf("Homens casados com idades entre 18 e 35 anos: %d\n", count_m_married);
    printf("Pessoas do sexo feminino com salarios ate 1500 euros: %d\n", fem_salary);
    printf("Media dos salarios %.1lf Euros\n", sum_salary / count_salary);

    return (EXIT_SUCCESS);
}

