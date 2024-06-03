#include <stdio.h>

int main() {
    FILE *archivo;

    archivo = fopen("ejemplo.txt", "w"); // Abre el archivo ejemplo.txt en modo escritura

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Trabaja con el archivo...
    fprintf(archivo, "Hola, mundo!\n"); // Escribe en el archivo

    fclose(archivo); // Cierra el archivo

    return 0;
}

