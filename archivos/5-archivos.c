#include <stdio.h>

int main() {
    FILE *archivo;
    char nombre_archivo[] = "datos.txt";
    int numero;

    // Abrir el archivo en modo de lectura
    archivo = fopen(nombre_archivo, "r");

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; // Salir del programa indicando un error
    }

    // Leer el contenido del archivo utilizando fscanf
    while (fscanf(archivo, "%d", &numero) != EOF) {
        printf("%d\n", numero); // Imprimir el número leído
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0; // Salir del programa indicando éxito
}

