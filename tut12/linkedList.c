
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


// Makes a new empty list
List makeList(){
    List newList = calloc(1, sizeof(struct _list) );
    newList->head = NULL;
    return newList;
}

// This function prints a linked list in the format
// 1 -> 2 -> 3 -> X
void listPrint (List l){
    Node curr = l->head;
    while( curr != NULL ){
        printf("%d -> ", curr->value );
        curr=curr->next;
    }
    printf("X\n");
}


// Recusive function to print out a linked list backwards
void nodeReversePrint( Node n ){
    if( n == NULL ){
        printf("X");
    } else {
        nodeReversePrint( n->next );
        printf(" <- %d", n->value);
    }
    
}

// This function prints the list in reverse
// X <- 3 <- 2 <- 1
void listReversePrint( List l ){
    nodeReversePrint( l->head );
}

// insert an element at the end of the list
void listInsertTail (List l, int val){
    Node newNode = calloc(1, sizeof(node));
    newNode->value = val;

    // empty list case
    if( l->head == NULL ){
        l->head = newNode;

    // all other cases
    } else {
        Node curr = l->head;
        // go to end
        while( curr->next != NULL ){
            curr = curr->next;
        }
        // inster new node
        curr->next = newNode;
    }
}

// appends the second list to the first
List joinLists( List first, List second ){

    
    /*
     * Version were original lists are edited
     *
     * Node curr = first->head;
    while( curr->next != NULL ){
        curr = curr->next;
    }
    curr->next = second->head;

    return first;*/
    
    List newList = makeList();
    
    Node curr = first->head;
    while( curr != NULL ){
        listInsertTail( newList, curr->value );
        curr = curr->next;
    }
    curr = second->head;
    while( curr != NULL ){
        listInsertTail( newList, curr->value );
        curr = curr->next;
    }
    
    return newList;
}

// zips the two lists together
// Assume they are the same size
List zipLists( List first, List second ){

    // how might I change this to make it work
    // if the lists are differnt lengths?

    List newList = makeList();

    Node curr1 = first->head;
    Node curr2 = second->head;

    while( curr1 != NULL && curr2 != NULL ){
        listInsertTail(newList, curr1->value);
        curr1 = curr1->next;
        listInsertTail(newList, curr2->value);
        curr2 = curr2->next;
    }
    return newList;
}
