/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio15.c
 * Author: morei
 *
 * Created on 23 de Outubro de 2017, 16:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
#define totalkm 130

int main(int argc, char** argv) {
    int user_time;
    float average_speed, fuel_km, time_hour;

    puts("Em quanto tempo pretende fazer a viagem?");
    scanf("%d", &user_time);

    time_hour = user_time / 60;

    average_speed = totalkm / time_hour;
    printf("velocidade media: %.2f km/h\n", average_speed);

    /*para saber a distancia que o sr.Alcino faz com 4 kml a uma certa velocidade
     faz-se uma regra de 3 simples, p.e se a velocidade media de 60km o consumo e de
     5L/100km, logo qual sera da distancia para um deposito de 4L : (4*100) /5
     */

    if (average_speed <= 60) {
        fuel_km = (4 * 100) / 5;
        printf("A velocidades menores ou iguais a 60km/h o carro fará %.2fkms logo poderá parar na terceira\n", fuel_km);
    } else if (average_speed > 60 && average_speed <= 120) {
        fuel_km = (4 * 100) / 6;
        printf("A velocidades entre 60km/h e 120km/h inclusve, o carro fará %.2fkms logo poderá parar na segunda\n", fuel_km);
    } else if (average_speed > 120) {
        fuel_km = (4 * 100) / 7;
        printf("A velocidades maiores de 120km/h, o carro fará %.2fkms logo ficará encostado a berma\n", fuel_km);
    }
    return (EXIT_SUCCESS);
}

