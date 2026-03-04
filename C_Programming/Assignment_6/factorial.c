# include<stdio.h>
int fact(int n){
 int original = n;
 
 int i=1, fact = 1;//5
 while(i  <= n){
 fact = fact * i;//1
 i++;
 }
 return fact;
}

int main(){
    int num;
    printf("enter the num :");
    scanf("%d",&num);
    printf("factorial is %d",fact(num));
}