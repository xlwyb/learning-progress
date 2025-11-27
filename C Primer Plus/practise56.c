#include <stdio.h>

int main()
{
    int num;
    scanf ("%d", &num);
    if (num<=0) return 0;
    if (num>=2) printf ("2 ");
    for (int i=3;i<=num;i+=2)
    {
        int flag=1;
        for (int j=3;j*j<=i;j+=2)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag) printf ("%d ",i);
    }
    printf ("\n");
    return 0;
}