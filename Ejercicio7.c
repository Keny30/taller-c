#include "Ejercicio7.h"
#include <stdio.h>
#include <stdlib.h>

void ejercicio7() {
    int numero = 10;
    int *puntero = &numero;

    printf("Número: %d\n", numero);
    printf("Puntero: %d\n", *puntero);
    // para imprimir direccion de memoria:
    //printf("Puntero: %pn", puntero);
    printf("La direccion del puntero es: %p\n", &puntero);
}