#include <stdio.h>

int main()
{
    int x, i;
    printf ("please enter a number: ");
    scanf ("%d", &x);
    i = x;
    while (i <= x+10)
    printf ("%d ", i++);
    return 0;
}