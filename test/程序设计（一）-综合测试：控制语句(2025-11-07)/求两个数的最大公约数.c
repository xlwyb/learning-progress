#include <stdio.h>

int main()
{
	int m,n,x;
	scanf ("%d%d", &m, &n);
	if (m<n) x=m;
	else x=n;
	for (int i=x;i>0;i--)
	{
		int temp1=m%i;
		int temp2=n%i;
		if (temp1==0&&temp2==0)
        {
            printf ("%d",i);
            break;
        }
	}
	return 0;
}
