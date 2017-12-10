/* 
 * File:   Utils.h
 * Author: Jorge Moreira
 * Trabalho pratico 1
 * Created on 27 de Novembro de 2017, 20:39
 */

#ifndef UTILS_H
#define UTILS_H

#define TAM 10
#define MAX 2
#define ESPACO ' '

void clean_buffer();
void mostra(char tabela[][TAM]);
void preenchertabela(char tabela[][TAM], char token[MAX]);
void pedirtoken(char token[MAX]);
void initabela(char tabela[][TAM]);

#endif /* UTILS_H */

