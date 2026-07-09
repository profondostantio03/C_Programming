#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

#define MAX_SIZE 100

// Il guscio del prof, ma dentro c'è un array fisso invece dei nodi!
struct list {
    int size;
    Item elements[MAX_SIZE];
};

List newList() {
    List list = malloc(sizeof(struct list));
    list->size = 0;
    return list;
}

int isEmpty(List list) {
    return (list->size == 0);
}

void addHead(List list, Item item) {
    if (list->size == MAX_SIZE) return;
    
    // Sposto tutti a destra di 1 per fare spazio
    for (int i = list->size; i > 0; i--) {
        list->elements[i] = list->elements[i - 1];
    }
    list->elements[0] = item;
    ++(list->size);
}

Item removeHead(List list) {
    if (isEmpty(list)) return NULL;
    
    Item item = list->elements[0];
    
    // Sposto tutti a sinistra di 1 per coprire il buco
    for (int i = 0; i < list->size - 1; i++) {
        list->elements[i] = list->elements[i + 1];
    }
    --(list->size);
    return item;
}

Item getHead(List list) {
    if (isEmpty(list)) return NULL;
    return list->elements[0];
}

int sizeList(List list) {
    return list->size;
}

int addListTail(List list, Item item) {
    if (list->size == MAX_SIZE) return 0;
    
    // Nessun ciclo! Inserisco direttamente alla fine
    list->elements[list->size] = item;
    ++(list->size);
    return 1;
}