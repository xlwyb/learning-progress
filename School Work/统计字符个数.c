#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    fgets(arr,1000,stdin);
    arr[strcspn(arr,"\n")] = '\0';
    int len = strlen(arr);
    int letter=0, number=0, space=0, other=0;
    for (int i=0;i<len;i++)
    {
        if ((arr[i]>='A'&&arr[i]<='Z')|(arr[i]>='a'&&arr[i]<='z')) letter++;
        else if (arr[i]>='0'&&arr[i]<='9') number++;
        else if (arr[i]==' ') space++;
        else other++;
    }
    printf ("%d %d %d %d\n", letter, number, space, other);
    return 0;
}
