// Header file for linked lists stuff
// DO NOT CHANGE THIS FILE

// header guard
#ifndef LIST_H_
#define LIST_H_

#define FALSE 0
#define TRUE (!FALSE)

// Node and list structures
// DO NOT CHANGE THIS
typedef struct _node* Node;
typedef struct _list* List;

typedef struct _list {
    Node head;
} list;

typedef struct _node {
    int value;
    Node next;
} node;


// Makes a new empty list
List makeList();

// This function prints a linked list in the format
// 1 -> 2 -> 3 -> X
void listPrint (List l);

// This function prints the list in reverse
// X <- 3 <- 2 <- 1
void listReversePrint( List l );

// insert an element at the end of the list
void listInsertTail (List l, int val);

// joins two lists
List joinLists( List first, List second );

// zips the two lists together
List zipLists( List first, List second );

#endif // !defined(LIST_H_)
