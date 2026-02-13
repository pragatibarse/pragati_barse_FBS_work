#include <stdio.h>

int main() {
 int num;
 printf("Enter the number:" );
 scanf("%d",&num);

 if(num % 3 == 0 ){
    printf( "%d num is divisible by 3 but not 5 ", num);
 }
 else if (num % 5 == 0)
 {
    printf(" %d num is divisible by 5 but not 3",num);
 }
 else if (num % 3 == 0 && num % 5 == 0){
    printf("%d num is divisible by both 3 and 5",num);
 }
 else{
     printf("%d num is divisible by nothing",num);
   
 }
}