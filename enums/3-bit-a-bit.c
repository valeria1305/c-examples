#include <stdio.h>

// Definición del enum Color con valores como potencias de 2
enum Color { ROJO = 1, VERDE = 2, AZUL = 4 };
// ROJO = 0001
// VERDE = 0010
// AZUL = 0100
// 0101 &
// 0001 = 0001

int main() {
    // Combinación de colores
    enum Color mezcla = ROJO | AZUL;

    // Impresión de la mezcla de colores
    printf("La mezcla de colores tiene el valor: %d\n", mezcla);

    // Comprobación de cada color en la mezcla
    if (mezcla & ROJO) printf("Incluye ROJO\n");
    if (mezcla & VERDE) printf("Incluye VERDE\n");
    if (mezcla & AZUL) printf("Incluye AZUL\n");

    return 0;
}
