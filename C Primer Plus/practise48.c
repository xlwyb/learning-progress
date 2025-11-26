#include <stdio.h>

int main()
{
    char letter;
    int space=0, turn=0, other=0;
    while((letter=getchar())!='#')
    {
        if (letter==' ') space++;
        else if (letter=='\n') turn++;
        else other++;
    }
    printf ("%d %d %d\n", space, turn, other);
    return 0;
}