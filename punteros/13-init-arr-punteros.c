#include <stdio.h>

char *month_name(int n) {
    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}

int main() {
    int month_number;

    // Ejemplo de uso: solicitar al usuario que ingrese un número de mes
    printf("Enter month number (1-12): ");
    scanf("%d", &month_number);

    // Obtener y mostrar el nombre del mes correspondiente
    printf("The month is: %s\n", month_name(month_number));

    // Ejemplo adicional: mostrar todos los meses
    for (int i = 1; i <= 12; i++) {
        printf("Month %d: %s\n", i, month_name(i));
    }

    return 0;
}
