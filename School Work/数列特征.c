#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0;i<=n-1;i++) scanf ("%d", &arr[i]);
    int max=arr[0];
    for (int i=0;i<=n;i++)
    {
        if (i==n) printf ("%d\n",max);
        if (arr[i]>max) max = arr[i];
    }
    int min=arr[0];
    for (int i=0;i<=n;i++)
    {
        if (i==n) printf ("%d\n",min);
        if (arr[i]<min) min = arr[i];
    }
    int sum = 0;
    for (int i=0;i<n;i++) sum += arr[i];
    printf ("%d", sum);
    return 0;
}
