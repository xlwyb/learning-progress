#include <stdio.h>

int main()
{
    char x = '$';
    for (int i=1;i<=4;i++)
    {
        for (int j=1;j<=8;j++)
        printf ("%c", x);
        printf ("\n");
    }
    return 0;
}