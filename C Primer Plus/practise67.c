#include <stdio.h>

int fabo(int n);
int main()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", fabo(n));
    return 0;
}
int fabo(int n)
{
    int f1=1, f2=1;
    int fn=0;
    if (n<=2) return 1;
    else 
    {
        for (int i=0;i<n-2;i++)
        {
            fn=f1+f2;
            f2=f1;
            f1=fn;
        }
        return fn;
    }
}