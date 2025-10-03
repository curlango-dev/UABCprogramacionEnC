//
// Created by Cecilia Curlango on 9/9/25.
//

#ifndef ESTRUCTURASCONCARTAS_BARAJAINGLESA_H
#define ESTRUCTURASCONCARTAS_BARAJAINGLESA_H
#include <stdio.h>
#include <stdbool.h>
#include "aleatorio.h"

typedef struct{
    int valor;
    char palo;
}Carta;

void mezclar(Carta cartas[], int tamano);
void llenarBaraja(Carta cartas[], int tamano);
void mostrarVariasCartas(Carta cartas[], int tamano);
Carta buscarCartaMayor(Carta cartas[], int tamano);
int sumaCartas(Carta cartas[], int tamano);
void mostrarCarta(Carta carta);
bool compararValor(Carta uno, Carta dos);
Carta generarCartaAleatoria();
int sumarComo1(Carta uno, Carta dos, Carta tres);
int sumarComo11(Carta uno, Carta dos, Carta tres);

#endif //ESTRUCTURASCONCARTAS_BARAJAINGLESA_H
