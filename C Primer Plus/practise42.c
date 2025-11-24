#include <stdio.h>

int main()
{
    int n;
    float sum1=0.0, sum2=0.0, k=1.0;
    while(scanf("%d",&n)&&n>=1)
    {
        for (int i=0;i<n;i++)
        sum1 += k/(i+1.0);
        for (int i=0;i<n;i++)
        {
            sum2 += k/(i+1.0);
            k=-k;
        }
        k=1.0;
        printf ("%f %f",sum1 ,sum2);
        sum1=0.0;
        sum2=0.0;
    }
    return 0;
}