#include <stdio.h>

int main()
{
    int centimeter;
    char name[20];
    printf ("please enter your name: ");
    scanf ("%s", name);
    printf ("please enter your height(cm): ");
    scanf ("%d", &centimeter);
    printf ("%s, you are %.2f meter tall", name, centimeter/100.0);
    return 0;
}