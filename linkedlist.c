#include <stdio.h>
#include "linkedlist.h"

LinkedListPtr CreateLinkedList(){
    LinkedListPtr list = (LinkedListPtr)malloc(sizeof(LinkedList));
    list->head = NULL;
    return list;
};

void DestroyLinkedList(LinkedListPtr list){
   LinkedListNodePtr temp;
   while(list->head != NULL){
       temp = list->head;
       list->head = list->head->next;

       free(temp);
   }
};

int NumElementsInLinkedList(LinkedListPtr list){
    return list->num_elements;
}; 

void InsertLinkedList(LinkedListPtr list, int new_value){
    LinkedListNodePtr newNode;
    newNode = (LinkedListNodePtr)malloc(sizeof(LinkedListNode));

    if(list->head == NULL){
        list->tail = newNode;
    }
    newNode->data = new_value;
    newNode->next = list->head;
    list->head = newNode;
    list->num_elements = list->num_elements + 1;
};
 
void AppendLinkedList(LinkedListPtr list, int new_value){
    LinkedListNodePtr newNode, tmp;
    newNode = (LinkedListNodePtr)malloc(sizeof(LinkedListNode));

    newNode->data = new_value;
    if(list->head == NULL){
        list->head = newNode;
        list->tail = newNode;
    }

    list->tail->next = newNode;
    list->tail = newNode;
    list->num_elements = list->num_elements + 1;
};

void PrintLinkedList(LinkedListPtr list){
    LinkedListNodePtr tmp;
    tmp = list->head;
    while(tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
};

LinkedListNodePtr CreateLinkedListNode(int data){
    LinkedListNodePtr newNode;
    newNode = (LinkedListNodePtr)malloc(sizeof(LinkedListNode));
    return newNode;
};

void DestroyLinkedListNode(LinkedListNodePtr node){
    free(node);
};

int RemoveLLElem(LinkedListPtr list, LinkedListNodePtr ptr){
    LinkedListNodePtr tmp;
    tmp = list->head;

    while(tmp->next != NULL){
        if(tmp->next->data == ptr->data){
            tmp->next = ptr->next;
            ptr->next = NULL;
            return 0;
            }
        tmp = tmp->next;
    }
    list->num_elements = list->num_elements - 1;
    return 0;
    
};