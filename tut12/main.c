
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(){

    // create a few empty lists
    List l1 = makeList();
    List l2 = makeList();

    listInsertTail(l1, 1);
    listInsertTail(l1, 2);
    listInsertTail(l1, 3);
    //listInsertTail(l1, 4);

    listInsertTail(l2, 9);
    listInsertTail(l2, 8);
    listInsertTail(l2, 7);

    printf("\noriginal lists:\n");
    printf("l1: ");
    listPrint( l1 );
    printf("l2: ");
    listPrint( l2 );

    List l3 = joinLists(l1, l2 );
    printf("\nl3 = joinLists(l1, l2):\n");
    printf("l1: ");
    listPrint( l1 );
    printf("l2: ");
    listPrint( l2 );
    printf("l3: ");
    listPrint( l3 );

    List l4 = zipLists(l1, l2 );
    printf("\nl4 = zipLists(l1, l2):\n");
    printf("l1: ");
    listPrint( l1 );
    printf("l2: ");
    listPrint( l2 );
    printf("l4: ");
    listPrint( l4 );

    List l5 = makeList();
    listInsertTail(l5, 5);
    listInsertTail(l5, 4);
    listInsertTail(l5, 3);
    listInsertTail(l5, 2);
    listInsertTail(l5, 1);

    printf("\nPRINTING FORWARDS THEN REVERSE\n");
    listPrint( l5 );
    listReversePrint( l5 );
    printf("\n");

    return EXIT_SUCCESS;
}
