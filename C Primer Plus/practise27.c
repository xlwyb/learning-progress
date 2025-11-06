#include <stdio.h>
#include <math.h>
void culculate(int n);

int main(void)
{
    int num;
    printf ("Enter a number you want: ");
    scanf ("%d", &num);
    culculate(num);
    return 0;
}
void culculate(int n)
{
    n = pow(n, 3); 
    printf ("%d", n);
}