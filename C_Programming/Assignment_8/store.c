# include<stdio.h>
int main(){
    int n = 5;
    int arr[n];

  //input
  for(int i=0; i < n;i++){
    printf("Enter number: ");
    scanf("%d",&arr[i]);
  }

  //op
  for(int i =0; i< n; i++){
    printf("%d",arr[i]);
  }
}