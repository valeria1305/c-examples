#include <stdio.h>

// Definición del enum Mes
enum Mes { ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE };

// Función para imprimir el mes
void imprimirMes(enum Mes mes) {
    switch (mes) {
        case ENERO: printf("Es Enero.\n"); break;
        case FEBRERO: printf("Es Febrero.\n"); break;
        case MARZO: printf("Es Marzo.\n"); break;
        case ABRIL: printf("Es Abril.\n"); break;
        case MAYO: printf("Es Mayo.\n"); break;
        case JUNIO: printf("Es Junio.\n"); break;
        case JULIO: printf("Es Julio.\n"); break;
        case AGOSTO: printf("Es Agosto.\n"); break;
        case SEPTIEMBRE: printf("Es Septiembre.\n"); break;
        case OCTUBRE: printf("Es Octubre.\n"); break;
        case NOVIEMBRE: printf("Es Noviembre.\n"); break;
        case DICIEMBRE: printf("Es Diciembre.\n"); break;
        default: printf("Mes no válido.\n");
    }
}

int main() {
    // Declaración y asignación de variables de tipo enum Mes
    enum Mes mesActual = MAYO;
    enum Mes mesProximo = JUNIO;

    // Uso de la función imprimirMes
    imprimirMes(mesActual);
    imprimirMes(mesProximo);

    return 0;
}
