#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    char result[(1<<n)-1];
    result[0] = 'A';
    for (int i=2;i<=n;i++)
    {
        int half_len = (1<<(i-1))-1;
        char last[half_len];
        for (int j=0;j<half_len;j++)
        last[j]=result[j];
        result[half_len] = 'A'+i-1;
        for (int g=half_len+1, h=0;g<(1<<n)-1;g++, h++)
        result[g]=last[h];
    }
    for (int i=0;i<(1<<n)-1;i++) printf ("%c", result[i]);
    printf ("\n");
    return 0;
}
