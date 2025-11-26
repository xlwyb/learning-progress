#include <stdio.h>
#define base 10.00
#define pre_tax 0.15
#define mid_tax 0.2
#define exd_tax 0.25

int main()
{
    float hour, total=0, tax=0, salary=0; 
    scanf ("%f",&hour);
    if (hour>=40) hour *= 1.5;
    total = hour*base;
    if (total<=300) tax=total*pre_tax;
    else if (total>300&&total<=450) tax=45+(total-300)*mid_tax;
    else tax=45+30+(total-450)*exd_tax;
    salary=total-tax;
    printf ("%.2f %.2f %.2f\n", total, tax, salary);
    return 0;
}