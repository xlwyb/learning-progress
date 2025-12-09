#include <stdio.h>
void copy(int *arr1,int *arr2,int n,int m);

int main()
{
    int sample[7];
    for (int i=0;i<7;i++) scanf ("%d", &sample[i]);
    int result[3];
    copy(sample,result,3,5);
    for (int i=0;i<3;i++) printf ("%d ", result[i]);
    return 0;
}
void copy(int *arr1,int *arr2,int n,int m)
{
    for (int i=n-1;i<m;i++) arr2[i-n+1]=arr1[i];
}