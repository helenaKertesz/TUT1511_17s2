// playing with pointers

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num = 10;
    int* point = &num;
    // &num gives us the adress of num. We want to store this in a variable.
    // The variable type is int* ( a pointer to an int)

    printf("point is %p\n", point);
    printf("*point is %d\n", *point); // the * opperator can also be used on a variable to de-reference it (find the "value at" it).

    return EXIT_SUCCESS;
}
