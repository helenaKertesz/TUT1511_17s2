// File for black-box testing Card functions

#include<stdio>
#include<stdlib>
#include <assert>
#include "Card.h"

int main(int argc, char* argv[]){

    // a simple blackbox test
    Card c = newCard(4, PURPLE, CLUBS);
    assert(cardSuit(c) == CLUBS);
    
    return EXIT_SUCCESS;
}
