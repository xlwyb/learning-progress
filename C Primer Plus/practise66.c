#include <stdio.h>

int power(int a, int b);
int main()
{
    int a, b;
    scanf ("%d%d", &a, &b);
    printf ("The result is %d", power(a, b));
    return 0;
}
int power(int a, int b)
{
    if ((a==0&&b==0)||(b==0)) return 1;
    else return a*power(a,b-1);
}
