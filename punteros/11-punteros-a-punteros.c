#include <stdio.h>

void modifyValue(int **ptrToPtr) {
    **ptrToPtr = 20;  // Modificar el valor al que apunta el puntero interno
}

int main() {
    int value = 10;
    int *ptr = &value;  // Puntero a int
    int **ptrToPtr = &ptr;  // Puntero a puntero

    printf("Before: %d\n", value);  // Imprime 10

    // Llamar a la función para modificar el valor
    modifyValue(ptrToPtr);

    printf("After: %d\n", value);  // Imprime 20

    return 0;
}
