// Copia de cadenas de caracteres

#include <stdio.h>

void strcopy(char *s, char *t) {
    while ((*s++ = *t++) != '\0')
        ;
}

int main() {
    char source[] = "hello world";
    char destination[20];

    strcopy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
