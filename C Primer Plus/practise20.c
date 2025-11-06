#include <stdio.h>
#include <float.h>

int main()
{
    double x = 1.0/3.0;
    float y = 1.0/3.0;
    printf ("%.6lf %.6f\n", x, y);
    printf ("%.12lf %.12f\n", x, y);
    printf ("%.16f %.16f\n",x ,y);
    printf ("%d\n", FLT_DIG);
    printf ("%d\n", DBL_DIG);
    return 0;
}