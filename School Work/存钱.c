#include <stdio.h>

int main()
{
    int x[7] = {1,2,3,4,5,6,7};
    int n;
    scanf ("%d", &n);
    int week = n / 7;
    int restday = n % 7;
    int total = 0;
    for (int w = 0; w < week; w++)
    {
        for (int i = 0; i < 7; i++)
        total += (x[i] + w);
    }
    for (int i = 0; i < restday; i++)
    total += (x[i] + week);
    printf ("%d", total);
    return 0;
}
