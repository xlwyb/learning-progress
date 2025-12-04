#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) scanf ("%d", &arr[i]);
    for (int i=0;i<n-1;i++)
    {
        int min=arr[i];
        int position=i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<min)
            {
                min=arr[j];
                position=j;
            }
        }
        arr[position]=arr[i];
        arr[i]=min;
    }
    for (int i=0;i<n;i++) printf("%d ", arr[i]);
    printf ("\n");
    return 0;
}