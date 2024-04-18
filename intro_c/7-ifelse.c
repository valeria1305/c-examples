#include <stdio.h>

int main() {

    int variable;

    printf("Ingrese un numero: ");
    scanf("%d", &variable);

    if (variable == 0) {
        printf("Nuestra variable es 0\n");
    } else if (variable == 1) {
	printf("Nuestra variable es 1\n");
    } else {
        printf("Nuestra variable NO es 0\n");
    }

    return 0;
}
