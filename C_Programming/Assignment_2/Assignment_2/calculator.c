#include <stdio.h>
int main () {
   int a =10;
   int b = 20;
   char op = '-';
  int number;

  if( op == '*')
  {
    number = a * b;
  printf("Multiplication of %d and %d is  %d",a,b,number);
  }
  else if (op == '-')
  {
    number = a - b;
    printf("Substraction of %d and %d is  %d",a,b,number);
  }
    else if (op == '/')
    {
        number = a / b;
        printf("Division of %d and %d is  %f",a,b,number);
    }
    else if (op == '+')
    {
        number = a + b;
    printf("Addition of %d and %d is  %d",a,b,number); 

    }
        else{
        printf("Invalid"); 
        }

}
