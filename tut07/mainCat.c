// Main function for cats

#include<stdio.h>
#include<stdlib.h>

#include "cat.h"


int main(){

    cat myCat;
    myCat.name = "Kitkat";
    myCat.weight = 11.2;
    myCat.age = 7;

    printInfo(myCat);
    printf("Equivalent to %d human years\n", getHumanAge(myCat));

}
