#include <stdio.h>
void ic(void);
void br(void);
int main(void)
{
    br();
    printf (", ");
    ic();
    ic();
    br();
    return 0;
}
void br(void)
{
    printf ("Brazil, Russia");
}
void ic()
{
    printf ("India, China\n");
}