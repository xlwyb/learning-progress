#include <stdio.h>

int main()
{
	int n, x, max, i;
	scanf ("%d", &n);
	scanf ("%d", &max);
	i = 1;
	while (i<= n-1 )
	{
		scanf ("%d", &x);
		if (x>max) max=x;
		i++;
	}
	printf ("%d", max);
	return 0;
}
