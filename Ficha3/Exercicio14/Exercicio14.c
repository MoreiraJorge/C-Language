/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio14.c
 * Author: morei
 *
 * Created on 27 de Outubro de 2017, 18:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float cand1, cand2, cand3, cand4, total, blank, null, vote;

    while (1) {
        puts("Introduza em quem pretende votar");
        puts("1 - candidato 1");
        puts("2 - candidato 2");
        puts("3 - candidato 3");
        puts("4 - candidato 4");
        puts("0 - Deixar voto em branco");
        puts("9 - Nulo");
        puts("-1 - Sair");
        scanf("%f", &vote);

        if (vote >= 1 && vote <= 4) {
            if (vote == 1) {
                ++cand1;
            } else if (vote == 2) {
                ++cand2;
            } else if (vote == 3) {
                ++cand3;
            } else if (vote == 4) {
                ++cand4;
            }
            ++total;

        } else if (vote == 0) {
            blank++;
            ++total;
        } else if (vote == 9) {
            null++;
            ++total;

        } else if (vote == -1) {
            break;
        } else {
            puts("INPUT INVALIDO");
        }

    }
    printf("Total de votos: %.1f\n", total);
    printf("Total de votos cand1: %.1f || percentagem: %.2f%%\n", cand1, (cand1 / total)*100);
    printf("Total de votos cand2: %.1f || percentagem: %.2f%%\n", cand2, (cand2 / total)*100);
    printf("Total de votos cand3: %.1f || percentagem: %.2f%%\n", cand3, (cand3 / total)*100);
    printf("Total de votos cand4: %.1f || percentagem: %.2f%%\n", cand4, (cand4 / total)*100);
    printf("Votos em branco: %.1f || percentagem: %.2f%%\n", blank, (blank / total)*100);
    printf("Votos nulos: %.1f || percentagem: %.2f%%\n", null, (blank / total)*100);

    return (EXIT_SUCCESS);
}

