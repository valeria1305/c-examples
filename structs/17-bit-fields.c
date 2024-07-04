#include <stdio.h>

// Definición de una estructura para representar permisos
struct {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
} permissions;

int main() {
    // Asignación de valores a los permisos
    permissions.read = 1;    // Permiso de lectura
    permissions.write = 0;   // No tiene permiso de escritura
    permissions.execute = 1; // Permiso de ejecución

    // Impresión de los permisos
    printf("Read: %u\n", permissions.read);     // 1
    printf("Write: %u\n", permissions.write);   // 0
    printf("Execute: %u\n", permissions.execute); // 1

    return 0;
}
