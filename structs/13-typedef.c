// Punteros a funciones
#include <stdio.h>

typedef int (*FuncPtr)(int, int);

int add(int a, int b) {
    return a + b;
}

int main() {
    FuncPtr func = add;
    int result = func(2, 3);
    printf("Result of addition: %d\n", result);
    return 0;
}
