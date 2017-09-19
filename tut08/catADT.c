// Implemented functions for the cat ADT


#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "catADT.h"

// Note that the struct is now in the .c file
typedef struct _cat {
    char* name;
    int age;
    double weight;
} cat;

// Create a new 'Cat'
Cat newCat (char* name, int age, double weight){
    Cat c = calloc(1,  sizeof(cat)); // NOTE THAT IT IS sizeof(cat) not sizeof(Cat)

    // Have to check if calloc worked!
    if( c == NULL ){
        fprintf (stderr, "couldn't allocate memory: %s", strerror (errno));
        exit (1);
    }

    c->name = name;
    c->age = age;
    c->weight = weight;
    return c;

}

// Release all resources associated with a 'Cat'
void destroyCat (Cat c){
    free(c);
}

// get the age of the 'Cat'
int getAge ( Cat c ){
    return c->age;
}

// get the name of the 'Cat'
char* getName ( Cat c ){
    return c->name;
}

double getWeight ( Cat c ){
    return c->weight;
}

// Create a new cat from 2 existing cats
Cat getKitten( Cat a, Cat b){
    double weight = (getWeight(a) + getWeight(b))/4.0;
    Cat kitten = newCat( "Kit", 0, weight );
    return kitten;
}
