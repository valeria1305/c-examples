#include <stdio.h>

int main() {
    int a = 10, b = 20, z;
    int x = -5;

    z = (a > b) ? a : b;  // z toma el valor máximo de a y b
    printf("%d\n", z);   // Imprime el máximo de a y b

    printf("El valor de x es: %d\n", (x > 0) ? x : -x);  // Imprime el valor absoluto de x

    return 0;
}

