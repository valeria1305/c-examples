#include <stdio.h>

int main() {
    int i = 0;
    int a, b;

    // Incremento en postfijo (i++)
    a = i++; // Asigna el valor actual de i a 'a', luego incrementa i
    printf("Incremento en postfijo (i++):\n");
    printf("a = %d, i = %d\n", a, i);

    // Reinicializamos i a 0
    i = 0;

    // Incremento en prefijo (++i)
    b = ++i; // Incrementa i antes de asignarlo a 'b'
    printf("\nIncremento en prefijo (++i):\n");
    printf("b = %d, i = %d\n", b, i);

    return 0;
}

