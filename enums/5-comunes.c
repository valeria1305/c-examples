#include <stdio.h>

// Definición del enum DiaSemana
enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

// Función para imprimir el día de la semana
void imprimirDia(enum DiaSemana dia) {
    switch (dia) {
        case LUNES: printf("Hoy es Lunes.\n"); break;
        case MARTES: printf("Hoy es Martes.\n"); break;
        case MIERCOLES: printf("Hoy es Miércoles.\n"); break;
        case JUEVES: printf("Hoy es Jueves.\n"); break;
        case VIERNES: printf("Hoy es Viernes.\n"); break;
        case SABADO: printf("Hoy es Sábado.\n"); break;
        case DOMINGO: printf("Hoy es Domingo.\n"); break;
        default: printf("Día no válido.\n");
    }
}

int main() {
    // Declaración y asignación de variables de tipo enum DiaSemana
    enum DiaSemana hoy = MIERCOLES;
    enum DiaSemana manana = JUEVES;

    // Uso de la función imprimirDia
    imprimirDia(hoy);
    imprimirDia(manana);

    return 0;
}
