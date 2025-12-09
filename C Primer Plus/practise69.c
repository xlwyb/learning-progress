#include <stdio.h>
void f_max(int n, int *arr);

int main()
{
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) scanf ("%d", &arr[i]);
    f_max(n, arr);
    return 0;
}
void f_max(int n, int *arr)
{
    int max=arr[0];
    for (int i=1;i<n;i++)
    {
        if (arr[i]>max) max=arr[i];
    }
    printf ("The max is %d\n", max);
}