// Exploring structs
// written by Helena Kertesz
// 2017/08/29

#include<stdio.h>
#include<stdlib.h>

// a struct is a container that can hold several types
// structs are generally declared before main.

// For eample, if you wanted a "cat" type that holds
//several bits of information about a cat, we could make:
struct _cat{
    char* name;
    double weight;
    int age;
};

// The "type" of the struct above is "struct _cat"
// to make it neater to refer to the struct we use a typedef:
typedef struct _cat cat;

// the typedef and the struct declaration can be done at the same time:
// The underscore in the struct name before it gets typedefed is just convention
typedef struct _dog{
    char* name;
    char* breed;
    double weight;
    int age;
} dog;

int main(){
    // if we did not have the typedef we would have to 
    //do this
    struct _cat cat1;   

    // using the typedef we can just refer to the
    //struct as "cat"
    cat cat2;

    // access individual elements in the struct using
    // <variable name>.<element name>
    cat1.name = "Reginald";
    cat1.weight = 5.8;
    cat1.age = 7;

    cat2.name = "Mittens";
    cat2.weight = 4.6;
    cat2.age = 2;

    printf("%s is %2.2fkg and %d years old\n", 
        cat1.name, cat1.weight, cat1.age);
    printf("%s is %2.2fkg and %d years old\n",
        cat2.name, cat2.weight, cat2.age);

    // we can do the same thing with our dog struct
    dog dog1;
    dog1.name = "Spot";
    dog1.breed = "Dalmatian";
    dog1.weight = 12.3;
    dog1.age = 12;
    printf("%s is a %s and is %2.2fkg and %d years old\n",
        dog1.name, dog1.breed, dog1.weight, dog1.age);

}
