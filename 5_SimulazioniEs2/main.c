#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "btree.h"
#include "list.h"
#include "item.h"

int get_height(BTree bt){
    if(isEmptyTree(bt)) return 0;
    int left_h = get_height(getLeft(bt));
    int right_h = get_height(getRight(bt));
    return (left_h>right_h ? left_h : right_h)+1;
}

int get_nodes(BTree bt){
    if(isEmptyTree(bt)) return 0;
    return 1 + get_nodes(getLeft(bt)) + get_nodes(getRight(bt));
}

int *heightAndNumNodes(BTree t){
    int *risultato = malloc(2*sizeof(int));
    if(risultato==NULL) return NULL;

    risultato[0] = get_height(t);
    risultato[1] = get_nodes(t);

    return risultato;
}

void preorder(BTree bt){
    if(isEmptyTree(bt)) return;
    List stack = newList();
    addHead(stack, (Item)bt);

    while(!isEmpty(stack)){
        BTree current = (BTree)removeHead(stack);
        Item val = getBTreeRoot(current);
        outputItem(val);

        BTree right = getRight(current);
        if(!isEmptyTree(right)){
            addHead(stack, (Item)right);
        }

        BTree left = getLeft(current);
        if(!isEmptyTree(left)){
            addHead(stack, (Item)left);
        }
    }
}

void printHeightNumNodesPreorder(BTree bt){
    printf("Albero:\n");
    printTree(bt);

    int *hn = heightAndNumNodes(bt);
    if(hn){
        printf("Altezza albero: %d\nNumero nodi: %d\n", hn[0], hn[1]);
        free(hn);
    }
    printf("Visita preorder iterativa: ");
    preorder(bt);
    printf("\n");
}

int main(){
    srand(time(NULL));
    BTree randTree = newRandomTree(4);
    int *item1 = malloc(sizeof(int));
    int *item5 = malloc(sizeof(int));
    int *item3 = malloc(sizeof(int));
    int *item9 = malloc(sizeof(int));
    int *item7 = malloc(sizeof(int));

    *item1 = 1;
    *item5 = 5;
    *item3 = 3;
    *item9 = 9;
    *item7 = 7;

    BTree t1 = buildTree(NULL, NULL, item1);
    BTree t5 = buildTree(NULL, NULL, item5);
    BTree t3 = buildTree(NULL, NULL, item3);
    BTree t9 = buildTree(t1, t5, item9);
    BTree t7 = buildTree(t3, t9, item7);

    printf("test albero manuale\n");
    printHeightNumNodesPreorder(t7);
    printf("test albero casuale\n");
    printHeightNumNodesPreorder(randTree);

    return 0;
}