#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

struct list {
    int size;
    struct node *head;
};

struct node {
    Item item;
    struct node *next;
};

List newList() {
    List list = malloc(sizeof(struct list));
    list->size = 0;
    list->head = NULL;
    return list;
}

int isEmpty(List list) {
    return (list->size == 0);
}

void addHead(List list, Item item) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->item = item;
    new_node->next = list->head;
    list->head = new_node;
    ++(list->size);
}

Item removeHead(List list) {
    if (isEmpty(list)) return NULL;
    
    struct node *temp_node = list->head;
    list->head = temp_node->next;
    Item item = temp_node->item;
    free(temp_node);
    --(list->size);
    return item;
}

Item getHead(List list) {
    if (isEmpty(list)) return NULL;
    return list->head->item;
}

int sizeList(List list) {
    return list->size;
}

int addListTail(List list, Item item) {
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL) return 0;
    
    new_node->item = item;
    new_node->next = NULL;

    if (isEmpty(list)) {
        list->head = new_node;
    } else {
        struct node *curr = list->head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = new_node;
    }
    
    (list->size)++;
    return 1;
}