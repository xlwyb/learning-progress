#include <stdio.h>

int main()
{
    int friend=5, week=0;
    printf ("   week   friend\n");
    printf ("%7d%9d\n",week, friend);
    while (friend<150)
    {
        week++;
        friend-=week;
        friend*=2;
        printf ("%7d%9d\n",week, friend);
    }
    return 0;
}