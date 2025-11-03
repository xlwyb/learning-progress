#include <stdio.h>

int main()
{
    int n, sum=0, x=2;
    scanf ("%d", &n);
    while (n/x!=1)
    {
        if (n%x==0)
        {sum=sum+x;
         x++;}
        else
        x++;
    }
    printf ("%d",sum);
    return 0;
}
//输入999，会得到520