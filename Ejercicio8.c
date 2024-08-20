#include "Ejercicio8.h"
#include <stdio.h>
#include <stdlib.h>

void ejercicio8()
{
    int lista[] = {1, 2, 3, 4, 5};
    int *puntero = lista;

int n = sizeof(lista)/sizeof(lista[0]);
    for (int i = 0; i < n; i++)
    {
        printf("Elemento: %d: %d\n", i, *puntero);
        puntero++;
    }
}