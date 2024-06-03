#include <stdio.h>

int main() {
    // Declaración de variables
    int a = 10, b = 3, resultado;
    
    // Suma
    resultado = a + b;
    printf("Suma: %d + %d = %d\n", a, b, resultado);
    
    // Resta
    resultado = a - b;
    printf("Resta: %d - %d = %d\n", a, b, resultado);
    
    // Multiplicación
    resultado = a * b;
    printf("Multiplicación: %d * %d = %d\n", a, b, resultado);
    
    // División
    resultado = a / b;
    printf("División: %d / %d = %d\n", a, b, resultado);
    
    // Módulo
    resultado = a % b;
    printf("Módulo: %d %% %d = %d\n", a, b, resultado);
    
    // Incremento
    resultado = ++a;
    printf("Incremento de a: %d\n", resultado);
    
    // Decremento
    resultado = --b;
    printf("Decremento de b: %d\n", resultado);
    
    // Operadores de asignación compuesta
    a += 5; // Equivalente a: a = a + 5;
    printf("Operador de asignación compuesta (+=): a = %d\n", a);
    
    b -= 2; // Equivalente a: b = b - 2;
    printf("Operador de asignación compuesta (-=): b = %d\n", b);
    
    a *= 2; // Equivalente a: a = a * 2;
    printf("Operador de asignación compuesta (*=): a = %d\n", a);
    
    b /= 2; // Equivalente a: b = b / 2;
    printf("Operador de asignación compuesta (/=): b = %d\n", b);
    
    a %= 3; // Equivalente a: a = a % 3;
    printf("Operador de asignación compuesta (%%=): a = %d\n", a);
    
    return 0;
}

