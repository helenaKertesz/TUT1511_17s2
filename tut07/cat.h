#ifndef CAT_H
#define CAT_H

// The struct
typedef struct _cat{
    char* name;
    double weight;
    int age;
} cat;


// functions to interact with the struct
int getHumanAge( cat c );
void printInfo( cat c);


#endif
