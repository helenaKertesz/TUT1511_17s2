// Sorts 3 given numbers and prints them in ascending order
// Conrad Martin (z5113993) and Rui Tong (z5114578)
// Tutor: Helena Kertesz (T15B)
// Created on 2017-08-08

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //Reads in 3 numbers
    int n1, n2, n3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    //Determines the lowest number and prints it out
    if (n1 <= n2 && n1 <= n3) {
        printf("%d\n", n1);
    } else if (n2 <= n1 && n2 <= n3) {
        printf("%d\n", n2);
    } else {
        printf("%d\n", n3);
    }

    //Determines the middle number and prints it out
    if ((n1 <= n2 && n1 >= n3)||(n1 >= n2 && n1 <= n3)) {
        printf("%d\n", n1);
    } else if ((n2 <= n1 && n2 >= n3) ||(n2 >= n1 && n2 <= n3)) {
        printf("%d\n", n2);
    } else {
        printf("%d\n", n3);
    }

    //Determines the highest number and prints it out
    if (n1 >= n2 && n1 >= n3) {
        printf("%d\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("%d\n", n2);
    } else {
        printf("%d\n", n3);
    }

    return EXIT_SUCCESS;
}
