//
// Created by Cecilia Curlango on 9/2/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

char obtenerPaloAleatorio();
int obtenerValorAleatorio();
void mostrarCarta(int valor, char palo);
bool esPar(int valor1, char palo1, int valor2, char palo2);

int main() {
    bool laRespuesta = esPar(10,'C',10,'D');
    printf("las cartas %d \n", laRespuesta);
    srand(time(0));
    char elPalo = obtenerPaloAleatorio();
    printf("Un palo aleatorio es %c\n",elPalo);
    int elValor = obtenerValorAleatorio();
    printf("La carta tiene un valor de %d\n", elValor);

    printf("La carta es ");
    mostrarCarta(elValor,elPalo);
    printf("\n");
}
bool esPar(int valor1, char palo1, int valor2, char palo2){
    bool respuesta = false;
    if (valor1==valor2) {
        respuesta = true;
    }
    return respuesta;
}
void mostrarCarta(int valor, char palo) {
    switch (valor) {
        case 1:
            printf("A");
            break;
        case 11:
            printf("J");
            break;
        case 12:
            printf("Q");
            break;
        case 13:
            printf("K");
            break;

        default:
            printf("%d", valor);
            break;
    }
    switch (palo) {
        case 'P':
            printf(" pica");
            break;
        case 'T':
            printf(" trébol");
            break;
        case 'D':
            printf(" diamante");
            break;
        case 'C':
            printf(" corazón");
            break;
    }
}

int obtenerValorAleatorio() {
    int valor=1;

    valor = rand()%13 + 1;

    return valor;
}
char obtenerPaloAleatorio() {
    int valor=1;
    char palo;
    valor = rand()%4;
    switch (valor) {
        case 0:
            palo = 'P';
        break;
        case 1:
            palo = 'T';
            break;
        case 2:
            palo = 'D';
            break;
        case 3:
            palo = 'C';
            break;
    }
    return palo;
}