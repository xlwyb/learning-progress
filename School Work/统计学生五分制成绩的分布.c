#include <stdio.h>

int main()
{
	int A, B, C, D, E, N, i, x;
	A=0;B=0;C=0;D=0;E=0;i=1;
	scanf ("%d",&N);
	while (i<=N)
	{
		scanf ("%d",&x);
		if (x>=90) A++; 
		if (x>=80&&x<90) B++;
		if (x>=70&&x<80) C++;
		if (x>=60&&x<70) D++;
		if (x<60) E++;
		i++;
	}
	printf ("%d %d %d %d %d", A, B, C, D, E);
	return 0;
}
