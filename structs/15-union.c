// Ejemplo de cómo NO utilizar un union en C
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

struct DataStruct {
    int i;
    float f;
    char str[20];
};


int main() {
    union Data data;
    struct DataStruct dataStruct;

    // Asignar un valor entero
    data.i = 10;
    dataStruct.i = 10;

    printf("data.i : %d\n", data.i);
    printf("dataStruct.i : %d\n", dataStruct.i);

    // Sin ninguna operación intermedia, intentar leer el valor flotante
    // que aún no ha sido asignado
    printf("data.f (esperando valor no definido): %f\n", data.f);
    printf("dataStruct.f (esperando valor no definido): %f\n", dataStruct.f);

    // Asignar un valor de cadena de caracteres
    strcpy(data.str, "C Programming");
    strcpy(dataStruct.str, "C Programming");
    printf("data.str : %s\n", data.str);
    printf("dataStruct.str : %s\n", dataStruct.str);

    // Intentar leer el valor entero después de asignar una cadena de caracteres
    printf("data.i (esperando valor no definido): %d\n", data.i);
    printf("data.i (esperando valor no definido): %d\n", dataStruct.i);
    printf("data.f (esperando valor no definido): %f\n", data.f);
    printf("dataStruct.f (esperando valor no definido): %f\n", dataStruct.f);
    return 0;
}
