#include <stdio.h>

void buggyFunction(int n) {
    printf("buggyFunction called with n = %d\n", n);  // Mensaje de depuración

    if (n > 0) {
        buggyFunction(n - 1);
    } else {
        printf("n is now %d\n", n);  // Mensaje de depuración
    }
}

int main() {
    buggyFunction(3);
    return 0;
}

