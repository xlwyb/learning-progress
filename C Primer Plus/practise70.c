#include <stdio.h>
void f_max(int n, double *arr);

int main()
{
    int n;
    scanf ("%d", &n);
    double arr[n];
    for (int i=0;i<n;i++) scanf ("%lf", &arr[i]);
    f_max(n, arr);
    return 0;
}
void f_max(int n, double *arr)
{
    double max=arr[0];
    int pos=0;
    for (int i=1;i<n;i++)
    {
        if (arr[i]>max) 
        {   
            max=arr[i];
            pos=i;
        }
    }
    printf ("The max pos is %d\n", pos);
}