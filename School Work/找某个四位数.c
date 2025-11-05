#include <stdio.h>
#include <math.h>

int main()
{
    int thousand, hundred, ten, single, i, sum, multiple, x;
    for (int n = 1000; n<=9999;n++)
    {
        thousand = n/1000;
        i = n%1000;        
        hundred = i/100;
        i = i%100;
        ten = i/10;
        single = i%10;
        sum = thousand + ten;
        multiple = hundred * single;
        x = 31;
        while (x<100)
        {
            if (x*x==n&&sum==10&&multiple==12)
            {
                printf("%d ", n);
                break;
            }
            x++;
        }
    }
    return 0;
}
//求满足下面条件的四位数：该数是一个完全平方数，且千位和十位数字之和为10，百位和个位数字之积位12。

（完全平方数是指这个数是某个数的平方数）.
