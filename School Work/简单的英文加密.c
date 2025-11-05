#include <stdio.h>
#include <iso646.h>

int main()
{
    char letter, turn;
    scanf ("%c", &letter);
    if ((letter>=65 and letter<=90) or (letter>=97 and letter<=122))
    {
        if (letter+5>90&&letter<=90) turn = letter+5-90+64;
        if (letter+5>122) turn = letter+5-122+96;
        else turn = letter+5;
        printf ("%c", turn);
    }
    return 0;
}
//实现一个简单的英文字母加密程序(确保输入的是英文字符)，用该字母后第5个字母加密，大小写对应。
//如果超过Z/z，则回头从A/a继续向后数。例如，输入A输出F，输入a对应f，输入X，输出C，输入x输出c
