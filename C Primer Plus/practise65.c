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
    int temp=1;
    if ((a==0&&b==0)||(b==0)) temp=1;
    else for (int i=1;i<=b;i++) temp *= a; 
    return temp;
}
