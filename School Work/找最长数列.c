#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) scanf ("%d", &arr[i]);
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int sum=1;
    int single=0;
    int result[100];
    for (int i=0;i<n-1;i++)
    {
        if (arr[i+1]==arr[i]+1) 
        {
            sum++;
            continue;
        }
        result[single] = sum;
        single++;
        sum = 1;  
    }
    result[single] =sum;
    single++;
    int max=result[0];
    for (int k=1;k<single;k++)
    {
        if (result[k]>max) max=result[k];
    }  
    printf ("%d",max);
    return 0;
}
