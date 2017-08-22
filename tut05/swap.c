// Swap two numbers and in so doing explore passing variables to functions
// Helena Kertesz (z5059868)
// Tutorials: T15B & W09A
// Created on 2017-08-15


#include<stdio.h>
#include<stdlib.h>

void swap( int num1, int num2);

int main(){
    int a = 2;
    int b = 4;
    printf("%d - %d\n", a, b);
    printf("a at %p, b at %p\n", &a, &b);

    swap(a, b);

    printf("%d - %d\n", a, b);

    return EXIT_SUCCESS;
}

void swap( int num1, int num2 ){
    printf("num1 at %p, num2 at %p\n", &num1, &num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;

}
