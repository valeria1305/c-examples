#include <stdio.h>

// Definición del enum Estado
enum Estado { DESACTIVADO, ACTIVADO, ESPERA };

// Definición de la estructura Producto
struct Producto {
    char nombre[50];
    enum Estado disponibilidad;
};

int main() {
    // Declaración e inicialización de una variable de tipo struct Producto
    struct Producto p1;
    
    // Inicialización de los campos de la estructura
    snprintf(p1.nombre, sizeof(p1.nombre), "Producto A");
    p1.disponibilidad = ACTIVADO;

    // Impresión del estado del producto
    printf("Nombre del producto: %s\n", p1.nombre);
    printf("Estado de disponibilidad: ");
    switch (p1.disponibilidad) {
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
