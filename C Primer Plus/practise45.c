#include <stdio.h>
#include <string.h>

int main()
{
    char arr[255];
    scanf ("%s",arr);
    int len=strlen(arr);
    arr[len]='\0';
    for (int i=0;i<len/2;i++)
    {
        char temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    }
    printf ("%s", arr);
    return 0;
}