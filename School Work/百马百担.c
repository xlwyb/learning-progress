#include <stdio.h>

int main()
{
    double Big, Medium, Small;
    Big = 0;
    while (Big < 12)
    {
        Medium = (100-5*Big)/3;
        Small = (200+2*Big)/3;
        if (Medium==(int)Medium&&Small==(int)Small)
            printf ("%d %d %d\n",(int)Big ,(int)Medium,(int)Small);
        Big++;
    }
    return 0;
}