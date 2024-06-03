// Uso en arrays

#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3}; // Declarar un array arr con 3 elementos
    //int *ptr = arr;         // Declarar un puntero ptr y asignarle la dirección del primer elemento de arr
    int *ptr;
    ptr = arr;
    
    printf("%p\n", arr);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);       // Imprimir el primer elemento del array (1)
    printf("%d\n", *(ptr + 1)); // Imprimir el segundo elemento del array (2)
    printf("%d\n", *(ptr + 2)); // Imprimir el tercer elemento del array (3)
    printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); // Imprimir el tercer elemento del array (3)
    
    return 0;
}
