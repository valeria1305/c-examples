#include <stdio.h>

// Definición del enum Estado
enum Estado { DESACTIVADO = 0, ACTIVADO = 1, ESPERA = 2 };

int main() {
    // Declaración de una variable de tipo enum Estado
    enum Estado sistemaEstado;

    // Asignación de un valor del enum a la variable
    sistemaEstado = ACTIVADO;

    // Conversión a valor entero y uso de la variable enum
    int valor = sistemaEstado;
    printf("Valor entero del estado del sistema: %d\n", valor);

    // Comparación de valores enum
    if (sistemaEstado == ACTIVADO) {
        printf("El sistema está activado.\n");
    } else if (sistemaEstado == DESACTIVADO) {
        printf("El sistema está desactivado.\n");
    } else if (sistemaEstado == ESPERA) {
        printf("El sistema está en espera.\n");
    }

    // Cambiando el estado
    sistemaEstado = DESACTIVADO;
    printf("El estado del sistema ahora es: ");
    switch (sistemaEstado) {
        case DESACTIVADO:
            printf("DESACTIVADO\n");
            break;
        case ACTIVADO:
            printf("ACTIVADO\n");
            break;
        case ESPERA:
            printf("ESPERA\n");
            break;
        default:
            printf("Estado desconocido\n");
    }

    return 0;
}
