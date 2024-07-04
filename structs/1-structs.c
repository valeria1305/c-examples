// Definición y uso básico de un struct

#include <stdio.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point pt;
    pt.x = 10;
    pt.y = 20;
    
    printf("Point coordinates: (%d, %d)\n", pt.x, pt.y);
    return 0;
}
