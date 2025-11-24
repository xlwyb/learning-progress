#include <stdio.h>

int main()
{
    int min, max;
    int sum=0;
    printf ("Enter lower and upper integer limits: ");
    while (scanf("%d%d", &min, &max)&&min<max)
    {
        for (int i=min;i<=max;i++)
        {
            sum += i*i;
        }
        printf ("The sum of the squares from %d to %d is %d\n", min*min, max*max, sum);
        sum=0;
        printf ("Enter next set of limits: ");
    }
    return 0;
}