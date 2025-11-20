#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) scanf ("%d", &arr[i]);
    for (int i=0;i<n-1;i++)
    {
        int min = i;
        for (int j=i+1;j<n;j++)
        if (arr[j]<arr[min]) min=j;
        int temp = arr[i];
        arr[i]= arr[min]; 
        arr[min]= temp;
    }
    int sum=1;
    int number[100];
    int result[100];
    int single=0;
    for (int i=0;i<n-1;i++)
    {
        if (arr[i+1]==arr[i])
        {
            sum++;
            continue;
        }
        number[single]=arr[i];
        result[single]=sum;
        single++;
        sum=1;
    }
    number[single]=arr[n-1];
    result[single]=sum;
    single++;
    for (int n=0;n<single;n++) printf ("%d %d\n",number[n],result[n]);
    return 0;
}
