#include <stdio.h>

int main()
{
    double year;
    scanf ("%lf", &year);
    printf("你的寿命：%d岁\n", (int)year );
    printf ("人的一生有%le秒\n", year * 3.156e7);
    return 0;
}
