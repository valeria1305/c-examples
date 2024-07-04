// Uso con estructuras
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1 = {10, 20};
    printf("Point p1: (%d, %d)\n", p1.x, p1.y);
    return 0;
}
