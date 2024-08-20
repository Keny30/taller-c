#include "Ejercicio10.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS_2 2
#define ITERATIONS_2 1000000

int contador = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *incrementar(void *arg) {
    int id = *((int *) arg);
    for (int i = 0; i < ITERATIONS_2; i++) {
        pthread_mutex_lock(&mutex);
        contador++;  // Sección crítica
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

void ejercicio11() {
    pthread_t threads[NUM_THREADS_2];
    int ids[NUM_THREADS_2];

    for (int i = 0; i < NUM_THREADS_2; i++) {
        ids[i] = i;
        if (pthread_create(&threads[i], NULL, incrementar, (void *)&ids[i]) != 0) {
            perror("Error creating thread");
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i < NUM_THREADS_2; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Error joining thread");
            exit(EXIT_FAILURE);
        }
    }

    printf("El valor del contador es: %d\n", contador);
}
