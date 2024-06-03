#include <stdio.h>
#include <stdlib.h> // Necesario para exit()

int main() {
    FILE *archivo;
    archivo = fopen("archivo_no_existente.txt", "r");

    if (archivo == NULL) {
        fprintf(stderr, "Error al abrir el archivo.\n");
        exit(1);
    }

    // Resto del código para trabajar con el archivo
    fclose(archivo);
    return 0;
}

