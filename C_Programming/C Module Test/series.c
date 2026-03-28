//Write a program to print following series:
//1 + 11+ 111+ 1111+ ..... + n times 1

#include<stdio.h>
int main(){
int i, n, num=0;

printf("Enter the series..");
scanf("%d",&n);
for(int i = 1; i <=n;i++){
    num = num *10+1;
    printf("%d 1 ", num);
}

}
