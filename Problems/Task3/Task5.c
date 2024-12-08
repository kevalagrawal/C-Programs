#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point createPoint(int x, int y) {
    struct Point w = {x, y};
    return w;
}

int main() {
    struct Point p = createPoint(5, 10);

    printf("Point: (%d, %d)\n", p.x, p.y);

    return 0;
}