#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int arr[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    int min = arr[0][0], max = arr[0][0]; 
    int x=0, y=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]<min) 
            {
                min=arr[i][j];
                x=i;
            }
            if (arr[i][j]>max)
            {
                max=arr[i][j];
                y=i;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        if (x==y) break;
        int temp=arr[x][i];
        arr[x][i]=arr[y][i];
        arr[y][i]=temp;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        printf ("%d ", arr[i][j]);
        printf ("%d\n", arr[i][n-1]);
    }
    return 0;
}
