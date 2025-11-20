#include <stdio.h>

int main()
{
    int num;
    scanf ("%d", &num);
    int arr[num];
    for (int i=0;i<=num-1;i++) scanf ("%d", &arr[i]);
    int result;
    scanf ("%d", &result);
    for (int i=0;i<=num;i++)
    {
        if (result==arr[i]) 
        {
            printf ("%d", i);
            break;
        }
        if (i==num) printf ("Not Found");
    }
    return 0;
}
