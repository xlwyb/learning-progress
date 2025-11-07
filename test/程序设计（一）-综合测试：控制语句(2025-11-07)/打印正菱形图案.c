#include <stdio.h>

int main()
{
	int n;
	scanf ("%d", &n);
  char a = '*';
	printf ("%*c\n", n, a);
	for (int i=1;1+2*i<=n;i++)
	{
		printf ("%*c ", n-2*i,a);
        for (int x=2;x<=2*i;x++) printf ("* ");
		printf ("*\n");
	}
	for (int i=1;n-2*i>1;i++)
	{
		printf ("%*c ", 2*i+1,a);
        for (int x=2;x<=n-2*i-1;x++) printf ("* ");
		printf ("*\n");
	}
  printf ("%*c\n", n,a);
	return 0;
}
