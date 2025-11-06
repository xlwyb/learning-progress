#include <stdio.h>
#include <string.h>

int main()
{
    char firstname[20], lastname[20];
    printf ("please enter your first name: ");
    scanf ("%s", firstname);
    printf ("please enter your last name: ");
    scanf ("%s", lastname);
    int length1 = strlen(firstname);
    int length2 = strlen(lastname);
    printf ("%s %s\n", firstname, lastname);
    printf ("%*d %*d\n", length1, length1, length2, length2);
    printf ("%s %s\n", firstname, lastname);
    printf ("%-*d %-*d\n", length1, length1, length2, length2);
    return 0;
}