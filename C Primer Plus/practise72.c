#include <stdio.h>

void turn(int n, double *arr);
int main()
{
    int n;
    scanf ("%d",&n);
    double arr[n];
    for (int i=0;i<n;i++) scanf ("%lf", &arr[i]);
    turn(n,arr);
    for (int i=0;i<n;i++) printf ("%lf ", arr[i]);
    printf ("\n");
    return 0;
}
void turn(int n, double *arr)
{
    for(int i=0;i<n/2;i++)
    {
        double temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}