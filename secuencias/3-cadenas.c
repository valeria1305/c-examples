#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char cadena[30];

    /* Se lee lo que escribe el usuario y se guarda en cadena */
    printf("Ingrese una cadena: ");
    scanf("%[^\n]", cadena); // En el caso de las cadenas, no debe usarse &

    printf("----\n");

    printf("cadena: %s\n", cadena);

    printf("----\n");

    /* Imprime los tamaños de las cadenas */
    printf("Tamaño de cadena: %lu\n", strlen(cadena));

    printf("----\n");

    /* Imprime cadena carácter por carácter */
    for(i = 0; i < 30; i++) {
        putchar(cadena[i]);
        putchar('\n');
    }

    return 0;

}
