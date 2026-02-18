# include <stdio.h>

int main(){
int num,last,first,temp;

printf("Enter the number:");
scanf("%d",&num);

last = num % 10;
temp = num;
while (temp >= 10)
{
    temp = temp/ 10;
}
first = temp;


printf("First num is %d\n", first);
printf("Last number is %d\n",last);
}
