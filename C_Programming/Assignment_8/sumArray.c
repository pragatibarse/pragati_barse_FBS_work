//  two array and add sum in third array

#include<stdio.h>
int main(){
    int arr1[3]= {1,2,3};
    int arr2[3]= {5,6,7};
    int arr3[3];

    //add
    for(int i=0; i< 3;i++){
        arr3[i]= arr1[i] + arr2[i];
    }
    //print
    printf("Sum of arrays is:");
    for(int i =0; i<3; i++){
        printf("%d",arr3[i]);
    }
}