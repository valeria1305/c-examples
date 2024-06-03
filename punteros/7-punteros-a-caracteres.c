// Cálculo de la longitud de una cadena

#include <stdio.h>

int strlength(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++) {
        n++;
    }
    return n;
}

int main() {
    char *str = "hello, world!";
    printf("Length of the string: %d\n", strlength(str));
    return 0;
}
