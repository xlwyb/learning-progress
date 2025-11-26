#include <stdio.h>

int main()
{
    char(a);
    int temp=0,count=0;
    while ((a=getchar())!='#')
    {
        if (a=='e') 
        {
            temp++;
            continue;
        }
        if (temp)
        {
            if (a=='i') count++; 
            else temp=0;
        }
    }
    printf ("%d\n",count);
    return 0;
}