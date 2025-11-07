#include <stdio.h>

int main()
{
	int salary[7];
	for (int i=0;i<7;i++) scanf ("%d", &salary[i]);
	int sum=0;
	for (int i=0;i<7;i++) sum += salary[i];
	printf ("%d", sum); 
	return 0;
 } 
