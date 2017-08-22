// Takes in a number 0-6 and print if it is a weekend
// Helena Kertesz (z5059868)
// Tutor: Cadel Watson (W09A)
// Created 02/08/2017

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){

    // using scanf
    int weekDay = 0;
    scanf("%d", &weekDay);

    //style for if ... else if ... else
    if (weekDay < 0 || weekDay > 6) {           // check the value given is in the right range
        printf("Invalid\n");
    } else if (weekDay == 0 || weekDay == 6) { // check for weekend
        printf("%d is a weekend.\n", weekDay);
    } else {
        printf("%d is not a weekend.\n", weekDay);
    }

    return EXIT_SUCCESS;
}
