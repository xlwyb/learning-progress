#include <stdio.h>

int main()
{
    int n, x, An, An1=0, An2=0, An3=1, sum;
    scanf ("%d", &n);
    if (n==1)
    {
        sum = An1;
        printf ("%d", sum);
    }
    if (n==2)
    {
        sum = An1 + An2;
        printf ("%d", sum);
    }
    if (n==3)
    {
        sum = An1 + An2 + An3;
        printf ("%d", sum);
    }
    if (n>3)
    {
        sum = An1 + An2 + An3;
        x = 4;
        while (x<=n)
        {
            An = An1 + An2 + An3;
            sum =  sum + An;
            An1 = An2;
            An2 = An3;
            An3 = An;
            x++;
        }
        printf ("%d",sum);
    }
    return 0;

}
