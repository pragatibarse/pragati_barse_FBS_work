#include <stdio.h>

void check_vow_conso(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is vowel\n", ch);
        }
        else
        {
            printf("%c is consonant\n", ch);
        }
    }
    else
    {
        printf("%c is not alphabet\n", ch);
    }
}

int main()
{
    char ch = 'b';
    check_vow_conso(ch);
    return 0;
}