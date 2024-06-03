#include <stdio.h>

void funcion() {
    // Variable estática
    static int contador = 0;

    // Incrementa el contador en cada llamada
    contador++;

    printf("Llamada %d a la función\n", contador);
}

int main() {
    // Llamadas a la función
    funcion();
    funcion();
    funcion();

    return 0;
}
