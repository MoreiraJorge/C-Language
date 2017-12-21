/* 
 * File:   Exercicio1.c
 * Author: Jorge Moreira
 * Ficha8 - Exercicio1
 * Created on 21 de Dezembro de 2017, 11:57
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 30
#define MAX_STUD 2

int clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    return 1;
}

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

void printall(Students class[]){
    int i;
    
    for (i = 0; i < MAX_STUD; ++i){
        printf("Aluno %d:", class[i].number);
        printf("Nome %s:", class[i].name);
    }
}

void read(Students class[], int i) {
    clean_buffer();
    puts("Insira o nome do estudante:");
    scanf("%s", &class[i].name);
    clean_buffer();
    puts("Insira o numero:");
    scanf("%d", &class[i].number);
    puts("Insira a data de nascimento:");
    scanf("%d %d %d", &class[i].date.day, &class[i].date.month, &class[i].date.year);

}

void insert(Students class[]) {
    int i = 0;
    for (i; i < MAX_STUD; ++i) {
        printf("quelaqeur coisa %d", i);
        read(class, i);
    }
}

void menu(Students class[]) {
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
            case 1: insert(class);
                break;
            case 2: printall(class);
                break;
            case 3: puts("C");
                break;
            case 4: puts("D");
                break;
            case 5: puts("E");
                break;
            case 0: break;
            default: puts("Opcao incorreta");
        }
    } while (opc != 0);
}

int main(int argc, char** argv) {

    menu(class);

    return (EXIT_SUCCESS);
}

