#include "Ejercicio3.h"
#include <stdio.h>
#include <stdlib.h>

void ejercicio3() {
    int num;
    printf("Digite un numero: ");
    scanf("%d", &num);
    printf("El numero digitado fue: %d\n", num);
    char *ejemplo;  

    if (num == 0) {
        ejemplo= "Cero";
    } else if (num < 0) {
       ejemplo= "Negativo";
    } else {
        ejemplo= "Positivo";
    }
    
    printf("El numero digitado fue: %d y es %s\n", num, ejemplo);
}
