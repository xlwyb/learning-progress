#include <stdio.h>

int main()
{
    char x='A';
    for (int i=1;i<=6;i++)
    {
        for (int j=1;j<=i;x++,j++)
        printf ("%c", x);
        printf ("\n");
    }
    return 0;
}