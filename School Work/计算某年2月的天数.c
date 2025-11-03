#include <stdio.h>
#include <iso646.h>

int main()
{
    int n;
    scanf ("%d",&n);
    if ((n%4==0 and n%100!=0)or n%400==0)
    printf ("%d年的2月有29天", n);
    else printf ("%d年的2月有28天", n);
    return 0;
}
