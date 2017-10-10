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

// This function prints a linked list in the format
// 1 -> 2 -> 3 -> X
void listPrint (List l);

// insert an element at the start of the list
void listInsertHead (List l, int val);

// insert an element at the end of the list
void listInsertTail (List l, int val);

// delete an element at the start of the list
void listDeleteHead (List l);

// delete an element at the end of the list
void listDeleteTail (List l);

#endif // !defined(LIST_H_)
