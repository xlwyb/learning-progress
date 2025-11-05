#include <stdio.h>

int main()
{
    char firstname[20], lastname[20];
    printf ("please enter your first name: ");
    scanf ("%s", firstname);
    printf ("please enter your last name: ");
    scanf ("%s", lastname);
    printf ("your name is %s,%s\n", firstname, lastname);
    return 0;
}