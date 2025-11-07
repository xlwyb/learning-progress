#include <stdio.h>

int main()
{
    int m, n;
    scanf ("%d%d", &m, &n);
    int sum = 0;
    int gs =0;
    for (int i=m;i<=n;i++)
    {
        if (i==2)
        {
            sum += 2;
            gs += 1;
        }
        for (int x=2;x<i;x++)
        {
            if (i%x==0) break;
        	if (x==i-1)
            {
                gs += 1;
                sum += i; 
            }	  
        }
    }
    printf ("%d %d", gs, sum);
    return 0;
}
