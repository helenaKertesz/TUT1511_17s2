
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(){

    // create a new empty list
    List l = calloc(1, sizeof(struct _list) );

    // add some elements
    printf("\n--ADDING 1 at head--\n");
    listInsertHead(l,1);
    listPrint(l);

    printf("\n--ADDING 2 at head--\n");
    listInsertHead(l,2);
    listPrint(l);

    printf("\n--ADDING 3 at head--\n");
    listInsertHead(l,3);
    listPrint(l);

    printf("\n --DELETING FROM TAIL--\n");
    listDeleteTail(l);
    listPrint(l);

    printf("\n --DELETING FROM TAIL--\n");
    listDeleteTail(l);
    listPrint(l);

    printf("\n --DELETING FROM TAIL--\n");
    listDeleteTail(l);
    listPrint(l);

    return EXIT_SUCCESS;
}
