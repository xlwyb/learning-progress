#include <stdio.h>

int main()
{
    int down, up;
    printf ("Please enter the down and up.\n");
    scanf ("%d%d" ,&down,&up);
    printf ("num    square    cub\n");
    for (int i=down;i<=up;i++)
    printf ("%d%10d%8d\n", i, i*i, i*i*i);
    return 0;
}