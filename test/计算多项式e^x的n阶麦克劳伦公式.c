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
    int k = 1;       
    while (fabs(temp) >= eps) 
    {   
        for (int j=i;j>=1;j--) k *= j;       
        temp = pow(x,i)*pow(-1,i)/k;
        sum += temp;
        i++;
    }
    sum += temp;
    printf("%.3lf\n", sum);
    return 0;
}