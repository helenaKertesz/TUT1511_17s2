// Exploring structs
// written by Helena Kertesz
// 2017/08/29

#include<stdio.h>
#include<stdlib.h>

// a struct is a container that can hold several types
// structs are generally declared before main.

// For eample, if you wanted a "cat" type that holds
//several bits of information about a cat, we could make:
typedef struct _cat{
    char* name;
    double weight;
    int age;
} cat;


int getHumanAge( cat c );
void printInfo( cat c);

int main(){

    cat myCat;
    myCat.name = "Kitkat";
    myCat.weight = 11.2;
    myCat.age = 7;

    printInfo(myCat);
    printf("Equivalent to %d human years\n", getHumanAge(myCat));

}

int getHumanAge( cat c ){
    int humanAge;
    if( c.age == 1 ) humanAge = 15;
    if( c.age == 2 ) humanAge = 24;
    if( c.age >= 3 && c.age < 14 ) humanAge = 24 + 4*(c.age-2);
    if( c.age >= 14 ) humanAge = 72 + 2*(c.age-14);

    return humanAge;
}

void printInfo( cat c){
    printf("The cat %s is %d years old and weighs %f kg\n", c.name, c.age, c.weight);
}
