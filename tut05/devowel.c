// Devowel a string
// Helena Kertesz (z5059868)
// Tutorials: T15B & W09A
// Created on 2017-08-22

#include<stdio.h>
#include<stdlib.h>

void devowel(char *string);

int main(){

    char * word = "elephant"; // char * word and char word[] are equivalent
    devowel(word);

    return EXIT_SUCCESS;
}


void devowel(char *string){ // the variable string is a pointer to the string (array if charaters) we are given to devowel.

    // get the first character
    int i = 0;
    char ch = string[i];

    // loop until we see the null terminator
    while( ch != '\0'){
        if( ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' ){ // chech it's not a vowel
            putchar(ch);
        }

        // get the next charater;
        i++;
        ch = string[i];
    }

    putchar('\n');
}
