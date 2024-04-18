#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int i;

    /* Declara dos arreglos */
    int lista[10];
    float constantes[] = {3.1428, 2.7182, 6.022e23};

    /* Inicializa generador de números aleatorios */
    srand(time(NULL));

    /* Llena el primer arreglo con números aleatorios
       entre 1 y 100 */
    for(i = 0; i < 10; i++) {
        int num = ((float)rand() / RAND_MAX) * 100;
        lista[i] = num;
    }

    /* Imprime ambas listas */
    /* ERROR: Se lee fuera de los límites del arreglo */
    for(i = 0; i < 10000; i++)
        printf("[%d] %d\n", i, lista[i]);

    printf("-----\n");

    for(i = 0; i < 3; i++)
        printf("[%d] %.4f\n", i, constantes[i]);

    return 0;
}
