#include <stdlib.h>
#include <math.h>
#include "punto.h"

struct punto{
    float x;
    float y;
};

Punto creaPunto(float x, float y){
    Punto p = (Punto)malloc(sizeof(struct punto));

    if(p!=NULL){
        p->x = x;
        p->y = y;
    }

    return p;
}

float ascissa(Punto p){
    return p->x;
}

float ordinata(Punto p){
    return p->y;
}

float distanza(Punto p1, Punto p2){
    float diff_x = p1->x - p2->x;
    float diff_y = p1->y - p2->y;
    return sqrt((diff_x * diff_x) + (diff_y * diff_y));
}