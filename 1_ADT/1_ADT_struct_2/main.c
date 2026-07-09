#include "point.h"
#include <stdio.h>

int main(){
    Point p;
    p.x = 1.5;
    p.y = 3.0;
    printf("coordinate punto: (%.1f, %.1f)\n", p.x, p.y);
    Point p1 = {7, 5};
    printf("%.1f, %.1f", p1.x, p1.y);
    return 0;
}