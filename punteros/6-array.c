// Copiar contenido de un array usando punteros

#include <stdio.h>

void copyArray(int *src, int *dst, int n) {
    for (int i = 0; i < n; i++) {
        *(dst + i) = *(src + i);
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    copyArray(a, b, 5);
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
