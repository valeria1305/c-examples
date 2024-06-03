// Modificar valores a través de punteros

#include <stdio.h>

int main() {
    int y = 10;   // Declarar una variable y y asignarle el valor 10
    int *q;       // Declarar un puntero q que apunta a un entero
    q = &y;       // Asignar la dirección de y a q
    *q = 20;      // Cambiar el valor al que apunta q a 20 (cambiar y a 20)

    printf("%d\n", y); // Imprimir el valor de y
    
    return 0;
}
