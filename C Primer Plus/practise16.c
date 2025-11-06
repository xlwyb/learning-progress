#include <stdio.h>

int main()
{
    float n;
    scanf ("%f", &n);
    printf ("The input is %.1f or %.1e\n", n, n);
    printf ("The input is %+.3f or %.3E\n", n, n);
    return 0;
}