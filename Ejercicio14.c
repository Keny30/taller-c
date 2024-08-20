#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura para un nodo de la lista enlazada
struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

// Función para crear un nuevo nodo
struct Nodo* crearNodo(int dato) {
    struct Nodo *nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    if (nuevoNodo == NULL) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

// Función para insertar un nodo al final de la lista
void insertar(struct Nodo **cabeza, int dato) {
    struct Nodo *nuevoNodo = crearNodo(dato);
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
    } else {
        struct Nodo *temp = *cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

// Función para obtener el tamaño de la lista
int obtenerTamano(struct Nodo *cabeza) {
    int tamano = 0;
    struct Nodo *temp = cabeza;
    while (temp != NULL) {
        tamano++;
        temp = temp->siguiente;
    }
    return tamano;
}

// Función para imprimir la lista enlazada
void imprimirLista(struct Nodo *cabeza) {
    struct Nodo *temp = cabeza;
    while (temp != NULL) {
        printf("%d -> ", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

// Función para liberar la memoria de la lista enlazada
void liberarLista(struct Nodo *cabeza) {
    struct Nodo *temp;
    while (cabeza != NULL) {
        temp = cabeza;
        cabeza = cabeza->siguiente;
        free(temp);
    }
}

int ejercicio14() {
    struct Nodo *lista = NULL;

    insertar(&lista, 10);
    insertar(&lista, 20);
    insertar(&lista, 30);

    printf("Lista enlazada: ");
    imprimirLista(lista);

    int tamano = obtenerTamano(lista);
    printf("Tamaño de la lista: %d\n", tamano);

    liberarLista(lista);
    return 0;
}
