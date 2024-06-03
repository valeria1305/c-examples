#include <stdio.h>

// Declaración de variable externa
extern int globalVar;

// Declaraciones de funciones
void funcion1();
void funcion2();

int main() {
    // Accediendo a globalVar desde main
    printf("Valor de globalVar en main: %d\n", globalVar);
    
    // Modificando globalVar desde main
    globalVar = 50;
    printf("Valor modificado de globalVar en main: %d\n", globalVar);
    
    // Llamando a las funciones
    funcion1();
    funcion2();
    
    return 0;
}

// Definición de globalVar
int globalVar = 10;

void funcion1() {
    // Accediendo a globalVar desde funcion1
    printf("Valor de globalVar en funcion1: %d\n", globalVar);
    
    // Modificando globalVar desde funcion1
    globalVar = 20;
    printf("Valor modificado de globalVar en funcion1: %d\n", globalVar);
}

void funcion2() {
    // Accediendo a globalVar desde funcion2
    printf("Valor de globalVar en funcion2: %d\n", globalVar);
}

