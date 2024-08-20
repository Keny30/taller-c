#include "Ejercicio9.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void ejercicio9()
{
    pid_t pid;
    pid = fork();

    if (pid == -1)
    {
        return 1;
    }
    else if (pid == 0)
    {
        printf("Soy el proceso hijo %d", getpid());
    }
    else
    {
        wait(NULL);
        printf("Soy tu padre %d", getpid());
    }

    
}