/*
 * Given a index n, prints out the nth triangle number
 */

#include <stdlib.h>
#include <stdio.h>


// this function returns the nth triangle number
// the triangle numbers are : {0, 1, 3, 6, 10 .. }
// where:
// tri(0) = 0
// tri(n) = n + tri(n-1)
int tri( int n );

int main(){

    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n );

    printf("the %dth triangle number is %d\n", n, tri(n));


    return EXIT_SUCCESS;
}

int tri( int n ){
    int result = 0;
   
    // base case
    if( n == 0 ){
        result = 0;

    // recursive case
    } else {
        result = n + tri(n - 1);
    }
    
    return result;
}












