#include <stdio.h>

void arring(double *a,double *b, double *c);
int main()
{
    double max, medium, small;
    scanf ("%lf%lf%lf", &max, &medium, &small);
    arring(&max, &medium, &small);
    printf ("The max: %lf\nThe medium is %lf\nThe small is %lf\n", max, medium, small);
}
void arring(double *a, double *b, double *c)
{
    double arr[3]={*a, *b, *c};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2-i;j++)
        {
            if (arr[j]<arr[j+1])
            {
                double temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    *a=arr[0];
    *b=arr[1];
    *c=arr[2];
}