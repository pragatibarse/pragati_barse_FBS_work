# include<stdio.h>

int main() {
    int num;
    int flag = 0;

    printf("Enter the number: ");
    scanf("%d",&num);
    int i = 2;

    while( i <= num){
        if(num % i == 0){
           flag = 1;
           break;
        }
    i++;
    }
if( flag == 0)
printf("prime");
else
printf("not prime");
}