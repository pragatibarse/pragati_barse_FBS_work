// print alternate element in array

# include<stdio.h>
int main(){
 int arr[100],n,i;
 
 printf("Enter the number of element: ");
 scanf("%d", &n);

 printf("Enter Element:\n");
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }

 printf("Alternate element are:\n");
 for(i=0;i<n; i=i+2){
    printf("%d",arr[i]);
 }
 return 0;
}