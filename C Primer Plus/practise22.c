#include <stdio.h>

int main()
{
    int time;
    printf ("please enter the time(minute) that you want to convert: ");
    scanf ("%d", &time);
    const int pass = 60;
    printf ("Enter 0 to close the cycle.\n");
    while (time > 0)
    {
        int hour = time/pass;
        int minute = time%pass;
        printf ("%d minute(s) includes %d hour(s) and %d minute(s).\n", time, hour, minute);
        printf ("please enter the another one: ");
        scanf ("%d", &time);
    }
    printf ("Your have completed it.\n");
    return 0;
}