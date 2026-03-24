# include<stdio.h>
int main(){
    int arr[6] = {2,3,4,5,6,6};
     int sum;
    for(int i =0; i< 6;i++){
         sum = sum+arr[i];
}
float avg = (float)sum/5;
printf("avg %f",avg);

}