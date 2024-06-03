#include <stdio.h>

// Función recursiva para calcular el factorial
// El factorial de un número entero no negativo n (denotado como n!)
// se define como el producto de todos los enteros positivos hasta n.

// 5! = 5*4*3*2*1
// 3! = 3*2*1 


int factorial(int n) {
    if (n == 0) // Caso base
        return 1;
    else // Caso recursivo
        return n * factorial(n - 1);
}

// factorial(5) = 5 * factorial(4)
//              = 5 * 4 * factorial(3)
//              = 5 * 4 * 3 * factorial(2)
//              = 5 * 4 * 3 * 2 * factorial(1)
//              = 5 * 4 * 3 * 2 * 1 * factorial(0)
//              = 5 * 4 * 3 * 2 * 1 * 1

int main() {
    int num = 3;
    printf("El factorial de %d es %d\n", num, factorial(num));
    return 0;
}
