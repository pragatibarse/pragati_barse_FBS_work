# include<stdio.h>
int main(){

    int num ,degit,temp;
    int sum = 0;
    printf("Enter the number :");
    scanf("%d", &num);//153

    temp = num;
    
    while( num > 0){ 
    degit = num % 10; // 3
    sum = sum +  degit* degit* degit;// 27
    num =  num / 10; //15
    }

    if(sum == temp)
    printf("Armstrong num");
    else
    printf("Not Armstrong number");
    
}