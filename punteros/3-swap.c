#include <stdio.h>

// Declaración de la función swap
void swap(int *px, int *py);

int main() {
    int a = 5;
    int b = 10;

    printf("Antes del intercambio: a = %d, b = %d\n", a, b);

    // Llamada a la función swap pasando las direcciones de a y b
    swap(&a, &b);

    printf("Después del intercambio: a = %d, b = %d\n", a, b);

    return 0;
}

// Definición de la función swap
void swap(int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}


