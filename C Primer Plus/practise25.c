#include <stdio.h>

int main()
{
    float height;
    printf ("Enter aheight in centimeters: ");
    scanf ("%f", &height);
    while (height > 0)
    {
        int feet = (int)(height/30.48);
        float inch = (height-feet*30.48)/2.54;
        printf ("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
        printf ("Enter a height in centimeterds (<=0 to quit): ");
        scanf ("%f", &height);
    }
    return 0;
}