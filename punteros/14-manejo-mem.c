#include <stdio.h>
#include <stdlib.h>

int main() {
    // Asignar memoria para 5 enteros e inicializarlos a 1
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        perror("malloc failed");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = 1;
    }

    // Redimensionar la memoria para 10 enteros usando realloc
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        perror("realloc failed");
        return 1;
    }

    // Inicializar los nuevos elementos a 0
    for (int i = 5; i < 10; i++) {
        arr[i] = 0;
    }

    // Imprimir los elementos del arreglo
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Liberar la memoria
    free(arr);
    return 0;
}
