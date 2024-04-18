#include <stdio.h>

int main() {

    // Declara variables de distintos tipos de datos
    char a;
    short int b;
    int c;
    long int d;
    float e;
    double f;
    long double g;

    // Imprime el tamaño (en bytes) de cada tipo
    //
    // sizeof() returna un valor 'long unsigned int', y '%d' es el código de
    // formato para imprimir 'int', por lo que se genera un warning. Para evitarlo
    // debe usarse el código de formato '%lu' o bien hacer un casting a 'int'.

    printf("char: %lu\n", sizeof(a));
    printf("short int: %lu\n", sizeof(b));
    printf("int: %lu\n", sizeof(c));
    printf("long int: %lu\n", sizeof(d));
    printf("float: %lu\n", sizeof(e));
    printf("double: %lu\n", sizeof(f));
    printf("long double: %lu\n", sizeof(g));

    return 0;
}
