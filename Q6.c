
#include <stdio.h>

int main() {
    float x1 = 5, y1 = 4, x2 = 3, y2 = 2,slope;

    slope = (y2 - y1) / (x2 - x1);

    printf("The slope of the line between the points (5,4) and (3,2) is %.3f\n", slope);

    return 0;
}