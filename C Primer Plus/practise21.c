#include <stdio.h>

int main()
{
    float gase, distant;
    printf ("please enter your used gase(gallon): ");
    scanf ("%f", &gase);
    printf ("please enter your diving distant(mile): ");
    scanf ("%f", &distant);
    printf ("avearge: %.1f\n", distant/gase);
    const float gallon = 3.785, mile = 1.609;
    printf ("The efficiency is %.1f", (gase*gallon)/(distant*mile/100));
    return 0;
}