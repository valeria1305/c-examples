// Inicialización de un struct

#include <stdio.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point maxpt = { 320, 200 };
    
    printf("Max point coordinates: (%d, %d)\n", maxpt.x, maxpt.y);
    return 0;
}
