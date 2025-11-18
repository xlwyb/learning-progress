#include <stdio.h>
int main()
{
    char arr[26];
    int j=0;
    for (char i='a'; i<='z'; i++, j++)
        arr[j] = i;
    for (int k=0; k<26; k++)
        printf("%c", arr[k]);
    return 0;
}