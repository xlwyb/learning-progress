#include <stdio.h>

int main()
{
    char name[20];
    float speed, volume;
    printf ("please enter your speed(Mb/s) and volume(MB): ");
    scanf ("%f %f", &speed ,&volume);
    printf ("please enter your file name: ");
    scanf ("%s", name);
    printf("At %.2f megabits pwt second, a file of %.2f megabites\n", speed , volume);
    printf ("downloads in %.2f seconds.", volume*8/speed);
    return 0;
}