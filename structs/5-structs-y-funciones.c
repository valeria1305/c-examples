// Paso de structs a funciones

#include <stdio.h>

struct point {
    int x;
    int y;
};

void move_point(struct point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    struct point p = {1, 2};
    printf("Original point: (%d, %d)\n", p.x, p.y);
    
    move_point(&p, 5, 3);
    printf("Moved point: (%d, %d)\n", p.x, p.y);

    return 0;
}
