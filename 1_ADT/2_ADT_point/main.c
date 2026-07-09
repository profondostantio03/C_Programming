#include <stdio.h>
#include <stdlib.h>
#include "punto.h"

int main(){
    Punto p1 = creaPunto(3.0, 6.0);
    Punto p2 = creaPunto(1.5, 3.0);

    printf("Punto 1: (%.2f, %.2f)\n", ascissa(p1), ordinata(p1));
    printf("Punto 2: (%.2f, %.2f)\n", ascissa(p2), ordinata(p2));

    float d = distanza(p1, p2);
    printf("La distanza e': %.2f\n", d);
}