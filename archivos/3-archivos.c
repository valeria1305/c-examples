#include <stdio.h>

int main() {
    FILE *archivo;
 
   archivo = fopen("resultados.txt", "a"); // Abrir en modo anexar

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Nuevos resultados: 42\n"); // Agregar datos al archivo

    fclose(archivo); // Cerrar el archivo

    return 0;
}
