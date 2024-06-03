// Concatenación de cadenas

#include <stdio.h>

void strconcat(char *s, char *t) {
    while (*s) s++;
    while ((*s++ = *t++) != '\0')
        ;
}

int main() {
    char str1[20] = "hello, ";
    char str2[] = "world";
    strconcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
