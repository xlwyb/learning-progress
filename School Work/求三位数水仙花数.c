#include <stdio.h>
#include <math.h>

int main()
{
    int hundred, ten, single, i, sum;
    for (int n = 100; n<=999;n++)
    {
        hundred = n/100;
        i = n%100;
        ten = i/10;
        single = i%10;
        sum = pow(hundred,3) + pow(ten,3) +pow(single,3);
        if (sum==n) printf ("%d ",n);
    }
    return 0;
}
