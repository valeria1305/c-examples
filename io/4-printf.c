#include <stdio.h>

int main() {
    int num = 123;
    double pi = 3.141592653589793;
    char *mensaje = "Hola, mundo!";
    
    printf("Entero: %d... float: %f\n", num, pi); // Imprime el valor del entero
    printf("Flotante: %.2f\n", pi); // Imprime el valor del flotante con 2 decimales de precisión
    printf("Cadena: %s\n", mensaje); // Imprime la cadena de caracteres
    
    // Imprime un entero en octal y hexadecimal
    printf("Entero en octal: %o\n", num);
    printf("Entero en hexadecimal: %x\n", num);
    
    // Imprime un carácter y su código ASCII
    char caracter = 'A';
    printf("Carácter: %c\n", caracter);
    printf("Código ASCII del carácter: %d\n", caracter);
    
    // Imprime un porcentaje y el mismo valor en decimal
    double porcentaje = 0.75;
    printf("Porcentaje: %.2f%%\n", porcentaje * 100); // Imprime el porcentaje
    printf("Valor decimal equivalente: %.2f\n", porcentaje); // Imprime el valor en decimal
    
    return 0;
}

