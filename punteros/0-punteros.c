//Asignacion de direcciones y acceso a valores

#include <stdio.h>

int main() {
    int x = 5;    // Declarar una variable x y asignarle el valor 5
    int *p;       // Declarar un puntero p que apunta a un entero
    p = &x;       // Asignar la dirección de x a p

    printf("%d\n", *p); // Imprimir el valor al que apunta p (valor de x)
    printf("%p\n", p); // Imprimir el valor guardado en p (dirección de memoria de x)
    printf("%p\n", &x); // Imprimir el valor guardado en p (dirección de memoria de x)
    
    return 0;
}
