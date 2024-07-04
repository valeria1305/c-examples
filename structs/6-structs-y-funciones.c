// Retorno de structs desde funciones

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point create_point(int x, int y) {
    struct point p;
    p.x = x;
    p.y = y;

    return p;
}

int main() {
    struct point p = create_point(10, 20);
    printf("Created point: (%d, %d)\n", p.x, p.y);

    return 0;
}
