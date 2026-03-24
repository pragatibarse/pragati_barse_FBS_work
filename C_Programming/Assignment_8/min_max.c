# include<stdio.h>
int main(){
  int n = 5;
  int arr[n];
  for(int i = 0; i< n; i++){
    printf("enter the number: ");
    scanf("%d",&arr[i]);
  }
     int max = arr[0];
    int min = arr[0];

  for(int i = 0; i< n;i++ ){
    if(arr[i] > max ){
     max =  arr[i];
    }
}

  for(int i = 0; i< n;i++ ){
    if(arr[i] < min ){
     min =  arr[i];
    }
}
        printf("max no is: %d\n",max);
        printf("min no is:  %d",min);

}

