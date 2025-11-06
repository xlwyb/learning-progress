#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf ("please enter your name: ");
    scanf ("%s", name);
    int len = strlen(name);
    printf ("%s\n", name);
    printf ("%20s\n", "\"name\"");
    printf ("%-20s\n","\"name\"");
    printf ("%*s\n",len+5,"\"name\"");
    return 0;
}
