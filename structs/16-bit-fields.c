#include <stdio.h>

// Definición de una estructura con campos de bits
struct {
    unsigned int a : 1;
    unsigned int b : 3;
    unsigned int c : 4;
} example;

int main() {
    // Asignación de valores a los campos
    example.a = 1;
    example.b = 5;
    example.c = 10;

    // Impresión de los valores de los campos
    printf("a: %u\n", example.a); // 1
    printf("b: %u\n", example.b); // 5
    printf("c: %u\n", example.c); // 10

    return 0;
}
