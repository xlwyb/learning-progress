#include <stdio.h>

int main()
{
    float w;
    scanf ("%f", &w);
    if (w<=50) printf ("%.2f", 0.53*w);
    else printf ("%.2f",50*0.53+0.58*(w-50)); 
    return 0;
}
