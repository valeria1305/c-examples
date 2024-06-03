#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements;
    int *numbers;
    int sum = 0;

    // Pedir al usuario la cantidad de números a ingresar
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &num_elements);

    // Asignar memoria para la cantidad de números especificada
    numbers = (int *)malloc(num_elements * sizeof(int));
    if (numbers == NULL) {
        perror("Error al asignar memoria");
        return 1;
    }

    // Pedir al usuario que ingrese los números
    printf("Ingrese %d números:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calcular la suma de los números ingresados
    for (int i = 0; i < num_elements; i++) {
        sum += numbers[i];
    }

    // Mostrar la suma
    printf("La suma de los números ingresados es: %d\n", sum);

    // Liberar la memoria asignada
    free(numbers);

    return 0;
}
