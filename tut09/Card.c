#include <stdio.h>
#include <stdlib.h>
#include <stderr.h>
#include "Card.h"

typedef struct _card{
    char number;
    color color;
    suit suit;
} card;

Card newCard(char number, color color, suit suit) {
    Card cs = calloc(1, sizeof(card));
    
    if (cs == NULL) {
        fprintf(stderr, "Couldn't allocate memory for card\n"); 
        exit(EXIT_FAILURE);
    }
    
    cs->number = number;
    cs->color = color;
    cs->suit = suit;
    
    return cs;
}

suit cardSuit(Card card) {
    if (card == NULL) {
        fprintf(stderr, "Invalid pointer\n");
        exit(EXIT_FAILURE);
    }

    return card->suit;
}

// A white box test
void testCard() {
    Card c = newCard(4, PURPLE, CLUBS);
    assert(c->color == PURPLE);
}
