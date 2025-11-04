#include <stdio.h>
#include <iso646.h>

int main()
{
    int year, month;
    scanf ("%d%d",&year ,&month);
    if (month==2)
    {
        if ((year%4==0 and year%100!=0) or year%400==0)
        printf ("29");
        else printf ("28");
    }
    else if (month==4 or month==6 or month==9 or month==11 ) printf ("30");
        else printf ("31");
    return 0;
}
