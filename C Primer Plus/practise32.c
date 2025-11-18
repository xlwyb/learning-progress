#include <stdio.h>

int main()
{
    char x = '$';
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        printf ("%c", x);
        printf ("\n");
    }
    return 0;
}