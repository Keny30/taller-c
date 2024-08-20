#include "Ejercicio10.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void ejercicio10() {
    int pipe_fd[2];
    if (pipe(pipe_fd) == -1) {
        printf("La creación del pipe falló\n");
        return;
    }

    pid_t pid = fork();

    if (pid == -1) {
        printf("La creación del fork falló\n");
        return;
    } else if (pid == 0) { 
        pid_t mensajeRecibido;
        close(pipe_fd[1]); 
        read(pipe_fd[0], &mensajeRecibido, sizeof(mensajeRecibido));
        close(pipe_fd[0]); 
        printf("Soy el proceso hijo %d y recibí el PID %d\n", mensajeRecibido);
    } else {  
        close(pipe_fd[0]); 
        write(pipe_fd[1], &pid, sizeof(pid));
        close(pipe_fd[1]); 
        wait(NULL); 
        printf("Soy el proceso padre %d y envié el PID %d\n", getpid(), pid);
    }
}
