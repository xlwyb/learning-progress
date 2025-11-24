#include <stdio.h>

int main()
{
    double arr[8], result[8];
    scanf ("%lf",&arr[0]);
    result[0]=arr[0];
    for (int i=1;i<8;i++) 
    {   
        scanf ("%lf", &arr[i]);
        result[i]=result[i-1]+arr[i];
    }
    for (int i=0;i<8;i++) printf("%5.2lf ",arr[i]);
    printf ("\n");
    for (int i=0;i<8;i++) printf ("%5.2lf ",result[i]);
    printf ("\n");
    return 0;
}