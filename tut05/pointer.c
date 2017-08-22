// playing with pointers

#include<stdio.h>
#include<stdlib.h>

int main(){

    int c = 10;
    int* point = &c;

    printf("point is %p\n", point);
    printf("*point is %d\n", *point);

    //printf("*c is ???", *c);

    /*
     * STRING MAGIC (do once we've gone over arrays
    char * word = "cats"; //string litteral - is stored elsewhere and the pointer to it put into word
    printf("word is %p\n", word);
    printf("*word is %c\n", *word);
    printf("word is %s\n", word);
    */

    return EXIT_SUCCESS;
}
