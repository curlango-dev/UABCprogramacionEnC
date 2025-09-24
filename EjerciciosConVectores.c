#include <stdio.h>
#include "aleatorio.h"
//
// Created by Cecilia Curlango on 9/23/25.
//
void llenarVectorConNumeroAleatorios(int vector[], int tamano);

void mostrarVector(int vector[], int tamano);

void mostrarPares(int vector[], int tamano);

void mostrarImpares(int vector[], int tamano);

float calcularElPromedio(int vector[], int tamano);

float calcularElPromedioDeLosImpares(int vector[], int tamano);

void menu();
typedef struct {
    int valor;
    char palo;
}Carta;
void mostrarCartasRojas(Carta cartas[], int tamano);
const int MAX = 5;

int main() {
    Carta lasCartas[MAX];
    lasCartas[0].valor = 1;
    lasCartas[0].palo = 'C';
    lasCartas[1].valor = 2;
    lasCartas[1].palo = 'T';
    lasCartas[2].valor = 3;
    lasCartas[2].palo = 'T';
    lasCartas[3].valor = 4;
    lasCartas[3].palo = 'D';
    lasCartas[4].valor = 5;
    lasCartas[4].palo = 'P';
    mostrarCartasRojas(lasCartas, MAX);
    // int numeros[MAX];
    // int opcion = 0;
    //
    // do {
    //     menu();
    //     printf("Ingresa una opcion:\n");
    //     scanf("%d", &opcion);
    //
    //     switch (opcion) {
    //         case 1:
    //             llenarVectorConNumeroAleatorios(numeros, MAX);
    //             break;
    //         case 2:
    //             mostrarVector(numeros, MAX);
    //             break;
    //         case 3:
    //             mostrarPares(numeros, MAX);
    //             break;
    //         case 4: // salir
    //             break;
    //         default:
    //             printf("Opcion invalida\n");
    //     }
    // } while (opcion != 4);


    // llenar de números aleatorios
    // llenarVectorConNumeroAleatorios(numeros, MAX);
    // mostrarVector(numeros, MAX);
    // printf("\nEl vector tiene los siguientes números pares\n");
    // mostrarPares(numeros, MAX);
    // printf("\nEl vector tiene los siguientes números impares\n");
    // mostrarImpares(numeros, MAX);
    // printf("\nEl promedio de los números es %0.2f\n",
    //     calcularElPromedio(numeros,MAX));
    // printf("\nEl promedio de los números impares es %0.2f\n",
    //     calcularElPromedioDeLosImpares(numeros,MAX));
}
void mostrarCartasRojas(Carta cartas[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        if (cartas[i].palo == 'C' || cartas[i].palo == 'D') {
            printf("%d%c", cartas[i].valor,cartas[i].palo);
        }
    }
}
void menu() {
    printf("Menu\n");
    printf("1. Llenar un vector con 20 números aleatorios.\n");
    printf("2. Mostrar los números pares.\n");
    printf("3. Mostrar los números impares.\n");
    printf("4. Fin\n");
}

void mostrarVector(int vector[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("%d ", vector[i]);
    }
}

void llenarVectorConNumeroAleatorios(int vector[], int tamano) {
    initAleatorio();
    for (int i = 0; i < tamano; i++) {
        vector[i] = numeroAleatorio(100);
    }
}

void mostrarPares(int vector[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        if (vector[i] % 2 == 0) {
            printf("%d ", vector[i]);
        }
    }
}

void mostrarImpares(int vector[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        if (vector[i] % 2 == 1) {
            printf("%d ", vector[i]);
        }
    }
}

float calcularElPromedio(int vector[], int tamano) {
    float promedio = 0;
    for (int i = 0; i < tamano; i++) {
        promedio += vector[i];
    }
    promedio = promedio / tamano;
    return promedio;
}

float calcularElPromedioDeLosImpares(int vector[], int tamano) {
    float promedio = 0;
    int contadorDeImpares = 0;
    for (int i = 0; i < tamano; i++) {
        if (vector[i] % 2 == 1) {
            promedio += vector[i];
            contadorDeImpares++;
        }
    }
    promedio = promedio / contadorDeImpares;
    return promedio;
}
