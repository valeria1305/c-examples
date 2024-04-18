#include <stdio.h>
#include <string.h>

int main() {

    /* Dos cadenas constantes */
    char const1[] = "Esta es una cadena constante";
    char *const2 = "Esta es otra cadena constante";

    /* Imprime las cadenas */
    puts(const1);
    puts(const2);

    puts("-------");

    /* Imprime los tamaños de las cadenas */
    printf("const1: %d caracteres\n", (int)strlen(const1));
    printf("const2: %d caracteres\n", (int)strlen(const2));

    puts("-------");

    /* Trata de guardar una nueva cadena constante en las cadenas */

    /* Esto da error */
    // const1 = "Esta es una nueva cadena constante";

    /* Esto si funciona */
    const2 = "Esta es otra nueva cadena constante";
    
    /* Trate de modificar elementos dentro del arreglo */
    
    /* Esto si funciona */
    const1[0] = 'e';
    
    /* Esto da error */
    // const2[0] = 'e';

    /* Imprime las cadenas */
    puts(const1);
    puts(const2);

    return 0;

}
