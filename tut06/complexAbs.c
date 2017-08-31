// Calculate the magnitude of a complex number
// By ... (z0000000)
// Written on 2017-0?-??
// Tutor (dayHH-lab)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _complex {
    double real;
    double imaginary;
} complex;

double complexAbsolute(complex c);

int main (int argc, char *argv[]) {

    complex c; // make an empty copmlex number

    printf("Enter the real part: ");
    scanf("%lf", &c.real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary);

    // get the absolute value
    double absoluteValue = complexAbsolute(c);

    // print the value
    printf("The absolute value is %.2lf.\n", absoluteValue);

    return EXIT_SUCCESS;
}

// this function returns the magnitude (absolute value)
// of a complex number
double complexAbsolute(complex c) {
    // abs = sqrt( img^2 + real^2);
    double abs = sqrt(c.imaginary*c.imaginary + c.real*c.real);
    // make sure you compile with -lm

    return abs; // CHANGE THIS TO YOUR RETURN VALUE
}
