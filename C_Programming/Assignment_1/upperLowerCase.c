#include<stdio.h>
int main () {
     char ch  = 'A';
     if(ch>='A' && ch <='Z'){
        printf("%c is Uppercase letter",ch);
     }
     else if(ch >= 'a' && ch <= 'z'){
        printf("%c is Lowercase letter",ch );
     }
     else{
        printf("Not an alphabet");
     }

}



