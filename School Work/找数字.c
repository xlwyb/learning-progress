#include <stdio.h>
#include <math.h>

int main()
{
    int hundred, ten, single, i, sum, multiple;
    for (int n = 200; n<=300;n++)
    {
        hundred = n/100;
        i = n%100;
        ten = i/10;
        single = i%10;
        sum = hundred + ten + single;
        multiple = hundred * ten * single;
        if (sum==12&&multiple==42) printf ("%d\n",n);
    }
    return 0;
}
//编写一个程序，求出200到300之间满足以下条件的所有正整数：

1.三个数位上的数之积为42.

2.三个数字之和为12
