/* 
 * File:   Exercicio1.c
 * Author: Jorge Moreira
 * Ficha8 - Exercicio1
 * Created on 21 de Dezembro de 2017, 11:57
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"

#define MAX_CHAR 30
#define MAX_STUD 10

typedef struct {
    int day;
    int month;
    int year;
} BirthDate;

typedef struct {
    char name[MAX_CHAR];
    int number;
    BirthDate date;
} Students;

Students class[MAX_STUD];

/*vai verificar se existe o aluno cujo o numero inserido e igual, caso nao for retorna -1
 * caso seja retorna o respetivo valor (i)
 */
int search(Students class[], int counter, int number) {
    int i;

    for (i = 0; i < counter; ++i) {
        if (class[i].number == number) {
            return i;
        }
    }
    return -1;
}
//Imprime o aluno escolhido se existir

void printstudent(Students class[], int counter) {
    int i, num;

    printf("Indique o numero do aluno a consultar:");
    scanf("%d", &num);
    puts("");

    for (i = 0; i < counter; ++i) {
        if (class[i].number == num) {
            printf("Aluno %d\n", class[i].number);
            printf("Nome: %s\n", class[i].name);
            printf("Data de Nascimento: %d-%d-%d\n", class[i].date.day, class[i].date.month, class[i].date.year);
            puts("");

        } else if (class[i].number == num) {
            printf("O aluno nao existe!!\n");
        }
    }
}

//imprime todos os alunos

void printall(Students class[], int counter) {
    int i;

    for (i = 0; i < counter; ++i) {
        puts("");
        printf("Aluno %d\n", class[i].number);
        printf("Nome: %s\n", class[i].name);
        printf("Data de Nascimento: %d-%d-%d\n", class[i].date.day, class[i].date.month, class[i].date.year);
    }
}

//pede os dados dos alunos

void read(Students class[], int i) {
    Students new_student;

    clean_buffer();
    puts("Insira o nome do estudante:");
    readstring(new_student.name, MAX_CHAR);
    puts("Insira o numero:");
    scanf("%d", &new_student.number);
    puts("Insira a data de nascimento:");
    scanf("%d %d %d", &new_student.date.day, &new_student.date.month, &new_student.date.year);
    clean_buffer();

    class[i] = new_student;
}

//insere novos registos

int insert(Students class[], int counter) {

    if (counter < MAX_STUD) {
        read(class, counter);
        counter++;
    } else {
        puts("Nao e possivel colocar mais alunos");
    }
    return counter++;
}

//atualiza os dados dos alunos conforme o valor retonado da funcao search

void update(Students class[], int counter) {
    int number, pos;

    printf("Numero do estudante a atualizar:");
    scanf("%d", &number);
    pos = search(class, counter, number);

    if (pos != -1) {
        read(class, pos);
    } else {
        puts("O estudante nao existe!!");
    }
}

int delete(Students class[], int counter) {
    int number, pos;

    if (counter <= MAX_STUD) {
        printf("Indique o numero do aluno a apagar:"); //pede identificador de registo (posicao)
        scanf("%d", &number);

        pos = search(class, counter, number); //verifica a existencia de um estudante
        if (pos != -1) {
            for (; pos < counter; ++pos) { //arrasta o vetor para tras ate a posicao escolhida                              
                class[pos] = class[pos + 1]; //igualando a posicao escolhida a seguinte 
            } //para ser apagada e assim sucessivamente
            --counter; //depois decrementase o contador para apagar a posicao repetida (ultima)
        } else {
            puts("O estudante nao existe!!");
        }
    } else {
        puts("Não ha registos!!!");
    }

    return counter;
}

//menu do programa

void menu(Students class[], int counter) {
    int opc;

    puts("1. Inserir");
    puts("2. Alterar");
    puts("3. Remover");
    puts("4. Consulta aos detalhes de um Aluno");
    puts("5. Listagem de todos os Alunos");
    puts("0. Sair");


    do {
        printf("Opcao Escolhida:");
        scanf("%d", &opc);
        switch (opc) {
            case 1: counter = insert(class, counter);
                break;
            case 2: update(class, counter);
                break;
            case 3: delete(class, counter);
                break;
            case 4: printstudent(class, counter);
                break;
            case 5: printall(class, counter);
                break;
            case 0: break;
            default: puts("Opcao incorreta");
        }
    } while (opc != 0);
}

int main(int argc, char** argv) {

    int counter = 0;
    menu(class, counter);

    return (EXIT_SUCCESS);
}

