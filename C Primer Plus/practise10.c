#include <stdio.h>

int main()
{
    float x;
    printf ("Enter a floating-point value: ");
    scanf ("%f", &x);
    printf ("%f\n", x);
    printf ("fixed-point notation: %f\n", x);
    printf ("exponential notation: %e\n", x);
    printf ("p potation: %a\n", x);
    return 0;
}