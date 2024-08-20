#include <stdio.h>
#include <stdlib.h>

int ejercicio13() {
    int n;
    int *arr;

    // Solicitar el tamaño del arreglo
    printf("Ingrese el número de elementos: ");
    scanf("%d", &n);

    // Asignar memoria dinámicamente para un arreglo de 'n' enteros
    arr = (int *)malloc(n * sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Llenar el arreglo con valores
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor para arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Imprimir los valores del arreglo
    printf("Los valores del arreglo son:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Liberar la memoria asignada dinámicamente
    free(arr);

    return 0;
}
