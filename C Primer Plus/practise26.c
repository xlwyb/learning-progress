#include <stdio.h>
int main(void)                
{
    int count, sum, day;
    count = 0;                
    sum = 0;                  
    printf ("culculate the salary you earn: \n");
    printf ("Enter your working day: ");
    scanf ("%d", &day);
    while (count++ < day)      
    sum = sum + count*count;    
    printf("sum = %d\n", sum);
    return 0;                 
}