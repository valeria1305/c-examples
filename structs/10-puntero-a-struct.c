#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point points[3] = {{1, 2}, {3, 4}, {5, 6}};
    struct Point *ptr = points;

    for (int i = 0; i < 3; i++) {
        printf("Point %d coordinates: (%d, %d)\n", i + 1, (ptr + i)->x, (ptr + i)->y);
    }
    return 0;
}
