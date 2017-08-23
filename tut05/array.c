// Expore creating arrays and strings
// Helena Kertesz (z5059868)
// Tutorials: T15B & W09A
// Created on 2017-08-22

#include<stdio.h>
#include<stdlib.h>

#define ARRAY_SIZE 3

void setArrayValues(int length, int array[], int value);

int main(){

    /******** ARRAYS *********/

    // Make an array
    int a[ARRAY_SIZE] = {1, 2, 3};

    // a is the variable name. When declaring arrays, it goes <type to be kept in array> <name of array>[<size of array>]
    // The addition of those square brackets it what makes it an array

    printf("%d\n", a[1]);
    printf("%d\n", a[ARRAY_SIZE]); // WATCH OUT: because we start counting at 0 (ie a[0] is the first element), a[size] is actually one PAST the last element in the array - out of bounds!


    // looping through an array
    int i = 0;
    while( i < ARRAY_SIZE ){        // counting through the elemnts in the array using size
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    /******** STRINGS ********/
    // A string is an array of characters
    // There are a couple of special things about strings
    //  - They can be declared using string litterals
    //  - They have a special charater that marks the end (the null terminator '\0')

    char * word = "cats"; //string litteral (anything surrouned by "")- this is converted into an array and the '\0' automaticaly added
    char animal[5] = {'c', 'a', 't' , 's', '\0'}; // This is exactly the same as the declaration above (except the variable name)


    // note that char * a is the same as char a[]. In both cases a is a pointer to a character
    // although in the second case it's sliihtly easier to see that it's actually the pointer to the first character
    // in an array of characters (which we call a string)

    printf("word is %p\n", word);       // arrays are stored by keeping a pointer to the first element of the array
    printf("*word is %c\n", *word);     // We can de-refference a pointer to get the value that it points at using the * opperator
    printf("word[0] is %c\n", word[0]); // for arrays we can ask for a special element in the array.
    printf("word is %s\n", word);       // %s is a special format to print out a string



    // looping through a string (since it has the special end character)
    i = 0;
    char ch = animal[i];

    while( ch != '\0'){ // since we don't know the size of the string, we check when to stop printing out by looking for the null terminator
        putchar(ch); // this is the same as printf("%c", ch);
        i++;
        ch = animal[i];
    }



    return EXIT_SUCCESS;
}
