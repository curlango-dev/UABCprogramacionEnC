#include <stdio.h>
#include "BarajaInglesa.h"
#define TAM_BARAJA 13 * 4
#define TAM_MANO 5
int deal5(Carta cartas[], int tamano, Carta mano[]);

int main(void) {

    char opcion;
    Carta baraja[TAM_BARAJA];
    Carta mano[TAM_MANO];
    int tamano = TAM_BARAJA;
    do {
        printf("\nMenu\n");
        printf("a. Crear mazo de cartas y mezclarlo.\n");
        printf("b. Extraer 5 una mano de 5 cartas.\n");
        printf("c. Mostrar la mano de cartas.\n");
        printf("d. Mostrar la carta más alta de la mano.\n");
        printf("e. Mostrar la suma de las cartas de la mano.\n");
        printf("f. Terminar el programa.\n");
        printf("Ingrese una opcion: ");
        scanf("%c", &opcion);
        getchar();

        switch (opcion) {
            case 'a':
                llenarBaraja(baraja, tamano);
                mezclar(baraja, TAM_BARAJA);
                break;
            case 'b':
                tamano = deal5(baraja, tamano, mano);
                break;
            case 'c':
                mostrarVariasCartas(mano, TAM_MANO);
                break;
            case 'd':
                Carta mayor = buscarCartaMayor(mano, TAM_MANO);
                printf("La carta más alta es: ");
                mostrarCarta(mayor);
                break;
            case 'e':
                int suma = sumaCartas(mano, TAM_MANO);
                printf("La suma de las cartas de la mano es %d", suma);
                break;
            case 'f':
                break;
            default:
                printf("Opcion incorrecto.\n");
        }
    } while (opcion != 'f');
    return 0;
}

int deal5(Carta cartas[], int tamano, Carta mano[]) {
    if (tamano >= 5) {
        for (int i = 0; i < 5; i++) {
            mano[i] = cartas[tamano - 1];
            tamano--;
        }
    }
    return tamano;
}
