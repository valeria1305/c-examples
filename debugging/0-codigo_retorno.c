#include <stdio.h>
#include <stdlib.h>

int divide(int a, int b, int *result) {
    if (b == 0) {
        return -1;  // Error: división por cero
    }
    *result = a / b;
    return 0;  // Éxito
}

int main() {
    int a = 10, b = 0;
    int result;
    int status = divide(a, b, &result);

    if (status == 0) {
        printf("Resultado: %d\n", result);
    } else {
        fprintf(stderr, "Error: División por cero\n");
    }

    return 0;
}

