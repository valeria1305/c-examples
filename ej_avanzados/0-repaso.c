// Repaso de la Memoria Dinámica Básica
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Alocar memoria para 5 enteros.
    if (arr == NULL) {
        perror("Error al alocar memoria");
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr); // Liberar memoria.
    return 0;
}
