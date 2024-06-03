#include <stdio.h>

int main() {
    unsigned int x = 10; // Representación binaria: 1010
    unsigned int y = 6;  // Representación binaria: 0110

    // Operador AND (&)
    unsigned int resultado_and = x & y; // 1010 & 0110 = 0010 (2 en decimal)
    printf("Resultado de x & y: %u\n", resultado_and);

    // Operador OR inclusivo (|)
    unsigned int resultado_or = x | y;  // 1010 | 0110 = 1110 (14 en decimal)
    printf("Resultado de x | y: %u\n", resultado_or);

    // Operador XOR (^)
    unsigned int resultado_xor = x ^ y; // 1010 ^ 0110 = 1100 (12 en decimal)
    printf("Resultado de x ^ y: %u\n", resultado_xor);

    // Desplazamiento a la izquierda (<<)
    unsigned int resultado_shift_izq = x << 2; // 1010 << 2 = 101000 (40 en decimal)
    printf("Resultado de x << 2: %u\n", resultado_shift_izq);

    // Desplazamiento a la derecha (>>)
    unsigned int resultado_shift_der = y >> 1; // 0110 >> 1 = 0011 (3 en decimal)
    printf("Resultado de y >> 1: %u\n", resultado_shift_der);

    // Complemento de uno (~)
    unsigned int resultado_complemento = ~x; // ~1010 = 0101 (4294967285 en decimal)
    printf("Complemento de uno de x: %u\n", resultado_complemento);

    return 0;
}

