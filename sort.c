#include <stdio.h>

#include "linkedlist.h"


void Swap(LinkedListNodePtr a, LinkedListNodePtr b){
    int tmp;
    tmp = a->data;
    a->data = b->data;
    b->data = tmp;
}

void Sort(LinkedListPtr list) {
    int i, swapped;
    LinkedListNodePtr p1;

    if(list->head == NULL){
        return;
    }
    do{
        swapped = 0;
        p1 = list->head;
        while(p1->next != NULL){
            if(p1->data > p1->next->data){
                Swap(p1, p1->next);
                swapped = 1;
            }
            p1 = p1->next;
        }
    } while(swapped != 0);
}

