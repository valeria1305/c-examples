// Ejemplo de combinación de campos de bits y otros miembros en una estructura
#include <stdio.h>

// Definición de una estructura con campos de bits y otros tipos de miembros
struct DeviceStatus {
    unsigned int isOnline : 1;    // Campo de bit (1 bit)
    unsigned int errorCode : 4;   // Campo de bit (4 bits)
    char name[20];                // Miembro de tipo array de caracteres
    int batteryLevel;             // Miembro de tipo entero
};

int main() {
    // Declaración e inicialización de una variable de tipo DeviceStatus
    struct DeviceStatus device = {1, 3, "Sensor", 85};

    // Impresión de los valores de los miembros de la estructura
    printf("Device Status:\n");
    printf("Is Online: %u\n", device.isOnline);          // 1
    printf("Error Code: %u\n", device.errorCode);        // 3
    printf("Name: %s\n", device.name);                   // Sensor
    printf("Battery Level: %d%%\n", device.batteryLevel); // 85%

    return 0;
}
