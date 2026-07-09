#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

int main() {
    // Creo la lista
    List mia_lista = newList();

    // Alloco i numeri dinamicamente come vuole il prof
    int *n1 = malloc(sizeof(int)); *n1 = 10;
    int *n2 = malloc(sizeof(int)); *n2 = 20;
    int *n3 = malloc(sizeof(int)); *n3 = 30;

    // Testo gli inserimenti (dovrebbe creare la sequenza: 20, 10, 30)
    addHead(mia_lista, n1);       // Lista: 10
    addHead(mia_lista, n2);       // Lista: 20, 10
    addListTail(mia_lista, n3);   // Lista: 20, 10, 30

    printf("Grandezza della lista: %d\n", sizeList(mia_lista));
    printf("Elementi estratti: ");

    // Svuoto la lista e stampo gli elementi usando le funzioni del prof
    while (!isEmpty(mia_lista)) {
        Item estratto = removeHead(mia_lista);
        outputItem(estratto); 
        free(estratto); // Pulizia della memoria!
    }
    printf("\n");

    return 0;
}