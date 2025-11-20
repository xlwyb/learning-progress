#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[10];
    char arr2[10];
    scanf ("%s", arr1);
    scanf (" %s", arr2);
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    int same = 0;
    int elsame = 0;
    if (len1!=len2) printf ("1\n");
    if (len1==len2)
    {
        for (int i=0;i<len1;i++)
        {
            if (arr1[i]==arr2[i]) same++;
            if ((arr1[i]-arr2[i]==32)|(arr2[i]-arr1[i]==32)) elsame++;
        }
        if (same==len1&&same!=0) printf ("2\n");
        if (same+elsame==len1&&elsame!=0) printf ("3\n");
        if (same+elsame!=len1) printf ("4\n");
    }
    return 0;
}
