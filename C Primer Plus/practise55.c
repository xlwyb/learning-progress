#include <stdio.h>
#define level1 8.75
#define level2 9.33
#define level3 10.00
#define level4 11.20
#define pre_tax 0.15
#define mid_tax 0.2
#define exd_tax 0.25

int main()
{
    float hour, total=0, tax=0, salary=0, base=0;
    int choice; 
    printf ("*****************************************************************\n");
    printf ("Enter the number corresponding to the desired pay rate ot action:\n");
    printf ("1) $8.75/hr                          2) $9.33/hr\n");
    printf ("3) $10.00/hr                         4) $11.20/hr\n");
    printf ("5) quit\n");
    printf ("*****************************************************************\n");
    printf ("Please enter your level: ");
    scanf ("%d", &choice);
    switch (choice)
    {
        case 1: base=level1;
                break;
        case 2: base=level2;
                break;
        case 3: base=level3;
                break;
        case 4: base=level4;
                break;
        case 5: 
        default:   return 0;
    }
    printf ("Please enter your working hour: ");
    scanf ("%f",&hour);
    if (hour>=40) hour *= 1.5;
    total = hour*base;
    if (total<=300) tax=total*pre_tax;
    else if (total>300&&total<=450) tax=45+(total-300)*mid_tax;
    else tax=45+30+(total-450)*exd_tax;
    salary=total-tax;
    printf ("Your total money is %.2f.\nYour tax is %.2f.\nYour salary is %.2f.\n", total, tax, salary);
    return 0;
}