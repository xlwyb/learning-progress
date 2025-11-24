#include <stdio.h>

int main()
{
    int arr[8];
    for (int i=0;i<8;i++) scanf ("%d", &arr[i]);
    for (int i=0;i<4;i++) 
    {   
        int temp = arr[i];
        arr[i]=arr[7-i];
        arr[7-i]=temp;
    }
    for (int i=0;i<7;i++) printf ("%d ",arr[i]);
    printf ("%d\n",arr[7]);
    return 0;
}