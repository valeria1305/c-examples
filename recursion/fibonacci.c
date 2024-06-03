#include <stdio.h>

// Función recursiva para calcular el término n de la serie de Fibonacci
// La serie de Fibonacci es una secuencia de números donde cada número es 
// la suma de los dos números anteriores.

// 0 1 
// 0 1 1
// 0 1 1 2
// 0 1 1 2 3 
// 0 1 1 2 3 5 8 13

int fibonacci(int n) {
    if (n <= 1) // Caso base
        return n;
    else // Caso recursivo
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// fibonacci(7) = fibonacci(6)                + fibonacci(5)
//              = fibonacci(5) + fibonacci(4) + fibonacci(4) + fibonacci(3)
//              = fibonacci(5) + fibonacci(4) + fibonacci(4) + fibonacci(3)
//                                                             fibonacci(2)                + fibonacci(1)  
                                                            // fibonacci(1) + fibonacci(0) + 1
                                                            // 1            + 0            + 1


// fibonacci(2)               
// fibonacci(1) + fibonacci(0)


int main() {
    int num = 5;
    printf("El término %d de la serie de Fibonacci es %d\n", num, fibonacci(num));
    return 0;
}
