#include <stdio.h>
#include "aleatorio.h"

int main(void) {
    initAleatorio();
    printf("Vamos a lanzar un dado\n");
    int valor = lanzarDado();
    printf("Cayó un %d\n", valor);
    return 0;
}
