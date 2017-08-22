// print a rectangle of *'s using while loops
// Helena Kertesz (z5059868)
// Tutorials: T15B & W09A
// Created on 2017-08-15

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;

    printf("What size? ");
    scanf("%d", &size);

    // using nested while loops to print a rectangle
    int row = 0;

    // runs the inner while loop multiple times
    while( row < size ){
        int i = 0;

        // prints one row
        while (i <= row) {
            printf("*");
            i++;
        }

        printf("\n"); // new line between each row

        row++;
    }

    return EXIT_SUCCESS;
}
