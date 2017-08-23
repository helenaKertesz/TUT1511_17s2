// Swap two numbers and in so doing explore passing variables to functions
// Helena Kertesz (z5059868)
// Tutorials: T15B & W09A
// Created on 2017-08-15


#include<stdio.h>
#include<stdlib.h>

void swap( int* num1, int* num2);

int main(){
    int a = 2;
    int b = 4;
    printf("%d - %d\n", a, b);

    swap(&a, &b);

    printf("%d - %d\n", a, b);

    return EXIT_SUCCESS;
}


// instead of passing this function copies of the ints i main, we pass pointers to the original variables
void swap( int* num1, int* num2 ){
    // we use * to get and set the value pointed to by num1 and num2
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}
