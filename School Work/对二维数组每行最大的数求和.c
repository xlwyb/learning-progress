#include <stdio.h>

int main()
{
    int arr[3][4];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            scanf ("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (int i=0;i<3;i++)
    {
        int num=arr[i][0];
        for (int j=1;j<4;j++)
        {
            if (arr[i][j]>num) num=arr[i][j];
        }
        sum += num;
    }
    printf ("%d", sum);
    return 0;
}
