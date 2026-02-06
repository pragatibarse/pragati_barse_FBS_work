#include<stdio.h>
int main() {
    char ch = 'o';

    if((ch >= 65 && ch <= 90) || (ch >=97 && ch <= 122))
    {
        if(ch == 65 || ch ==69 || ch ==73 ||ch ==79 ||ch==85 || ch == 97 || ch ==101 || ch ==105 ||ch ==111 || ch ==117)
        {

            printf("%d is vowel", ch);
        }
        else {
            printf("%d is consonants",ch);
        }

    }
    else{
        printf(" %d isspecial character or degit", ch);
    }
}