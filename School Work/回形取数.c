#include <stdio.h>
int main()
{
    int m,n;
    scanf ("%d%d",&m,&n);
    int arr[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        scanf ("%d", &arr[i][j]);
    }
    int up=0, down=m-1, left=0, right=n-1;
    int count=0;
    int result[m*n];
    while(count<m*n)
    {
        for (int i=up;i<=down&&count<m*n;i++) 
        {
            result[count]=arr[i][left];
            count++;
        }
        left++;
        for (int i=left;i<=right&&count<m*n;i++) 
        {
            result[count]=arr[down][i];
			count++;
        }
        down--;
        for (int i=down;i>=up&&count<m*n;i--)
        {
            result[count]=arr[i][right];
			count++;
        }
        right--;
        for (int i=right;i>=left&&count<m*n;i--)
        {
            result[count]=arr[up][i];
			count++;
        }
        up++;
    }
	for (int i=0;i<m*n-1;i++) printf ("%d ",result[i]);
    printf ("%d", result[m*n-1]);
    return 0;
}
