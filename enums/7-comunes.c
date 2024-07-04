#include <stdio.h>

// Definición del enum ProcesoEstado

// Representa los estados de un proceso...
enum ProcesoEstado { INICIO, EJECUCION, FINALIZADO };

// Función para imprimir el estado del proceso
void imprimirEstado(enum ProcesoEstado estado) {
    switch (estado) {
        case INICIO: printf("El proceso está en INICIO.\n"); break;
        case EJECUCION: printf("El proceso está en EJECUCIÓN.\n"); break;
        case FINALIZADO: printf("El proceso ha FINALIZADO.\n"); break;
        default: printf("Estado de proceso no válido.\n");
    }
}

int main() {
    // Declaración y asignación de variables de tipo enum ProcesoEstado
    enum ProcesoEstado estadoActual = INICIO;
    enum ProcesoEstado estadoSiguiente = EJECUCION;

    // Uso de la función imprimirEstado
    imprimirEstado(estadoActual);
    imprimirEstado(estadoSiguiente);

    // Cambio de estado
    estadoActual = FINALIZADO;
    imprimirEstado(estadoActual);

    return 0;
}
