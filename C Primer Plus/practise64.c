#include <stdio.h>

void report(void);
int main()
{
    report();
    return 0;
}
void report(void)
{
    char ch;
    while(scanf("%c", &ch)!=EOF)
    {
        if (ch>='a'&&ch<='z') printf ("%d ", ch-'a'+1);
        else if (ch>='A'&&ch<='Z') printf ("%d ", ch-'A'+1);
        else if (ch!='\n') printf ("-1 ");
    }
    printf ("\n");
}