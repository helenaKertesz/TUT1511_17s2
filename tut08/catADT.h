// COMP1511 17s2 -- Complex ADT
// Do not change this file!

#ifndef COMPLEX_H_
#define COMPLEX_H_

// typedef a pointer since it's the same size
// Now the user doesn't know how thw cat is implemented
typedef struct _cat *Cat;

// Create a new 'Cat'
Cat newCat (char* name, int age, double weight);

// Release all resources associated with a 'Cat'
void destroyCat (Cat c);

// get the age of the 'Cat'
int getAge ( Cat c );

// get the name of the 'Cat'
char* getName ( Cat c );

// get the weight of the cat
double getWeight ( Cat c );

// Create a new cat from 2 existing cats
Cat getKitten( Cat a, Cat b);

#endif // !defined(COMPLEX_H_)
