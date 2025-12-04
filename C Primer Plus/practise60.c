#include <stdio.h>
float compare(int count);

int main()
{
    int count;
    scanf ("%d",&count);
    printf ("The minimum is %f\n", compare(count));
    return 0;
}
float compare(int count)
{
    float min=0,temp=0;
    scanf("%f", &min);
    for (int i=1;i<count;i++)
    {
        scanf("%f", &temp);
        if (temp<min) min=temp;
    }
    return min;
}