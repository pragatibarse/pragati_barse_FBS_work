#include<stdio.h>
int main () {
    int num,sum,j;

    printf("Enter the number :");
    scanf("%d",&num);

    printf("Perfect number between 1 and %d are \n", num);

    for(int i =1; i<= num; i++){
        sum = 0;

        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i && i != 0) {
            printf("%d ", i);
        }
    }

    }
