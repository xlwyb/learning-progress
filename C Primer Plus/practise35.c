#include <stdio.h>

int main()
{
    char x;
    scanf ("%c", &x);
    for (char y='A';y<=x;y++)
    {
        for (int i=x-y;i>0;i--)
        printf (" ");
        for (char z='A';z<=y;z++)
        printf ("%c", z);
        for (int i=1;i<=y-'A';i++)
        printf ("%c", y-i);
        printf ("\n");
    }
    return 0;
}