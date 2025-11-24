#include <stdio.h>

int main()
{
    float Deirdre=100.0, Daphne=100.0;
    int year=0;
    do
    {
        year++;
        Deirdre+=10;
        Daphne+=Daphne*0.05;  
    } while (Deirdre>Daphne);
    printf ("%d year latter: \n",year);
    printf ("Deirdre if %.2f, Daphne is %.2f\n" ,Deirdre, Daphne);
    return 0;
}