#include "point.h"
#include <stdio.h>

int main(){
    struct point p; //Variabile di tipo struttura
    p.x= 2.0; //Per accedere ai campi si usa la “dot sintax”
    p.y= 3.0;
    printf("coordinate del punto: (%.1f, %.1f)", p.x, p.y);
    struct point p1 = {2.0, 3.0}; //Inizializzazione della struttura
    return 0;
}