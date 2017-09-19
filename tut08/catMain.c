
#include<stdlib.h>
#include<stdio.h>
#include "catADT.h"

int main(){

    Cat myCat1 = newCat( "Bubbles", 6, 8.76);
    Cat myCat2 = newCat( "Mittens", 7, 7.99);

    printf("%s is %d years old and %fkg\n", getName(myCat1), getAge(myCat1), 
        getWeight(myCat1));
    printf("%s is %d years old and %fkg\n", getName(myCat2), getAge(myCat2),
        getWeight(myCat2));



    Cat myCat3 = getKitten( myCat1, myCat2 );
    
    
    printf("The kitten, %s, is %d years old and %fkg\n", getName(myCat3), 
        getAge(myCat3), getWeight(myCat3));

    return EXIT_SUCCESS;
}
