# include<stdio.h>
int main(){
   char arr[5][50];
    for(int i = 0; i < 5;i++){
        printf("eneter name : ");
        scanf("%s",&arr[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%s\n ", arr[i]);
    }

}