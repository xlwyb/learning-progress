#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int sample[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        scanf ("%d", &sample[i][j]);
    }
    int sum=1;
    int single=0;
    int standard[n];
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                if (sample[i][k]==sample[j][k]&&k<n) single++;
            }
            if (single==n) sum++;
            if (sum>n/2)
            {
                for (int x=0;x<n;x++) standard[x]=sample[i][x];
                break;
            }
            single=0;
        }
        if (sum>n/2) break;
        else sum=1;
    }
    for (int i=0;i<n;i++)
    {
        if (standard[i]==1) printf ("%d ", i+1);
    }
    return 0;
}
