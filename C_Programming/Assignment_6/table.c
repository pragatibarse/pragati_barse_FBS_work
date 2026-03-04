//print table
# include<stdio.h>
int print(int n){
    for(int i=1; i<=10; i++){
    printf("%d\n",i*5);
    }
}

int main(){
int num;
printf("enter the number :");
scanf("%d",&num);
print(num);
}