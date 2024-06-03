#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    // Igualdad (==)
    if (a == b) {
        printf("a es igual a b\n");
    } else {
        printf("a no es igual a b\n");
    }

    // Desigualdad (!=)
    if (a != b) {
        printf("a no es igual a b\n");
    } else {
        printf("a es igual a b\n");
    }

    // Mayor que (>)
    if (a > b) {
        printf("a es mayor que b\n");
    } else {
        printf("a no es mayor que b\n");
    }

    // Mayor o igual que (>=)
    if (a >= b) {
        printf("a es mayor o igual que b\n");
    } else {
        printf("a no es mayor o igual que b\n");
    }

    // Menor que (<)
    if (a < b) {
        printf("a es menor que b\n");
    } else {
        printf("a no es menor que b\n");
    }

    // Menor o igual que (<=)
    if (a <= b) {
        printf("a es menor o igual que b\n");
    } else {
        printf("a no es menor o igual que b\n");
    }

    return 0;
}

