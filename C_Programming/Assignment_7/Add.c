# include<stdio.h>
int add(int *a,int*b){
return *a +* b;
 
}

int main(){
    int x = 20;
    int y = 30;
    int sum = add(&x,&y);
    printf("%d",sum);

}