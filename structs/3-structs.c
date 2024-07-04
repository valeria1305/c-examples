// Structs anidados

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

int main() {
    struct rect screen = { {0, 0}, {640, 480} };
    
    printf("Rectangle coordinates: pt1(%d, %d), pt2(%d, %d)\n",
           screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);

    return 0;
}
