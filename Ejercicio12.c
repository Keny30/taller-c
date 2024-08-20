#include <stdio.h>
#include <string.h>

// Definición de la estructura
struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
};

int ejercicio12() {
    // Creación de una instancia de la estructura Estudiante
    struct Estudiante estudiante1;

    // Asignación de valores a la estructura
    strcpy(estudiante1.nombre, "Juan Pérez");
    estudiante1.edad = 20;
    estudiante1.nota = 8.5;

    // Mostrar los valores asignados
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Nota: %.2f\n", estudiante1.nota);

    return 0;
}
