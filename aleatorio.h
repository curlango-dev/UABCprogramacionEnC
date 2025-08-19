//
// Created by Cecilia Curlango on 8/19/25.
//
// Funciones que contienen comportamientos que requiere
// números aleatorios.

#ifndef ALEATORIO_H
#define ALEATORIO_H
#include <stdlib.h>
#include <time.h>
int numeroAleatorio(int maximo);
int numeroAleatorioConRango(int minimo,int maximo);
int lanzarDado();

/*
 * Regresa un número entre 1 y 6 como si
 * se lanza un dado de 6 caras.
 */
int lanzarDado() {
    return numeroAleatorio(6) + 1;
}
/*
 * Regresa un número aleatorio en el rango de
 * un valor mínimo a uno máximo sin incluir
 * el máximo.
 */
int numeroAleatorioConRango(int minimo, int maximo) {
    int rango = maximo - minimo;
    return numeroAleatorio(rango) + minimo;
}
/*
 * Regresa un número aleatorio en el rango de
 * 0 a uno máximo, sin incluir el máximo.
 */
int numeroAleatorio(int maximo) {
    srand(time(NULL));
    return rand()%maximo;
}
#endif //ALEATORIO_H
