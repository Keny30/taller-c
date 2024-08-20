#include "Ejercicio5.h"
#include <stdio.h>
#include <stdlib.h>

void ejercicio5() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Digite un numero (1, 2 o 3): ");
    scanf("%d", &num);

    // Usar switch case para imprimir el mensaje adecuado
    switch (num) {
        case 1:
            printf("Este es el bueno.\n");
            break;
        case 2:
            printf("Este es el malo.\n");
            break;
        case 3:
            printf("Este es el feo.\n");
            break;
        default:
            printf("No sé.\n");
            break;
    }
}
