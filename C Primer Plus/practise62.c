#include <stdio.h>
double turn(double, double);

int main()
{
    double a, b;
    scanf ("%lf%lf", &a, &b);
    printf ("The tuning average is %lf\n", turn(a,b));
    return 0;
}
double turn(double a, double b)
{
    a = 1/a;
    b = 1/b;
    double result = a+b;
    result = 1/result;
    return result;
}