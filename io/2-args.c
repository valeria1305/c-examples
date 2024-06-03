#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Verifica si se han proporcionado argumentos suficientes
    if (argc != 3) {
        printf("Uso: %s <nombre> <edad>\n", argv[0]);
        return 1; // Retorna 1 para indicar un error
    }

    // Lee los argumentos de la línea de comandos
    char *nombre = argv[1];
    int edad = atoi(argv[2]); // Convierte el segundo argumento a entero
    
    // Conversion implicita, no da el valor que esperamos, sino el ASCII
    // int edad = *argv[2];

    // Imprime los valores proporcionados
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);

    return 0; // Retorna 0 para indicar éxito
}

