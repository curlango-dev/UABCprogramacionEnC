#include <stdio.h>
#include "BarajaInglesa.h"

int main(void) {
    initAleatorio();
    Carta unaCarta, dos, tres;
    unaCarta = generarCartaAleatoria();
    dos = generarCartaAleatoria();
    tres = generarCartaAleatoria();
    mostrarCarta(unaCarta);
    printf("\n");
    mostrarCarta(dos);
    printf("\n");
    mostrarCarta(tres);
    int laSuma = sumarComo1(unaCarta,dos,tres);
    printf("\nLas cartas suman %d\n", laSuma);
     laSuma = sumarComo11(unaCarta,dos,tres);
    printf("\nLas cartas suman %d\n", laSuma);
//    unaCarta.valor = 10;
//    unaCarta.palo = 'C';
//    Carta otraCarta = {10,'C'};
//    // printf("%d %c\n",unaCarta.valor, unaCarta.palo);
//    mostrarCarta(unaCarta);
//    printf("\n");
//    mostrarCarta(otraCarta);
//    bool sonIguales = compararValor(unaCarta,otraCarta);
//    printf("\nLas cartas son iguales %d\n", sonIguales);

    return 0;
}
