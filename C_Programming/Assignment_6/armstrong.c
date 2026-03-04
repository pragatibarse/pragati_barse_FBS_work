# include<stdio.h>
int armstrong(int num) {
 int rev, count = 0,original;
    original = num;
    while( num > 0){//153
         rev = num % 10;//3
         num = num /10;//15
         count++;
    }

    int temp = original,sum=0;

    while(temp > 0){
        int rem = temp % 10;//3
        int power = 1;

        for(int i =1; i <= count; i++){
            power = power * rem; // 1*3//
        }
        sum = sum + power;
        temp = temp/10;
    }

    if(sum == original)
    return 1;
    else
     return 0;

}

int main(){
    int num;
    printf("enter num :");
    scanf("%d",&num);
   if (armstrong(num)){
    printf("%d is an armstrong num",num);
   }
   else{
    printf("%d is an armstrong not num",num);
   }
   return 0;
}