#include "Ejercicio2.h"
#include <stdio.h>
#include <stdlib.h>

int ejercicio2()
{
    FILE *file;
    file = fopen("../ejercicio2.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open file\n");
        return -1;
    }
    char archivo;
    while ((archivo = fgetc(file)) != EOF)
    {
        putchar(archivo);
    }
    return 0;
}
