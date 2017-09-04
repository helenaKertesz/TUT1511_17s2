// This program is BROKEN
// There are several issues that the compiler will not catch - can you find them?

#include<stdio.h>
#include<stdlib.h>

int main(){

    int in = 0;
    printf("What number:");
    scanf("%d", &in);

    if( in = 0 ){
        printf("number is ZERO\n");
    } else if( in = -1 ){
        printf("number is NEGATIVE ONE\n");
    } else if( in = 1 ){
        printf("number is ONE\n");
    } else {
        printf("none of the above\n");
    }
}
