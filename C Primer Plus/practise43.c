#include <stdio.h>

int main()
{
    int count=0;
    int arr[8];
    for (int i=0;i<8;i++) arr[i]= 1<<(i+1);
    do
    {
        printf ("%d ", arr[count]);
        count++;
    } while (count<7);
    printf ("%d\n", arr[7]);
    return 0;
}