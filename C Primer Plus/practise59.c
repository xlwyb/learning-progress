#include <stdio.h>
int compare(int count);

int main()
{
    int count;
    scanf ("%d",&count);
    printf ("The maximum is %d\n", compare(count));
    return 0;
}
int compare(int count)
{
    int max=0,temp=0;
    scanf("%d", &max);
    for (int i=1;i<count;i++)
    {
        scanf("%d", &temp);
        if (temp>max) max=temp;
    }
    return max;
}