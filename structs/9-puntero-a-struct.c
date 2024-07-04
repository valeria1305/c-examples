#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point *ptr = (struct Point *)malloc(sizeof(struct Point));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    ptr->x = 5;
    ptr->y = 10;

    printf("Dynamically allocated Point coordinates: (%d, %d)\n", ptr->x, ptr->y);

    free(ptr); // Liberar memoria asignada
    return 0;
}
