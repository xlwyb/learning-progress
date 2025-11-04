#include <stdio.h>

int main()
{
    int n, multiply=1;
    scanf ("%d", &n);
    while (n>0)
    {
        multiply *= n;
        n--;
    }
    printf ("%d", multiply);
    return 0;
}
