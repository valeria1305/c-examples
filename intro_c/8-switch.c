#include <stdio.h>

int main() {
    int numero;
    printf("ingrese un numero\n");
    scanf("%d", &numero);

    // if (numero == 0) {
    //     // haga algo
    // } else if (numero == 1) {
    //     // haga otra cosa
    // } else if (numero == 2) {
    //     // haga otra otra cosa
    // } else {
    //     // default
    // }

    switch(numero) {
    case 0:
        printf("num es 0\n");
        break;
    case 1:
        printf("num es 1\n");
        break;
    case 2:
        printf("num es 2\n");
        break;
    default:
        printf("num es otro\n");
        break;
    }

    return 0;
}
