#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    // División entera
    float c = a / b;

    // Si uno de los argumentos es flotante, el resultado de la división
    // es flotante
    float d = (float)a / b;

    // Imprime ambos resultados
    printf("Sin casting: %.2f\n", c);
    printf("Con casting: %.2f\n", d);

    return 0;
}
