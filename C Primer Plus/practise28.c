#include <stdio.h>

int main()
{
    printf ("This program computes modull.\n");
    printf ("Enter an integar to serve as the second operated: ");
    int integar;
    scanf ("%d", &integar);
    printf ("Now enter the first operand: ");
    int num;
    scanf ("%d", &num);
    while (num > 0)
    {
        printf ("%d %% %d is %d\n", num, integar, num%integar);
        printf ("Enter next number for first operand (<= 0 to quit): ");
        scanf ("%d", &num);
    }
    printf ("Done");
    return 0;
}