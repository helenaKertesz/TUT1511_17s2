// Takes in a number 0-6 and print if it is a weekend
// Helena Kertesz (z5059868)
// Tutor: Peter Kerr (T15B)
// Created 31/07/2017

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){

    // using scanf
    int weekNum;
    scanf("%d", weekNum);

    //style for if ... else if ... else
    if( weekNum > 0 && weekNum < 5 ){
        print("%d is not a weekend,\n");
    } else {
        print("%d is a weekend,\n");
    }

}
