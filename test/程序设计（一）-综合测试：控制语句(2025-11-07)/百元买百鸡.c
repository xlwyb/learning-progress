#include <stdio.h>

int main()
{
	double x, y, z;
	x=0;
	while (x < 15)
	{
		y = (100-7*x)/4;
		z = (300+3*x)/4;
		if (y==(int)y&&z==(int)z)
			printf ("公鸡%d只，母鸡%d只，小鸡%d只\n"， (int)x, (int)y, (int)z);
			x++;
	}
	return 0;
  }
