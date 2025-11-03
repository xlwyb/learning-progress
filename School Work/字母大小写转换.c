#include <stdio.h>

int main()
{
    char letter, turn;
    scanf ("%c", &letter);
    if (letter>=65&&letter<=90)
    {
        turn = letter+32;
        printf ("%c", turn);
    }
    
    else if (letter>=97&&letter<=122)
    {
        turn = letter-32;
        printf ("%c", turn);
    }
    else printf ("%c", letter);
    return 0;
}
