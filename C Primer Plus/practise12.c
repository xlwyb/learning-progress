#include <stdio.h>

int main()
{
    float height;
    scanf("%f", &height);
    printf("你的身高（英寸）：%d英寸\n", (int)height);
    printf("你的身高（厘米）：%f cm\n", height * 2.54);
    return 0;
}