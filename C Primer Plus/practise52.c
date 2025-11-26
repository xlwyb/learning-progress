#include <stdio.h>

int main()
{
    char a;
    int count = 0;
    while ((a=getchar())!='#')
    {
        switch(a)
        {
            case '!' : putchar(a);
                       putchar(a);
                       count++;
                       break;
            case '.' : a='!';
                       putchar(a);
                       count++;
                       break;
            default :  putchar(a);
        }
    }
    printf ("\n");
    printf ("%d\n", count);
    return 0;
}