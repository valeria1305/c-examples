#include <stdio.h>
#include <stdlib.h> // Necesario para atoi

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <valor>\n", argv[0]);
        return 1;
    }

    int valor = atoi(argv[1]); // Convertir argumento a entero

    FILE *archivo;
    archivo = fopen("resultados.txt", "a"); // Abrir en modo anexar

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Nuevos resultados: %d\n", valor); // Agregar datos al archivo
    fclose(archivo); // Cerrar el archivo

    return 0;
}

