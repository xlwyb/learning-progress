#include <stdio.h>
void to_base_n(int n, int m);

int main()
{
    int n,m;
    scanf ("%d%d", &n, &m);
    to_base_n(n,m);
    return 0;
}
void to_base_n(int n, int m)
{
    if (n>0) to_base_n(n/m,m);
    if (n==0) ;
    else printf("%d", n%m);
}