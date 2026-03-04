# include<stdio.h>

int strong(int num){
    int sum=0;
    int original = num;

while( num > 0){//145
   int fact=1;
    int last = num % 10; //5

       for(int i= 1;i <=last; i++){
         fact = fact *i;//5!=120
       }
   
     num = num /10;//14;   
     sum = sum +fact;

}
  if(original == sum)

    return 1;
else return 0;

}


int main(){
    int num;
    printf("eneter the number :");
    scanf("%d",&num);
    if(strong(num) == 1){
        printf("strong");
    }
    else{
        printf("not strong");
    }
}