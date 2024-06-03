#include <stdio.h>

// Uso de punteros para acceder a elementos de un array
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *pa = a;  // pa apunta al primer elemento de a

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(pa + i));
    }
    return 0;
}
