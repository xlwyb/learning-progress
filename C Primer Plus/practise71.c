#include <stdio.h>
void differ(int n, double *arr);

int main()
{
    int n;
    scanf ("%d", &n);
    double arr[n];
    for (int i=0;i<n;i++) scanf ("%lf", &arr[i]);
    differ(n, arr);
    return 0;
}
void differ(int n, double *arr)
{
    double max=arr[0];
    double min=arr[0];
    for (int i=1;i<n;i++)
    {
        if (arr[i]>max) 
        {   
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf ("The differ is %lf\n",max-min);
    
}