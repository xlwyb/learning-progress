#include <stdio.h>

int main()
{
    int count=0;
    char letter;
    while ((letter=getchar())!='#')
    {
        if (letter!='\n')
        {
            printf ("%c-%d ", letter, (int)letter);
            count++;
        }
        if (count==8)
        {
            printf("\n");
            count=0;
        }
    }
    return 0;
}