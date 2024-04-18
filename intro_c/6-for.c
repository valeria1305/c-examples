#include <stdio.h>

int main() {

    // Declara 2 variables enteras
    int i, numero;
    
    // Lee un entero de la entrada estándar y lo guarda en 'numero'
    printf("Escriba un número: ");
    scanf("%d", &numero);
    
    // Itera desde que 'i' es 0 hasta que 'i' sea menor que 'numero',
    // sumándole 1 a 'i' en cada iteración
    // for(i = 0; i < numero; i++) {
    for(i = 0; i < numero; i = i + 1) {
        printf("%d\n", i);
    }
}
