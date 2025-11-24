#include <stdio.h>
float culculate(float a, float b);
int main()
{
    float m, n;
    printf ("enter the number: (enter q to quit)\n");
    while (scanf ("%f%f", &m, &n)==2)
    {
        float result = culculate(m,n);
        printf ("%f", result);
    }
    return 0;
}
float culculate(float a, float b)
{
    float temp = (a-b)/(a*b);
    return temp;
}