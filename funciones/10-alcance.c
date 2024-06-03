#include <stdio.h>

int x = 5; // variable global

void myFunction() {
    x = 10; // variable local que oculta la global
    printf("El valor de x dentro de myFunction: %d\n", x);
}

int main() {
    myFunction();
    printf("El valor de x en main: %d\n", x); // Imprime el valor de la variable global
    return 0;
}
