#include <stdio.h>

int main() {
    // Declaración y asignación del array de punteros
    char *fruits[] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};

    // Determinar el número de elementos en el array
    int numFruits = sizeof(fruits) / sizeof(fruits[0]);

    // Imprimir cada cadena de texto utilizando el array de punteros
    for (int i = 0; i < numFruits; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
