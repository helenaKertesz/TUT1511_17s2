
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

// This function prints a linked list in the format
// 1 -> 2 -> 3 -> X
void listPrint (List l){
    Node curr = l->head;
    while( curr != NULL ){
        printf("%d->", curr->value );
        curr=curr->next;
    }
    printf("X\n");
}

// insert an element at the start of the list
void listInsertHead (List l, int val){
    Node newNode = calloc(1, sizeof(node));
    newNode->value = val;
    newNode->next = l->head;
    l->head = newNode;
}

// deletes an element from the tail of the list
void listDeleteTail( List l ){
    if( l->head != NULL){
        Node curr = l->head;

        // case of single element list
        if( l->head->next == NULL ){
            free( l->head );
            l->head = NULL;
        } else {

            while( curr->next->next != NULL ){
                curr = curr->next;
            }
            free(curr->next);
            curr->next = NULL;
        }

    }
}
