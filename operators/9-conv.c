#include <stdio.h>

int main() {
    // Reglas de Conversión Automática
    float f = 3.5;
    int i = 2;
    float resultado_auto = f + i;

    // Conversiones Explícitas e Implícitas
    int entero = 10;
    double decimal = 3.14;
    int resultado_explicito = (int)decimal;
    double resultado_implícito = entero;

    // Operaciones con Caracteres
    char c = 'a';
    int ascii = c;

    // Conversiones de Enteros y Punto Flotante
    int entero_largo = 1000000000000000000;
    short entero_corto;
    entero_corto = entero_largo;

    // Conversiones de Carácter a Entero
    char d = '7';
    int digito = d - '0';

    // Impresión de resultados
    printf("Resultado de la conversión automática: %f\n", resultado_auto);
    printf("Resultado de la conversión explícita: %d\n", resultado_explicito);
    printf("Resultado de la conversión implícita: %lf\n", resultado_implícito);
    printf("Valor ASCII del carácter 'a': %d\n", ascii);
    printf("Valor del entero corto: %d\n", entero_corto);
    printf("Resultado de la conversión de carácter a entero: %d\n", digito);

    return 0;
}

