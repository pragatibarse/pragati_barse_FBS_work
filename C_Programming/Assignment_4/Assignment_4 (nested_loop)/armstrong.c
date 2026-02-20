# include <stdio.h>
# include <math.h>
int main() {
    int num,original, count =0, temp,rem,sum=0;

    printf("Enter the number:");
    scanf("%d",&num);

    temp = num;
    original = num;

    while (num > 0) //123
    {
        rem = num % 10;//3
        num = num/ 10;//12
        count++;
    }
        printf("Total count: %d\n",count);//3
        while(temp > 0){//153
            rem = temp % 10; //3,5
            sum = sum + (int) pow (rem ,count);//27+125+1= 153
            temp = temp / 10;//15/1
        }
        if(sum == original){
            printf("%d num is armstrong",original);
        }
        else{
            printf("%d num is not armstrong",original);
        }


}