#include <stdio.h>

int main() {
    FILE *archivo;
    char buffer[100]; // Para almacenar los datos leídos

    archivo = fopen("ejemplo.txt", "r"); // Abre el archivo ejemplo.txt en modo lectura

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Leer del archivo y mostrar en pantalla
    while (fgets(buffer, 100, archivo) != NULL) {
        printf("%s", buffer);
    }

    fclose(archivo); // Cierra el archivo

    return 0;
}

