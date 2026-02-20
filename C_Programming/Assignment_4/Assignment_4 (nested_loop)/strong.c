#include<stdio.h>

int main() {
    int num, original, temp, rem ;
   
    int sum = 0;
    printf("Enter Number :");
    scanf("%d",&num);

    original = num;
    temp = num;

    while (temp > 0){//145//14
    rem = temp % 10;//5,4,1

      int fact = 1;
      int i = 1;
       while (i <= rem)//5
        {
           fact = fact * i;
           i++;
          }
    sum = sum + fact;      
    temp =  temp /10;//14,1

    }

if(sum == original){
    printf("%d strong num",original);
}
else{
    printf("%d not strong",original);
}

}