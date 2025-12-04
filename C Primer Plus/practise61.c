#include <stdio.h>
void chline(char ,int , int);

int main()
{
    char ch;
    int i, j;
    scanf ("%c", &ch);
    scanf ("%d%d", &i, &j);
    chline(ch, i, j);
    return 0;
}
void chline(char ch, int i, int j)
{
    for (int k=0;k<i;k++)
    {
        for (int l=0;l<j;l++)
        {
            printf ("%c", ch);
        }
        printf ("\n");
    }
}