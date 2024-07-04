// Definición y uso básico de structs en funciones

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

// Función que imprime un punto
void print_point(struct point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

// Función que calcula el área de un rectángulo
int area(struct rect r) {
    int width = r.pt2.x - r.pt1.x;
    int height = r.pt2.y - r.pt1.y;
    return width * height;
}

int main() {
    struct point p1 = {2, 3};
    struct point p2 = {5, 6};
    struct rect r = {p1, p2};

    print_point(p1);
    print_point(p2);
    printf("Area of rectangle: %d\n", area(r));

    return 0;
}
