#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("archivo_no_existente.txt", "r");

    if (archivo == NULL) {
        fprintf(stderr, "Error al abrir el archivo.\n");
        return 1;
    }

    // Resto del código para trabajar con el archivo
    fclose(archivo);
    return 0;
}

