#include "Ejercicio6.h"
#include <stdio.h>
#include <stdlib.h>

void ejercicio6() {
    unsigned num;
    unsigned long long factorial = 1;  // Inicializar el factorial como 1 (ya que 0! = 1 y es el valor de inicio para multiplicación)

    // Solicitar al usuario que ingrese un número
    printf("Digite un número entero positivo: ");
    scanf("%d", &num);

    // Verificar que el número no sea negativo
    if (num < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return;
    }

    // Calcular el factorial utilizando un bucle while
    int i = num;
    while (i > 1) {
        factorial *= i;
        i--;
    }

    // Mostrar el resultado
    printf("El factorial de %d es: %llu\n", num, factorial);
}
