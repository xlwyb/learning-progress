#include <stdio.h>

int main()
{
    int n, m;
    scanf ("%d%d", &n, &m);
    int arr[n];
    for (int i=0;i<n;i++) scanf ("%d", &arr[i]);
    int temp[n-m];
    int move[m];
    for (int i=0;i<n-m;i++) temp[i]=arr[i];
    for (int i=0;i<m;i++) move[i]=arr[n-i-1];  
    for (int i=0;i<n-m;i++) arr[i+m]=temp[i];
    for (int i=0;i<m;i++) arr[i]=move[m-i-1];  
    for (int i=0;i<n;i++) printf ("%d ",arr[i]);
    return 0;
}
