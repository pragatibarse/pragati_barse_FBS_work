#include<stdio.h>

int main(){
    int num = 121;
    int rev;
   int a = num / 100 ;//1
   int b = (num /10) % 10;//2
   int c = num % 10;//1

   rev = c * 100 + b *10 + a;

   if (num == rev)
   printf("%d is palindrome num",num);
   else{
      printf("%d is palindrome not num",num);
   }
}

