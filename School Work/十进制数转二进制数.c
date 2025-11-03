#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int max_bit = 0;
    while ((1 << (max_bit + 1)) <= n) 
        max_bit++;
    for (int i = max_bit; i >= 0; i--) 
    {
        int bit = (n >> i) & 1;
        if (bit == 1) printf("1");
        else  printf("0");
    }
    return 0;
}
