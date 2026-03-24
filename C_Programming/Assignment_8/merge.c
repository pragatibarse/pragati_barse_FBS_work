//Merge two arrays
# include<stdio.h>
int main() {
    int arr[] = {1,2,3};
    int brr[] = {4,5,6};
    int size1 = 3;
    int size2 = 3;

    int crr[6];

    //copy
    for(int i = 0; i< size1; i++){
        crr[i] = arr[i];
    }
    //copy
    for(int i= 0; i< size2;i++){
        crr[size1+ i] = brr[i];
    }
    //print
    printf("merge array is: ");
    for(int i = 0; i < size1 +size2;i++){
        printf("%d",crr[i]);
    }
}