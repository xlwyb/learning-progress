#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    double eps;
    scanf("%lf", &eps);
    double sum = 0;  
    double temp = 1; 
    int i = 0;         
    while (fabs(temp) >= eps) 
    {
        sum += temp;   
        i++;        
        temp *= (-x) / i;
    }
    sum += temp;
    printf("%.3lf\n", sum);
    return 0;
}
