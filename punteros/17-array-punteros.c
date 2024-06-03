#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STRINGS 5
#define MAX_LENGTH 100

int main() {
    // Declarar el array de punteros a char
    char *strings[NUM_STRINGS];
    
    // Asignar memoria para cada puntero
    for (int i = 0; i < NUM_STRINGS; i++) {
        strings[i] = malloc(MAX_LENGTH * sizeof(char));
        if (strings[i] == NULL) {
            fprintf(stderr, "Error al asignar memoria\n");
            return 1;
        }
    }
    
    // Solicitar al usuario que ingrese las cadenas
    for (int i = 0; i < NUM_STRINGS; i++) {
        printf("Ingrese la cadena %d: ", i + 1);
        fgets(strings[i], MAX_LENGTH, stdin);
        // Eliminar el salto de línea al final de la cadena, si existe
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }
    
    // Mostrar las cadenas ingresadas
    printf("\nCadenas ingresadas:\n");
    for (int i = 0; i < NUM_STRINGS; i++) {
        printf("Cadena %d: %s\n", i + 1, strings[i]);
    }
    
    // Liberar la memoria asignada
    for (int i = 0; i < NUM_STRINGS; i++) {
        free(strings[i]);
    }
    
    return 0;
}
