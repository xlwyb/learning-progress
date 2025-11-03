#include <stdio.h>

int main()
{
    double quart;
    scanf("%lf", &quart);
    printf("水的质量：%d夸脱\n", (int)quart);
    printf("该水中含有%le个水分子\n", quart * 1e23 * (1.0 / 3.0));
    return 0;
}