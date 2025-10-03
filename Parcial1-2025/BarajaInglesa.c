//
// Created by Cecilia Curlango on 9/9/25.
//
#include "BarajaInglesa.h"

/*
 * Escribe una función que reciba un arreglo de cartas
 * de una baraja inglesa, es decir de tipo Carta,
 * su tamaño y regrese la suma de estas.
 * Si alguna carta es un A, la debe tomar con un valor de 1.
 */
int sumaCartas(Carta cartas[], int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += cartas[i].valor;
    }
    return suma;
}

/*
 * Escribe una función que reciba una arreglo de cartas,
 * su tamaño y regrese la mayor. Considera que el A vale 1.
 */
Carta buscarCartaMayor(Carta cartas[], int tamano) {
    Carta laMayor = cartas[0];
    for (int i = 1; i < tamano; i++) {
        if (cartas[i].valor > laMayor.valor) {
            laMayor = cartas[i];
        }
    }
    return laMayor;
}

/*
 * Escribe una función que reciba un arreglo con
 * cartas de una baraja inglesa, su tamaño y muestre
 * cada carta. Las cartas con valor 1, 11, 12 y 13
 * deberán mostrar las letras A, J, Q y K respectivamente
 * en lugar del valor.
 * Además del valor de la carta, debe mostrarse su palo.
 */
void mostrarVariasCartas(Carta cartas[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        mostrarCarta(cartas[i]);
    }
}

/*
 * Escribe una función que reciba un arreglo de
 * cartas de una baraja inglesa y su tamaño y
 * lo llene con todas las cartas que tiene una
 * baraja inglesa.
 */
void llenarBaraja(Carta cartas[], int tamano) {
    if (tamano == 13 * 4) {
        int i = 0;
        for (int j = 1; j <= 13; j++) {
            cartas[i].valor = j;
            cartas[i].palo = 'C';
            i++;
            cartas[i].valor = j;
            cartas[i].palo = 'D';
            i++;
            cartas[i].valor = j;
            cartas[i].palo = 'T';
            i++;
            cartas[i].valor = j;
            cartas[i].palo = 'P';
            i++;
        }
    }
}

/*
 * Escribe una función que reciba un arreglo de
 * cartas de una baraja inglesa y su tamaño y
 * cambie el orden de las cartas a uno aleatorio
 * haciendo la función de mezclar o barajar
 * un mazo de cartas.
 */
void mezclar(Carta cartas[], int tamano) {
    Carta temp;
    initAleatorio();
    for (int i=0; i<tamano; i++) {
        int j = numeroAleatorio(tamano);
        temp = cartas[i];
        cartas[i] = cartas[j];
        cartas[j] = temp;
    }
}

/*
 * Recibe una carta y la muestra
 */
void mostrarCarta(Carta carta) {
    char elValor;
    switch (carta.valor) {
        case 1:
            elValor = 'A';
            printf("%c %c  ", elValor, carta.palo);
            break;
        case 11:
            elValor = 'J';
            printf("%c %c  ", elValor, carta.palo);
            break;
        case 12:
            elValor = 'Q';
            printf("%c %c  ", elValor, carta.palo);
            break;
        case 13:
            elValor = 'K';
            printf("%c %c  ", elValor, carta.palo);
            break;
        default:
            printf("%d %c  ", carta.valor, carta.palo);
            break;
    }
}

/*
 * Escribe una función que reciba
 * dos cartas de una baraja inglesa
 * y regrese true si ambas cartas
 * tienen el mismo valor y false si no.
*/
bool compararValor(Carta uno, Carta dos) {
    bool respuesta = true;
    if (uno.valor != dos.valor) {
        respuesta = false;
    }
    return respuesta;
}

/*
 * Generar una carta de baraja inglesa aleatoria.
 */
Carta generarCartaAleatoria() {
    Carta cartaNueva;
    // generar el valor entre 1 - 13
    cartaNueva.valor = numeroAleatorioConRango(1, 13);
    // generar el palo entre 1 - 4 (CDTP)
    int disquePalo = numeroAleatorioConRango(1, 4);
    // traducir el disque palo a un palo
    switch (disquePalo) {
        case 1:
            cartaNueva.palo = 'C';
            break;
        case 2:
            cartaNueva.palo = 'D';
            break;
        case 3:
            cartaNueva.palo = 'T';
            break;
        case 4:
            cartaNueva.palo = 'P';
            break;
    }
    return cartaNueva;
}

/*
 * Escribe una función que reciba tres cartas
 * de una baraja inglesa y regrese la suma
 * de estas.
 * Si alguna carta es un A,
 * la debe tomar con un valor de 1.
 */
int sumarComo1(Carta uno, Carta dos, Carta tres) {
    int suma = 0;
    // suma = uno.valor + dos.valor + tres.valor;
    suma = suma + uno.valor;
    suma += dos.valor;
    suma += tres.valor;
    return suma;
}

/*
 * Escribe una función que reciba tres cartas
 * de una baraja inglesa y regrese la suma
 * de estas.
 * Si alguna carta es un A,
 * la debe tomar con un valor de 11.
 */
int sumarComo11(Carta uno, Carta dos, Carta tres) {
    int suma = 0;
    // operador ternario ? :
    //    if (uno.valor==1) {
    //        suma += 11;
    //    } else {
    //        suma += uno.valor;
    //    }
    //    int valor = uno.valor==1 ? 11 : uno.valor;

    suma += (uno.valor == 1 ? 11 : uno.valor);
    suma += dos.valor == 1 ? 11 : dos.valor;
    suma += tres.valor == 1 ? 11 : tres.valor;
    return suma;
}
