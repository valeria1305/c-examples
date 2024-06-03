#include <stdio.h>

int main() {
    int a = 5, b = 7, c = 10;
    int resultado1, resultado2;

    resultado1 = a == b && b < c;
    resultado2 = a != b || b >= c;

    printf("Resultado 1: %d\n", resultado1);
    printf("Resultado 2: %d\n", resultado2);

    return 0;
}
