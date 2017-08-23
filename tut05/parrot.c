// "parrot" back characters using getchar() and putchar()
// Helena Kertesz (z5059868)
// Tutorials: T15B & W09A
// Created on 2017-08-22

#include<stdio.h>
#include<stdlib.h>

int main(){

    char ch = getchar(); // use getchar() get get a charater TYPED IN FROM THE TERMINAL

    while( ch != EOF ){ // when reading in from the terminal or a file, EOF is the special charater that tells us when the input has ended
                        // don't getvt confused with the null terminator (which is the charater that shows the end of a string)
                        // use ctrl-d to give the EOF character when typing in the terminal
        // echo back
        putchar(ch); // same as printf("%d\n", ch);

        // upper case
        if( ch >= 'a' && ch <= 'z' ){ // checking the input was a lower case letter (can use mathematocal operator <= and >= becauase of ascii)
            printf("(%c)", ch - 32);  // can do maths with charaters due to ascii
        }

        ch = getchar();
    }

    return EXIT_SUCCESS;
}
