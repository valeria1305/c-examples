#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {2, 3};
    struct Point *ptr = &p1;

    printf("Point coordinates: (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}
