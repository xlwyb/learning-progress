#include <stdio.h>

int main()
{
    char a;
    int count = 0;
    while ((a=getchar())!='#')
    {
        if (a=='.') 
        {
            a='!';
            count++;
            putchar(a);
        }
        else if (a=='!')
        {
            count++;
            putchar(a);
            putchar(a);
        }
        else putchar(a);
    }
    printf ("\n");
    printf ("%d\n", count);
    return 0;
}