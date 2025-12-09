#include <stdio.h>
void copy(double *arr1,double *arr2,int n);

int main()
{
    double sample[4][2]={{1.32,3.14},{2.46,6.18},{3.33,9.85},{4.51,13.01}};
    double result[4][2];
    for (int i=0;i<4;i++) copy(sample[i],result[i],2);
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<2;j++) printf ("%.2lf ",result[i][j]);
        printf ("\n");
    }
}
void copy(double *arr1,double *arr2,int n)
{
    for (int i=0;i<n;i++) arr2[i]=arr1[i];
}