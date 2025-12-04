#include <stdio.h>
void change(int *a, int *b);

int main()
{
    int a, b;
    scanf ("%d%d", &a, &b);
    change (&a, &b);
    printf ("%d %d\n", a, b);
    return 0;
}
void change(int *a, int *b)
{
    *a+=*b;
    *b=*a-2**b;
}