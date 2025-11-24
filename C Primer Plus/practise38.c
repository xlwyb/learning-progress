#include <stdio.h>

int main()
{
    float m, n;
    printf ("enter the number: (enter q to quit)\n");
    while (scanf ("%f%f", &m, &n)==2)
    printf ("%f", (m-n)/(m*n));
    return 0;
}