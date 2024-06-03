#include <stdio.h>

int main() {
    int entero;
    float flotante;
    char cadena[100];

    // Solicitar al usuario que ingrese un entero, un flotante y una cadena
    printf("Ingrese un entero, un flotante y una cadena separados por espacios: ");
    
    // Leer los valores ingresados usando scanf
    int num_elementos_leidos = scanf("%d %f %99s", &entero, &flotante, cadena);
    
    printf("num elementos leidos: %d\n", num_elementos_leidos);

    // Verificar si todos los elementos se leyeron correctamente
    if (num_elementos_leidos == 3) {
        // Imprimir los valores leídos
        printf("Entero: %d\n", entero);
        printf("Flotante: %f\n", flotante);
        printf("Cadena: %s\n", cadena);
    } else {
        printf("Error: no se pudieron leer todos los elementos correctamente.\n");
    }

    return 0;
}

