#include <stdio.h>
#include "sort.h"
#include "sort.c"
#include "linkedlist.h"
#include "linkedlist.c"
#include "operationtest.h"
#include "operationtest.c"



int main() {
    int i;
    LinkedListPtr newList = CreateLinkedList();

    for(i = 0; i <= 50; i++){
        InsertLinkedList(newList, rand() % 100 + 1);
    }
    
    printf("%s", "Here is the unsorted list\n");
    PrintLinkedList(newList);

    Sort(newList);
    printf("%s", "Here is the sorted list\n");
    PrintLinkedList(newList);

}
