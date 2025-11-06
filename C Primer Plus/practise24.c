#include <stdio.h>

int main()
{
    int time;
    printf ("please enter the time: ");
    scanf ("%d", &time);
    printf ("please enter 0 to end the result.\n");
    while (time > 0)
    {
        printf ("%d day(s) is turned in %d week(s) and %d day(s).\n", time, time/7, time%7);
        printf ("please enter another one: ");
        scanf ("%d", &time);
    }
    printf ("You have finished it.\n");
    return 0;
}