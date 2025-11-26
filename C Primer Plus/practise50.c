#include <stdio.h>

int main()
{
    int num,sum1=0,count1=0,sum2=0,count2=0;
    while(scanf("%d",&num)!=EOF)
    {
        if (num==0) break;
        if (num%2==0) 
        {
            sum2 += num;
            count2++;
        }
        else 
            {
                sum1 += num;
                count1++;
            }
    }
    printf ("The oushu is %d and %.2f\n", count2, (float)sum2/count2);
    printf ("The jishu is %d and %.2f\n", count1, (float)sum1/count1);
    return 0;
}