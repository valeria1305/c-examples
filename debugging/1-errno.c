#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error al abrir el archivo: %s\n", strerror(errno));
        return EXIT_FAILURE;
    }

    // ... Código para trabajar con el archivo ...

    fclose(file);
    return EXIT_SUCCESS;
}

