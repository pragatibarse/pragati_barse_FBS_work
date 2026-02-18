# include <stdio.h>
int main() {
int start;
int end;
int sum = 0;

printf("Enter  start value: ");
scanf("%d",&start);

printf("Enter end value: ");
scanf("%d", &end);

int i = start;
while(i <= end)
{
    sum = sum + i;
    i++;
}
    printf("sum %d to %d is %d\n",start,end, sum);
}