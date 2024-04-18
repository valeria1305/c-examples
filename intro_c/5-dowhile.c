#include <stdio.h>

int main() {

    // Declara variable 'salir' y le asigna un valor inicial
    int salir = 0;

    // Itera mientras 'salir' sea distinta de cero
    do {

        printf("Escriba '0' para salir: ");

        // Lee un entero y lo guarda en 'salir'
        scanf("%d", &salir);

    } while(salir != 0);

    return 0;
}
