
//Accept array and print only prime numbers of array.
#include <stdio.h>
int main(){

    int arr[100],num,i;

    printf("Enter the number of array: ");
    scanf("%d",&num);

    printf("Enter the numbers: \n");
    for(int i=0 ;i < num; i++){
        scanf("%d",&arr[i]);
    }

    printf("Prime numbers are :");

    for(int i =0; i <num ;i++){
      int n = arr[i];
      int isprime = 1;
      if(n <= 1){
        isprime = 0;
      }else {
        for(int j=2; j<=n/2; j++){
            if(n % j == 0){
                isprime = 0;
                break;
            }
        }
      }
        if(isprime) {
        printf("%d ",arr[i]);
        }
    }
    return 0;
}
